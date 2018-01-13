#ifndef _BUBBLE_SORT_H
#define _BUBBLE_SORT_H

#include<iostream>
#include "sales_data.h"
#include "sales_record.h"

double* getPriceArray( sales_data *head );
void bubbleSort( double r[], int n );
void sortPrice( sales_data *head );

#endif



