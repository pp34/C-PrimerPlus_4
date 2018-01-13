#include "bubble_sort.h"

void sortPrice( sales_data *head ){

    int length = { 0 };
    double *arraytmp = nullptr;

    length = lengthNode( head );
    arraytmp = getPriceArray( head );

    bubbleSort( arraytmp, length );

}

double* getPriceArray(sales_data *head){

    sales_data *tmp = nullptr;
    int length{ 0 };
    tmp = head;
    length = lengthNode( head );
    double *price_array = new double[ length ];
    for ( int i = 0; i < length; i++ )
    {
        *( price_array + i ) = tmp->price;
        tmp = tmp->next;
    }
    return price_array;
}

void bubbleSort( double r[], int n ){
    int low = 0;
    int high = n - 1; //���ñ����ĳ�ʼֵ  
    int tmp, j;
    while ( low < high )
    {
        for ( j = low; j < high; ++j ) //����ð��,�ҵ������  
            if ( r[ j ] > r[ j + 1 ] )
            {
                tmp = r[ j ]; r[ j ] = r[ j + 1 ]; r[ j + 1 ] = tmp;
            }
        --high;                 //�޸�highֵ, ǰ��һλ  
        for ( j = high; j > low; --j ) //����ð��,�ҵ���С��  
            if ( r[ j ] < r[ j - 1 ] )
            {
                tmp = r[ j ]; r[ j ] = r[ j - 1 ]; r[ j - 1 ] = tmp;
            }
        ++low;                  //�޸�lowֵ,����һλ  
    }
    for ( int i = 0; i < n; i++ )
    {
        std::cout << *( r + i ) << std::endl;
    }
}



