#include "salesrecord.h"

sales_data* readRecord(){
    char isbntext[6];

    sales_data* ptmp = new sales_data;
    std::fstream readRecordfile;
    readRecordfile.open("SalesRecords.txt", std::ios::in);
    readRecordfile >> isbntext;
    if ( ifisbn( isbntext ) != true ) system("pause");
    return ptmp;
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