#include<bits/stdc++.h>
using namespace std;
double m[12][12];
double sum()
{
    double sum=0;
    for(int i=0; i<11; i++)for(int j=1+i; j<12; j++)sum+=m[i][j];
    return sum;
}
double average()
{
    return sum()/66;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp", "r", stdin);
    freopen("output.cpp", "w", stdout);
    clock_t tStart = clock();
    #endif // ONLINE_JUDGE
    char o;
    cin>>o;
    for(int i=0; i<12; i++)for(int j=0; j<12; j++)cin>>m[i][j];
    switch(o)
    {
    case 'S':
        cout<<fixed<<setprecision(1)<<sum()<<endl;
        break;
    case 'M':
        cout<<fixed<<setprecision(1)<<average()<<endl;
        break;
    }
    #ifndef ONLINE_JUDGE
    printf("Time taken: %.8fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    #endif // ONLINE_JUDGE
    return 0;
}
