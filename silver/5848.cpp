#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int check[1001];
int ans[1001];
vector<int> v;
vector<int> path;
int n=0,num=0,cnt=0,look=0;
void dfs(int a){
    check[a]=1;
    if(check[v[a]]==0 && v[a]!=0){
        dfs(v[a]);
    }
    else if(check[v[a]]==1){
        look++;
    }
    
}
int main(){
    cin>>n;
    v.push_back(0);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<1001;j++){
            check[j]=0;
        }
        cnt=0;
        look=0;
        dfs(i);
        
        num+=look;
    }
    cout<<n-num;
}

