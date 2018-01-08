#include "4_13.h"

fish fish1;

void testarray(){

    std::string str("Waldorf Salad");
    int cnt=5;
    std::vector<int> text(cnt);// = { 'p','p','3','4' };
    std::vector<int> *p = new std::vector<int>(cnt);
    p = &text;
 /*   for ( cnt = 0; cnt < 4;cnt++) {
        text.push_back( cnt );
    }*/
    for (cnt=0;cnt<5;cnt++){
        text.at( cnt ) = cnt*2 + 1;
    }
    int sum = *( text.begin() ) ;
    sum += *( text.end()-1 );
    for ( cnt = 0; cnt < 5; cnt++ )
    {
        std::cout << sum;
    }
    std::cout << std::endl;
    
    std::cout << str << std::endl;

    fish1.lenght = 1.12;
    fish1.weight = 10;
    fish1.variety="pp";
    std::cout << "variety: " << fish1.variety << "\n" << "length: " << fish1.lenght << "\n"\
        << "weight: " << fish1.weight << std::endl;
}

void f4_12_13(){

    int lenth(0);
    int tmp(0);
    std::cout << "Please input the length of array: _\b";
    std::cin >> lenth;

    int *p = new int[ lenth ];
    int *psta = p;
    tmp = lenth;
    while ( tmp-- )
    {   
        
        std::cout << "Please input the number of array: _\b";
        std::cin >> ( *(p++) );
    }
    //p -= 1;
    for ( int i = 0; i < lenth; i++ )
        std::cout << *( psta + i ) << std::endl;

    p -= lenth;
    delete[] p;
    std::cout << "delete[] p" << std::endl;

    //delete psta;
    std::cout << "No need to delete psta" << std::endl;
}
