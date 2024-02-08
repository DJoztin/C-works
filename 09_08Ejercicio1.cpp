//DAAN JOSTIN CARABEZ GARCIA
//EJERCICIO 1: Comparador de edades

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main(){
    int tu, he;

    cout<<"\t\tComparador de edades\t\t"<<endl;
    cout<<"Dame tu edad: ";
    cin>>tu;
    cout<<"Dame la de tu amigo: ";
    cin>>he;
    if(tu==he){
        cout<<"Ambos ienen la misma edad..."<<endl;
    }
    else{
        if(tu<he){
            cout<<"Eres mas joven que tu amigo..."<<endl;
        }
        else{
            cout<<"Eres mas viejo que tu amigo..."<<endl;
        }
    }

}