#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;

void markMultiples(bool array[],int a){
    int i=2,num;
    while((num=i*a)<=1000000){
        array[num-1]=1;
        i+=1;        
    }
}
int main() {
    bool array[1000000];  
    int ans[1000000];
    int i=0,j=0;
    memset(array, 0, sizeof(array));
    for(i=1;i<1000000;i++){
        if(array[i]==0){
            ans[j++]=i+1;
            markMultiples(array,i+1);
        }
    }
    long long int T,n,sum;
    cin>>T;
    while(T--){
        sum=0;
        cin>>n;
        for(i=0;ans[i]<=n;i++)
            sum+=ans[i];
        cout<<sum<<endl;
    }
    return 0;
}
