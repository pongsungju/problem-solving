#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int visit[1000001];
vector<int> v;
int keep=0,n=0,p=0,cong=0,num=0;
void dfs(int a){
    visit[a]=1;
    v.push_back(a);
    int look=0;
    look=a*n;
    look%=p;
    //cout<<look<<'\n';
    if(visit[look]==0){
        dfs(look);
    }
    else{
        for(int i=0;i<v.size();i++){
            if(v[i]==look){
                num=v.size()-i;
            }
        }
    }
    
}
int main(){
    cin>>n>>p;
    dfs(n);
    cout<<num;
}

