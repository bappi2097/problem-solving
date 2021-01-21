#include<bits/stdc++.h>
using namespace std;
int par[5],impar[5], cntPar=0, cntImpar=0;
bool isPar(int x){
    return x%2==0;
}
void printArray(int arr[], int cnt, bool isPar)
{
    if(isPar){
        for(int i=0; i<cnt; i++)cout<<"par["<<i<<"] = "<<arr[i]<<endl;
    }else{
        for(int i=0; i<cnt; i++)cout<<"impar["<<i<<"] = "<<arr[i]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp", "r", stdin);
    freopen("output.cpp", "w", stdout);
    #endif // ONLINE_JUDGE
    int x;
    for(int i=0; i<15; i++){
        cin>>x;
        if(isPar(x)){
            if(cntPar<5){
                par[cntPar++] = x;
            }else{
                printArray(par, cntPar, true);
                cntPar=0;
                par[cntPar++] = x;
            }
        }else{
            if(cntImpar<5){
                impar[cntImpar++] = x;
            }else{
                printArray(impar, cntImpar, false);
                cntImpar=0;
                impar[cntImpar++] = x;
            }
        }
    }
    printArray(impar, cntImpar, false);
    printArray(par, cntPar, true);
    return 0;
}
