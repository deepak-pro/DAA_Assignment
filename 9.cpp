#include <iostream>
using namespace std;

int main(){
    int a[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(a)/sizeof(a[1]);
    int p ; cin >> p ;
    if(p>=n)
        return 0;
    for(int i=p+1 ; i<n ; ++i)
        a[i-1] = a[i] ;
    --n ;
    for(int i=0 ; i<n ; ++i)
        cout << a[i] << " " ;
    return 0 ;
}
