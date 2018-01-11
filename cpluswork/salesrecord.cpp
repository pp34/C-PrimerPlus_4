#include "salesrecord.h"

void readRecord( std::fstream &fin ){
    int i{0};
    unsigned int num[3]{ 0 };
    std::string tmp; 

    skipTitle( fin );
    for ( i = 0; i < 20; i++ )
    {
        tmp = getId( fin );
        item->isbn = tmp;
        std::cout << tmp;
        std::cout << '\n';

        tmp = getTotal( fin );
        item->isbn = tmp;
        std::cout << tmp;
        std::cout << '\t';
        num[0] = str2uint( item->isbn );
        std::cout << num[ 0 ] << std::endl;

        tmp = getSellout( fin );
        std::cout << tmp;
        std::cout << '\t';
        num[ 1 ] = str2uint( tmp );
        std::cout << num[ 1 ] << std::endl;

        tmp = getPrice( fin );
        std::cout << tmp;
        std::cout << '\t';
        num[ 2 ] = str2uint( tmp );
        std::cout << num[ 2 ] << std::endl;

        std::cout << '\n';
        
    }
    //std::cout << num << std::endl;
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