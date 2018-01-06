#include "3_7_3.h"

void latitude(){
    float degrees( 0 );
    float tmp[ 3 ] = {0.0f,0.0f,0.0f};
    std::cout << "Enter a latitude in degrees, minutes, and seconds:" << std::endl;
    std::cout << "First, enter the degrees: ";
    std::cin >> tmp[0];
    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> tmp[1];
    std::cout << "Finally, enter the seconds of arc: ";
    std::cin >> tmp[2];
    degrees = tmp[ 0 ] + tmp[ 1 ] / 60 + tmp[ 2 ] / 60 / 60;
    std::cout << tmp[ 0 ] << " degrees, " << tmp[ 1 ] << " miniutes, " << tmp[ 2 ] << " seconds = "\
              << degrees << " degrees"<<std::endl;
}

void second2year(){

    const int day = 24;
    const int hour = 60;
    const int mini = 60;
    const int second = 60;

    long long tmp = 0;
    int d( 0 ), h( 0 ), m( 0 ), s( 0 );
    std::cout << "Enter the number of seconds: ";
    std::cin >> tmp;

    d = tmp /( day * hour * mini);      //  days

    h = tmp % ( day * hour * mini );    //  seconds
    h /= second;                        //  miniutes
    m = h % mini;                       //  miniutes
    h /= mini;                          //  hours
    s = tmp - d*day*hour*mini - h*mini*hour - m*mini;            //  seconds

    std::cout << tmp << "seconds = "\
        << d << " days, "\
        << h << " hours, "\
        << m << " miniutes, "\
        << s << " seconds." << std::endl;

}

void populationpecent(){
    long long wp = 0LL, ap = 0LL;
    double pec;
    std::cout << "Enter the world's population: ";
    std::cin >> wp;

    std::cout << "Enter the population of US: ";
    std::cin >> ap;

    pec = ( double )ap / wp * 100;      //  ±ØĞëÏÔÊ½×ª»»
    std::cout << std::fixed;
    std::cout << "The population of the US is " << std::setprecision(6) <<pec << " % of the world population." << std::endl;
}


