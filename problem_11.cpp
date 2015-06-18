#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int **array;
    long long int max=0,temp;
    int i,j;
    array=(int**)malloc(sizeof(int*)*20);
    for(i=0;i<20;i++)
        array[i]=(int*)malloc(sizeof(int)*20);
    for(i=0;i<20;i++)
        for(j=0;j<20;j++)
            cin>>array[i][j];
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            if(j<17){
                temp=array[i][j]*array[i][j+1]*array[i][j+2]*array[i][j+3];
                if(temp>max)
                    max=temp;
            }
            if(i<16){
                temp=array[i][j]*array[i+1][j]*array[i+2][j]*array[i+3][j];
                if(temp>max)
                    max=temp;
                if(j<16){
                    temp=array[i][j]*array[i+1][j+1]*array[i+2][j+2]*array[i+3][j+3];
                    if(temp>max)
                        max=temp;
                }
                if(j>3){
                    temp=array[i][j]*array[i+1][j-1]*array[i+2][j-2]*array[i+3][j-3];
                    if(temp>max)
                        max=temp;
                }
                    
            }
        }
    }
    cout<<max<<endl;
    free(array);
    return 0;
}
