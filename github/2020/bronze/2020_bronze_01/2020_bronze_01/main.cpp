#include <iostream>
#include <stdio.h>
#include<fstream>
using namespace std;
int main()
{
    int array[7];int keep1=0;int keep2=0;int keep3=0;
    for(int i=0;i<7;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            for(int k=j+1;k<7;k++){
                for(int z=0;z<7;z++){
                    if(array[z]==array[i]+array[j]+array[k] && z!=i && z!=j && z!=k){
                        keep1=array[i];keep2=array[j];keep3=array[k];break;
                    }
                }
            }
        }
    }
    if(keep1<=keep2 && keep2<=keep3){
        printf("%d %d %d",keep1, keep2, keep3);
    }
    else if(keep1<=keep3 && keep3<=keep2){
        printf("%d %d %d",keep1, keep3, keep2);
    }
    else if(keep2<=keep1 && keep1<=keep3){
        printf("%d %d %d",keep2, keep1, keep3);
    }
    else if(keep2<=keep3 && keep3<=keep1){
        printf("%d %d %d",keep2, keep3, keep1);
    }
    else if(keep3<=keep1 && keep1<=keep2){
        printf("%d %d %d",keep3, keep1, keep2);
    }
    else if(keep3<=keep2 && keep2<=keep1){
        printf("%d %d %d",keep3, keep2, keep1);
    }
    return(0);
}


