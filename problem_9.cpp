#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int findTriplets(int n){
    int c=n/3+1,sqr1,st,a,b;
    while(c<n/2){
        sqr1=c * c - n * n + 2 * n * c;
        st=(int)sqrt(sqr1);
        if(st*st==sqr1){
            b = (n - c + st) / 2;
            a = n - c - b;
            return a*b*c;
        }
    c+=1;
    }
return 0;
}

int main() {
    int T,n,ans=0;
    cin>>T;
    while(T--){
        ans=0;
        cin>>n;
        ans=findTriplets(n);  
        if(ans==0)
            cout<<"-1"<<endl;
        else
            cout<<ans<<endl;
       
    }
    return 0;
}
