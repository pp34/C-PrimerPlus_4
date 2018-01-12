#include "sales_data_chain.h"
#include "sales_data_chain.h"


sales_data* creatNode( sales_data *node_head ){

    int cnt{ 0 };
    sales_data *ptmp = nullptr, *itemptr=nullptr;
    //  set a head pointer.
    //node_head = new sales_data;
    ptmp = node_head;
    //  if null list?
    if (ptmp == nullptr){
        ptmp = new sales_data;
        
        //  init a node & config its value.
        setIsbn( ptmp, "pp34");
        setTotoal( ptmp, 10086 );
        setSellout( ptmp, 10010 );
        setPrice( ptmp, 95.27 );
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
            std::cout << cnt << std::endl;
        }
        //  init a node & config its value.
        ptmp = new sales_data;
        itemptr->next = ptmp;
        //  init a node & config its value
        setIsbn( ptmp, "RD257");
        setTotoal( ptmp, 586 );
        setSellout( ptmp, 10000 );
        setPrice( ptmp, 95.27 );
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