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
        int n;
        cin>>n;
        int rem = n%6, rem2 = n%12;
        switch(rem2)
        {
            case 0:
                cout<<n-11;
                break;
            case 1:
                cout<<n+11;
                break;
            case 2:
                cout<<n+9;
                break;
            case 3:
                cout<<n+7;
                break;
            case 4:
                cout<<n+5;
                break;
            case 5:
                cout<<n+3;
                break;
            case 6:
                cout<<n+1;
                break;
            case 7:
                cout<<n-1;
                break;
            case 8:
                cout<<n-3;
                break;
            case 9:
                cout<<n-5;
                break;
            case 10:
                cout<<n-7;
                break;
            case 11:
                cout<<n-9;
                break;
        }
        if(rem==0 || rem==1)cout<<" WS"<<endl;
        if(rem==2 || rem==5)cout<<" MS"<<endl;
        if(rem==3 || rem==4)cout<<" AS"<<endl;
    }
    #ifndef ONLINE_JUDGE
    printf("TIme: %.8fs\n", (double)(clock()-tstart)/CLOCKS_PER_SEC);
    #endif // ONLINE_JUDGE
    return 0;
}
