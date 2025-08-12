//exp9 
//incrementing pointers 

    
#include <iostream>
using namespace std;

int main() {
    int a=4;
    int *aptr=&a;
   
    float f=1.2345;
    float *fptr=&f;
   
    double d=1.3456789;
    double *dptr=&d;
   
    char c='A';
    char *cptr=&c;
   
    bool b=2;
    bool *bptr=&b;
   
   
    cout<<"Incrementing Integer"<<endl;
    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
    cout<<endl;
   
    cout<<"Incrementing Float"<<endl;
    cout<<fptr<<endl;
    fptr++;
    cout<<fptr<<endl;
    cout<<endl;
   
    cout<<"Incrementing Double"<<endl;
    cout<<dptr<<endl;
    dptr++;
    cout<<dptr<<endl;
    cout<<endl;
   
    cout<<"Incrementing Character"<<endl;
    cout<<cptr<<endl;
    cptr++;
    cout<<cptr<<endl;
    cout<<endl;
   
    cout<<"Incrementing Boolean"<<endl;
    cout<<bptr<<endl;
    bptr++;
    cout<<bptr<<endl;
    cout<<endl;
    return 0;
}

/*

Output 

Incrementing Integer
0x16dbc6d58
0x16dbc6d5c

Incrementing Float
0x16dbc6d4c
0x16dbc6d50

Incrementing Double
0x16dbc6d38
0x16dbc6d40

Incrementing Character
A@m�m
@m�m

Incrementing Boolean
0x16dbc6d1f
0x16dbc6d20

*/