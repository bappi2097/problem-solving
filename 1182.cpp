#include<bits/stdc++.h>
using namespace std;
int l;
double m[12][12], x;
char t;
double sum()
{
    double sum=0;
    for(int i=0; i<12; i++)sum+=m[i][l];
    return sum;
}

double avarege()
{
    return sum()/12;
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
    cin>>l>>t;
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin>>x;
            m[i][j]=x;
        }
    }
    switch(t)
    {
        case 'S':
            cout<<fixed<<setprecision(1)<<sum()<<endl;
            break;
        case 'M':
            cout<<fixed<<setprecision(1)<<avarege()<<endl;
            break;
    }
    #ifndef ONLINE_JUDGE
    printf("Time taken: %.8fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    #endif // ONLINE_JUDGE
    return 0;
}

