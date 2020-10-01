#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
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
