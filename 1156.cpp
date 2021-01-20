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
    double s=1;
    for(int i=3, j=2; i<=39; i+=2, j*=2)
    {
        s+=(float)i/j;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
