#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    int sum = 0 ;
    for(int i=0; i<5 ; ++i)
        sum = sum + a[i] ;
    cout << "Sum is " << sum ;
    return 0;
}
