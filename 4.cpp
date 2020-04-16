#include <iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,3,1,6,2,4,5,10,4} ;
    int n = sizeof(a)/sizeof(a[1]) ;
    int count = 0 ;
    for(int i=0 ; i< n-1 ; ++i){
        bool isUnique = true ; int j ;
        for(j=i+1 ; j<n ; ++j){
            if(a[i]==a[j]){
                isUnique = false ; break ;
            }
        }
        if(j==n && i==n-2)
            ++count;
        if (isUnique)
            ++count ;
        }
    cout << "There are " << count << " unique elements" ;
    return 0;
}
