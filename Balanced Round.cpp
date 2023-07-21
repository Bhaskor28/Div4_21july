// Depressed boy Bhaskor Roy
#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define          sz(a)               (int)a.size()
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'



void s1(){
int a[3];
for(int i=0;i<3;i++)
    cin>>a[i];
sort(a,a+3);

if((a[2]+a[1])>=10){
    cout<<"YES"<<endl;

}
else{
    cout<<"NO"<<endl;
}



}


void s2(){

int n;
cin>>n;
vector<pair<int,int>>vp;
unordered_map<int,int>mp;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;

    vp.pb(make_pair(y,x));
    mp[y]=i+1;

}
int an=0,ans=-1;
sort(vp.rbegin(),vp.rend());

/*
for(int i=0;i<n;i++){
 cout<<vp[i].first<<" "<<vp[i].second<<endl;

}

*/
for(int i=0;i<n;i++){

    if(vp[i].second<=10 ){
    cout<<mp[vp[i].first]<<endl;
    break;

    }
}
//cout<<ans<<endl;

}



void s3(){
    string ans="";
for(int i=0;i<8;i++){
    string s;
    cin>>s;
    for(int i=0;i<8;i++){
        if(s[i]!='.')
            ans+=s[i];
    }



    }


cout<<ans<<endl;


}
void s4(){
int n,k;
cin>>n>>k;
int a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];

}
sort(a,a+n);
//for(ll i=0;i<n;i++){
   // cout<<a[i]<<" ";

//}
//cout<<endl;
int cnt=0,ans=0,des=0;
for(int i=0;i<n-1;i++){
    if((a[i+1]-a[i])<=k){
        cnt++;
        ans=max(cnt,ans);

    }
    else{
        cnt=0;
        //des++;


}



}
//cout<<des<<endl;
cout<<n-ans-1<<endl;
//cout<<max(n-ans,ans)<<endl;
}

int main(){
optimize();

int t;
cin>>t;
while(t--){
    s4();

}



return 0;
}
