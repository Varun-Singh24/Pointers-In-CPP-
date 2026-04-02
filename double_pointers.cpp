#include <iostream>
#include<vector> 
using namespace std ; 
int main()
{
    // Pointer to Pointer 
    int a = 10 ;
    int* ptr = &a ; 
    int** parPtr = &ptr ; 
    
    cout<< &ptr << endl ; 
    cout<< parPtr << endl ; 
    return 0;
}
