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


int main(){
optimize();

int t;
cin>>t;
while(t--){
    s1();

}



return 0;
}
