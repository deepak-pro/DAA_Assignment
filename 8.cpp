#include <iostream>
using namespace std;

int main(){
    int arr[100] ;
    int n ; cin >> n ;
    for(int i=0 ; i<n ; ++i)
        cin >> arr[i] ;
    cout << "Enter the position and element" << endl;
    int p , e ; cin >> p >> e ;
    if(p>n-1)
        arr[(p = n++)] = e  ;
    else{
        for(int i=n ; i>p ; --i){
            arr[i] = arr[i-1] ;
        }
        arr[p] = e ; ++n ;
    }
    cout << "Element " << e << " inserted at " << p << " index" << endl;
    for(int i=0 ; i<n ; ++i)
        cout << arr[i] << " ";
    return 0 ;
}
