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
        item->totoal = str2uint(tmp);
        std::cout << tmp;
        std::cout << '\t';
        std::cout << item->totoal << std::endl;

        tmp = getSellout( fin );
        item->sellout = str2uint( tmp );
        std::cout << tmp;
        std::cout << '\t';
        std::cout << item->sellout << std::endl;

        tmp = getPrice( fin );
        item->price = str2double( tmp );
        std::cout << tmp;
        std::cout << '\t';
        std::cout << item->price << std::endl;

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