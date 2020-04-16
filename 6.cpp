#include <iostream>
using namespace std;

int main(){
    int a[] = {100,96,32,22,12} ;
    int max = a[0] , min = a[0] ;
    for(int i=1 ; i< 5 ; ++i){
        if(a[i]>max)
            max = a[i] ;
        if(a[i]<min)
            min = a[i] ;
    }
    cout << "Max is " << max << " and min is " << min << endl;
    return 0;
}
