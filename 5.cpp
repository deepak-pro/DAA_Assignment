#include <iostream>
using namespace std;

int main(){
    int a[] = {100,96,32,22,12} ;
    int b[] = {98,80,50,45,1} ;
    int n = sizeof(a)/sizeof(a[0]) ; int c[n*2] ;
    int i = 0 , j = 0 ;
    for(int k=0 ; k<n*2 ; ++k){
        if(a[i]>b[j]){
            c[k] = a[i] ; ++i ;
        }
        else{
            c[k] = b[j] ; ++j ;
        }
    }
    for(int i=0 ; i< n*2 ; ++i)
        cout << c[i] << " " ;
    return 0;
}
