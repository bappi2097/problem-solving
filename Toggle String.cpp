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
    for(int i=0; i<len; i++)
    {
        if(s[i]<= 'Z')printf("%c",((int)s[i])+32);
        else printf("%c",((int)s[i])-32);
    }
    printf("\n");
    #ifndef ONLINE_JUDGE
    printf("Time: %.8fs\n", (double)(clock()-tstart)/CLOCKS_PER_SEC);
    #endif // ONLINE_JUDGE
    return 0;
}



