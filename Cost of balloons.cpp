#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp", "r", stdin);
    freopen("output.cpp", "w", stdout);
    clock_t tstart = clock();
    #endif // ONLINE_JUDGE
    int t;
    cin>>t;
    while(t--)
    {
        int g, p, t, sum1=0, sum2=0;
        bool n1, n2;
        cin>>g>>p;
        cin>>t;
        while(t--)
        {
            cin>>n1>>n2;
            if(n1)
            {
                sum1+=g;
                sum2+=p;
            }

            if(n2)
            {
                sum1+=p;
                sum2+=g;
            }
        }
        cout<<((sum1<sum2) ? sum1 : sum2)<<endl;
    }
    #ifndef ONLINE_JUDGE
    printf("Time: %.8fs\n", (double)(clock()-tstart)/CLOCKS_PER_SEC);
    #endif // ONLINE_JUDGE

    return 0;
}
