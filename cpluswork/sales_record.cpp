#include "sales_record.h"

sales_data* readRecord( std::fstream &fin , sales_data *list ){

    int i{0};

    std::string tmp, isbn;
    unsigned int total{ 0 }, sellout{ 0 };
    double price{ 0.0 };

    sales_data *item=nullptr;

    skipTitle( fin );
    for ( i = 0; i < 20; i++ )
    {
        tmp = getId( fin );
        isbn = tmp;
        std::cout << tmp;
        std::cout << '\n';

        tmp = getTotal( fin );
        total = str2uint(tmp);
        std::cout << tmp;
        std::cout << '\t';
       // std::cout << total << std::endl;

        tmp = getSellout( fin );
        sellout = str2uint( tmp );
        std::cout << tmp;
        std::cout << '\t';
       // std::cout << sellout << std::endl;

        tmp = getPrice( fin );
        price = str2double( tmp );
        std::cout << tmp;
       // std::cout << '\t';
       // std::cout << price << std::endl;

        std::cout << '\n';
        list = creatNode( list , isbn , total , sellout , price );
    }
    return list;
}

std::string getPrice( std::fstream &fin ){

    int i{ 0 };
    char ch{ 0 };
    char str[ 10 ];
    while ( ( ch = fin.get() ) != '\n' )
    {
        str[ i++ ] = ch;
    }
    str[ i ] = '\0';
    return str;
}

std::string getSellout( std::fstream &fin ){

    int i{ 0 };
    char ch{ 0 };
    char str[ 10 ];
    while ( ( ch = fin.get() ) != '\t' )
    {
        str[ i++ ] = ch;
    }
    str[ i ] = '\0';
    return str;
}

std::string getTotal( std::fstream &fin ){

    int i{ 0 };
    char ch{ 0 };
    char str[ 10 ];
    while ( ( ch = fin.get() ) != '\t' )
    {
        str[ i++ ] = ch;
    }
    str[ i ] = '\0';
    return str;
}

std::string getId( std::fstream &fin ){

    int i{ 0 };
    char ch{ 0 };
    char str[6];
    while ( (ch=fin.get())!='\t' ){
        str[ i++ ] = ch;
    }
    str[ i ] = '\0';
    return str;
}

void skipTitle( std::fstream &fin ){
    
    char ch;
    int cnt{ 0 };
    while(cnt<4){
        ch = fin.get();
        if (  ch  == '\t' ){
            cnt++;
        }
        if ( ch  == '\n'){
            cnt++;
        }      
    }
}



bool ifisbn(char tmp[]){
    std::string isbn = "ISBN: ";
    if ( isbn == tmp ) { return true; }
    else
    {
        std::cout << "ISBN: Text Error!" << std::endl;
        return false;
    }
}