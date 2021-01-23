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
    int n;
    while(cin>>n && n!=0)
    {
        int p=0,z=1,arr[n][n],x=n;
        for(int i=0; i<n; i++)
        {
            for(int j=p; j<x; j++)for(int k=p; k<x; k++)arr[j][k]=z;
            p++;
            z++;
            x--;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j==0)printf("%3d",arr[i][j]);
                else printf(" %3d",arr[i][j]);
            }
            cout<<endl;
        }
        cout<<endl;
    }
    #ifndef ONLINE_JUDGE
    printf("Time Needed: %.8fs\n", (double)(clock()-tstart)/CLOCKS_PER_SEC);
    #endif // ONLINE_JUDGE
    return 0;
}
