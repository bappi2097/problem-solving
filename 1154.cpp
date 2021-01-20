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
    int a, sum=0, i=0;
    while(cin>>a && a>=0)
    {
        sum+=a;
        i++;
    }
    cout<<fixed<<setprecision(2)<<(float) sum/i;
    return 0;
}
