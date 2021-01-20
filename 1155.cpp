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
    double s=0;
    for(int i=1; i<=100; i++)
    {
        s+=(float)1/i;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
