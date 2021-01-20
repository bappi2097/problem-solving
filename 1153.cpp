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
    int n, fact=1;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
    cout<<fact<<endl;
    return 0;
}
