#include <iostream>
#include<vector> 
using namespace std ;


int main()
{
    int a = 10 ;
    int* ptr = &a ;
    
    cout<< &a << endl ;
    cout<< ptr<< endl ;
    
    float price = 100.24f ;
    float* fptr = &price ;
    
    cout<< &price << endl ; 
    cout<< fptr <<endl ; 

    
    return 0;
}
