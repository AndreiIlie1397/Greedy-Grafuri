#include <iostream>
using namespace std;
int main()
{
    int n, i, piesa[100], CD[1000]= {0}, m, dim;
    cout<<"Introduceti numarul maxim de minute pe care il contine un CD: ";
    cin>>m;
    cout<<"Introduceti numarul de piese: ";
    cin>>n;
    cout<<"Introduceti durata pieselor"<<endl;
    for(i=1; i<=n; i++)
    {
        cout<<"   Piesa "<<i<<": ";
        cin>>piesa[i];
    }
    i=1;
    dim=1;
    while(n!=0)
    {
        if(piesa[i]>m) ///piesa e mai mare decat dimensiunea unui cd
        {
            cout<<"Nu se poate inregistra piesa "<<i;
            return 0;
        }
        if(piesa[i]<=m && CD[dim]<=m) ///piesa incape in cd-ul curent
        {
            CD[dim]=CD[dim]+piesa[i];
            n=n-1;
            i=i+1;
        }
        if(piesa[i]<=m && piesa[i]>m-CD[dim]) ///piesa nu incape in cd-ul curent si astfel mai cream inca un cd
        {
            dim=dim+1;
            CD[dim]=CD[dim]+piesa[i];
            n=n-1;
            i=i+1;
        }
    }
    cout<<endl<<"Numarul de CD-uri utilizate este: "<<dim<<endl<<endl;
    return 0;
}
