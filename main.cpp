#include <iostream>
using namespace std;

int n,i,j,a,x,p=0,f=1;
int **v;
int *l;
int *k;
int main()
{
    cout<<"Introduceti numarul de liste: ";
    cin>>n;
    l=new int[n];
    v=new int*[n];

    for(i=1;i<=n;i++){
        cout<<"Introduceti dimensiunea listei: ";
        cin>>a;
        v[i]=new int[a];
        l[i]=a;
        cout<<"Introduceti elementele listei: ";
        for(j=1;j<=a;j++){
            cin>>x;
            p++;
            v[i][j];
        }
    }

    k=new int[p];
    for(i=1;i<=n;i++){
        for(j=1;j<=l[i];j++){
            k[f]=v[i][j];
            f++;
            }
        }


    cout<<"Sortarea crescatoare a tuturor numerelor: ";
    for(i=1;i<=p;i++){
        cout<<k[i]<<" ";
    }

    delete[] l;
    delete[] v;
    return 0;
}
