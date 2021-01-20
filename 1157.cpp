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
    for(int i=1; i<=n;i++)
    {
        if(n%i==0)
            cout<<i<<endl;
    }
    return 0;
}
