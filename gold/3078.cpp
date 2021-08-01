#include<iostream>
#include<algorithm>
#include<deque>
#include<string>
using namespace std;
int main(){
    int n=0;int k=0;long long ans=0;
    deque<int> dq[21];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        int look=name.size();
        if(dq[look].size()>=1){
            while(!dq[look].empty() && i-dq[look].front()>k){
                    dq[look].pop_front();
            }
        }
        ans+=dq[look].size();
        dq[look].push_back(i);
    }
    cout<<ans;
}

