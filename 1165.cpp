#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp", "r", stdin);
    freopen("output.cpp", "w", stdout);
    #endif // ONLINE_JUDGE
    int n;
    cin>>n;
    while(n--){
        long long int x;
        int cnt=0;
        cin>>x;
        for(int i=1; i*i<=x; i++){
            if(x%i==0)cnt++;
        }
        if(cnt>1)cout<<x<<" nao eh primo"<<endl;
        else cout<<x<<" eh primo"<<endl;
    }
    return 0;
}
