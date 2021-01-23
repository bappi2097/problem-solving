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
    string s;
    cin>>s;
    int len = s.length();
    int n = len/2;
    bool flag = true;
    for(int i=0; i<n; i++)
    {
        if(s[i]!=s[len-i-1])
        {
            flag=false;
            break;
        }
    }
    cout<<(flag ? "YES" : "NO")<<endl;
    #ifndef ONLINE_JUDGE
    printf("Time: %.8fs\n", (double)(clock()-tstart)/CLOCKS_PER_SEC);
    #endif // ONLINE_JUDGE
    return 0;
}



