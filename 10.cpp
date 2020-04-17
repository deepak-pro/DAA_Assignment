#include <iostream>
#include <climits>
using namespace std;

int main(){
    int a[] = {9,8,7,22,5,4,3,2,1};
    int n = sizeof(a)/sizeof(a[1]);
    int max = a[0] , sMax = INT_MIN ;
    for(int i=1;  i<n ; ++i){
        if(a[i]>max){
           sMax = max ; max = a[i];
        }
        if(a[i]<max && a[i]>sMax)
            sMax = a[i] ;
    }
    cout << "Second max number is " << sMax ;
    return 0 ;
}
