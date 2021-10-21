#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve ( )
{
    vector<int>arr;
    map<int,int>mp;
    int x;
    while(cin>>x){//==1){
        if (mp.count(x)>=1){
            mp[x]++;
        }
        else{
            mp[x]=1;
            arr.push_back(x);
        }
    }
    for (int i=0; i<arr.size( ); i++){
        cout<<arr[i]<<' '<<mp[arr[i]]<<"\n";
    }
}

int main ( )
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //int x;
    //cin>>x;
    //while(x--)
    //{
    solve( );
    //}
    //solve( );
    return 0;
}
