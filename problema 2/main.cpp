#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n, m, p, q, i, j, k, x, y, dis=99999, v[100][100]={0};
    cout<<"Introduceti numarul de linii: " ;
    cin>>n;
    cout<<"Introduceti numarul de coloane: " ;
    cin>>m;
    cout<<"Introduceti numarul de puncte nenule: " ;
    cin>>p;
    cout<<endl;
    for(k=1; k<=p; k++)
    {
        cout<<"   Introduceti indicii punctului "<<k<<" nenul: ";
        cin>>i>>j;
        v[i][j]=1;
    }
    cout<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            cout<<" "<<v[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    cout << "Introduceti numarul de puncte pentru care doriti sa calculati distanta Manhattan: ";
    cin>>q;
    for(k=1; k<=q; k++)
    {
        cout<<"     Introduceti indicii punctului "<<k<<" pt a afla distanta: ";
        cin>>i>>j;
        if(v[i][j]==1)
            cout<<endl<<"Distanta Manhattan pentru acest punct e 0"<<endl;
        else
            v[i][j]=9;
    }
    cout<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            cout<<" "<<v[i][j]<<" ";
        cout<<endl;
    }
    k=1;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            if(v[i][j]==9)
            {
                for(x=1; x<=n; x++)
                    for(y=1; y<=m; y++)
                        if(v[x][y]==1 && abs(x-i)+abs(y-j)<dis)
                            dis=abs(x-i)+abs(y-j);
                cout<<endl<<" Distanta Manhattan pentru punctul "<<k<<" este: "<<dis<<endl;
                dis=99999;
                k=k+1;
            }
    return 0;
}
