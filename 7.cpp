#include <iostream>
using namespace std;

int main(){
    int a[] = {100,31,1,2,17} ;
    int n = sizeof(a)/sizeof(a[1]) ;
    int odd[n] , even[n] , oddCount = 0 , evenCount = 0;
    for(int i=0 ; i< n ; ++i){
        if(a[i]%2==0)
            even[evenCount++] = a[i] ;
        else
            odd[oddCount++] = a[i] ;
            
    }
    cout << "Odd array : " ;
    for(int i=0;i<oddCount ; ++i)
        cout << odd[i] << " " ;
    cout << "\nEven array : " ;
    for(int i=0; i<evenCount ; ++i)
        cout << even[i] << " " ;
    return 0;
}
