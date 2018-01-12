#include "sales_data_chain.h"

int lengthNode( sales_data* node_head ){
    int i{0};
    sales_data *ptmp=nullptr;
    ptmp = node_head;
    while(ptmp!=nullptr){
        ptmp = ptmp->next;
        i++;
    }
    return i;
}


sales_data* sortNode( sales_data* node_head ){

    return node_head;
}


sales_data* findNode( sales_data* node_head, std::string para ) {

    std::string paratype;
    sales_data *ptmp = nullptr, *ptmplast = nullptr;
    ptmplast = node_head;
    ptmp = node_head;
    //paratype = typeid( para ).name();
    if ( ( ptmp == nullptr ) )
    {
        std::cout << "The node which U wanna find is non-existent." << std::endl;
        return nullptr;
    }
    /*if ( paratype == typeid( std::string ).name() )
    {*/
        while ( ( ptmp != nullptr ) && ( ptmp->isbn != para ) )
        {
            ptmplast = ptmp;
            ptmp = ptmp->next;
        }
        if ( ptmp == nullptr )
        {
            std::cout << "The ISBN which U input is wrong." << std::endl;
        }
        else
        {
            showItem( ptmp );
            return ptmp;
        }
    //}
    /*else if ( paratype == typeid( int ).name() )
    {
        while ( ( ptmp != nullptr ) && ( ptmp->num != para ) )
        {
            ptmplast = ptmp;
            ptmp = ptmp->next;
        }
        if ( ptmp == nullptr )
        {
            std::cout << "The number which U input is wrong." << std::endl;
        }
        else
        {
            showItem( ptmp );
            return ptmp;
        }
    }
    else if ( paratype == typeid( double ).name() )
    {
        while ( ( ptmp != nullptr ) && ( ptmp->price != para ) )
        {
            ptmplast = ptmp;
            ptmp = ptmp->next;
        }
        if ( ptmp == nullptr )
        {
            std::cout << "The price which U input is wrong." << std::endl;
        }
        else
        {
            showItem( ptmp );
            return ptmp;
        }
    }*/
    //else
    //{
    //    std::cout << "The type of parameter which U input is non-existent." << std::endl;
    //    return nullptr;
    //}
}
sales_data* findNode( sales_data* node_head, int para ) {

    std::string paratype;
    sales_data *ptmp = nullptr, *ptmplast = nullptr;
    ptmplast = node_head;
    ptmp = node_head;
    //paratype = typeid( para ).name();
    if ( ( ptmp == nullptr ) )
    {
        std::cout << "The node which U wanna find is non-existent." << std::endl;
        return nullptr;
    }
    /*if ( paratype == typeid( std::string ).name() )
    {*/
    while ( ( ptmp != nullptr ) && ( ptmp->num != para ) )
    {
        ptmplast = ptmp;
        ptmp = ptmp->next;
    }
    if ( ptmp == nullptr )
    {
        std::cout << "The number which U input is wrong." << std::endl;
    }
    else
    {
        showItem( ptmp );
        return ptmp;
    }
}

sales_data* findNode( sales_data* node_head, double para ) {

    std::string paratype;
    sales_data *ptmp = nullptr, *ptmplast = nullptr;
    ptmplast = node_head;
    ptmp = node_head;
    //paratype = typeid( para ).name();
    if ( ( ptmp == nullptr ) )
    {
        std::cout << "The node which U wanna find is non-existent." << std::endl;
        return nullptr;
    }
    /*if ( paratype == typeid( std::string ).name() )
    {*/
    while ( ( ptmp != nullptr ) && ( ptmp->price != para ) )
    {
        ptmplast = ptmp;
        ptmp = ptmp->next;
    }
    if ( ptmp == nullptr )
    {
        std::cout << "The price which U input is wrong." << std::endl;
    }
    else
    {
        showItem( ptmp );
        return ptmp;
    }
}

// 修正部分不合理结构（不利于添加新功能--关于链表），旧Style见注释代码；
sales_data* removeNode( sales_data *node_head, int num){
    
    int cnt{ 0 };
    sales_data *ptmp = nullptr, *ptmplast = nullptr;
    ptmplast = node_head;
    ptmp = node_head;
    if( ( ptmp == nullptr ) || ( num == 0 )){
        std::cout << "The node which U wanna remove is non-existent." << std::endl;
        return nullptr;
    }
    if( ptmp->num == num ){
        ptmp = ptmp->next;
        free( node_head );
        return ptmp;
    }
    else{
        while ( ( ptmp->num != num ) )
        {
            ptmplast = ptmp;
            ptmp = ptmp->next;
        }
        ptmplast->next = ptmp->next;
        ptmp->next = nullptr;
        free( ptmp );
        return node_head;
    }
    //if( num == 1 ){
    //    ptmp = ptmp->next;
    //    free(node_head);
    //    return ptmp;
    //}
    //else{
    //    while( ptmp->num!=num ){
    //        ptmplast = ptmp;
    //        ptmp = ptmp->next;
    //    }  
    //    ptmplast->next = ptmp->next;
    //    ptmp->next = nullptr;
    //    //free( ptmp );
    //    return node_head;
    //}
}


sales_data* creatNode( sales_data *node_head, std::string str, unsigned int total,
                       unsigned int sellout, double price){

    int cnt{ 0 };
    sales_data *ptmp = nullptr, *itemptr=nullptr;
    //  set a head pointer.
    //node_head = new sales_data;
    ptmp = node_head;
    //  if null list?
    if (ptmp == nullptr){
        ptmp = new sales_data;
        
        //  init a node & config its value.
        setIsbn( ptmp, str );
        setTotoal( ptmp, total );
        setSellout( ptmp, sellout );
        setPrice( ptmp, price );
        setNum( ptmp, 1 );
        ptmp->next = nullptr;
        node_head = ptmp;
    }
    else{
        //  count the node's num.
        while( ptmp !=nullptr){
            itemptr = ptmp;
            ptmp = ptmp->next;
            cnt++;
           // std::cout << cnt << std::endl;
        }
        //  init a node & config its value.
        ptmp = new sales_data;
        itemptr->next = ptmp;
        //  init a node & config its value
        setIsbn( ptmp, str );
        setTotoal( ptmp, total );
        setSellout( ptmp, sellout );
        setPrice( ptmp, price );
        setNum( ptmp, cnt + 1 );
        //  the next point to null.
        ptmp->next = nullptr;
    }
    return node_head;
}

void showNode( sales_data *node_head ){
    sales_data *ptmp = nullptr;
    ptmp = node_head;
    while ( ptmp != nullptr )
    {
        std::cout                       \
            << "num: "      << ptmp->num    \
            << "\tISBN: "     << ptmp->isbn   \
            <<"\tTotal: "     << ptmp->totoal \
            <<"\tSellout: "   << ptmp->sellout\
            <<"\tPrice: "     << ptmp->price  \
            << std::endl;
        ptmp = ptmp->next;
    }
}