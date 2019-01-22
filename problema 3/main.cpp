#include <iostream>
using namespace std;
int main()
{
    int n, m, i, v[100], x=0, poz;
    cout<<"Introduceti numarul de activitati: ";
    cin>>n;
    cout<<"Introduceti numarul de perechi: ";
    cin>>m;
    cout<<"Introduceti perechile de activitati"<<endl;
    for(i=1; i<=2*m; i++)
        cin>>v[i];
    for(i=1; i<=2*m; i=i+2)
        if(v[i]==v[i+3])
        {
            x=1;
            poz=i;
        }
    if(x!=0)
    {
        cout<<endl<<"Nerealizabil"<<endl;
        cout<<""<<v[poz]<<" "<<v[poz+1]<<" ";
        for(i=poz+2; i<=2*m; i=i+2)
            if(v[i]==v[poz+1])
                cout<<v[i+1]<<" ";
        for(i=poz+3; i<=2*m; i=i+2)
            if(v[i]==v[poz+2] && i==2*m)
                cout<<v[poz+2]<<" ";
        cout<<endl;
    }
    if(x==0)
        cout<<endl<<"Realizabil"<<endl;
    return 0;
}
