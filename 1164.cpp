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
    long long int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        long long int len = x/2, sum=0;
        for(int i=1; i<=len; i++){
            if(x%i==0)sum+=i;
        }
        if(sum==x){
            cout<<x<<" eh perfeito"<<endl;
        }else{
            cout<<x<<" nao eh perfeito"<<endl;
        }
    }
    return 0;
}
