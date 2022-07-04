#include <iostream>
#include <iomanip>

using namespace std;

float calc(float aa,float bb, char op);

int main() {
    float a,b;
    char o;

    calc(a,b,o);
    return 0;
}

float calc(float aa,float bb, char c){
    float a = aa;
    float b = bb;
    char o = c;
    cin>>o;
    cin>>a;
    cin>>b;
   


    if(o == '+'){
        cout<<a+b<<endl;
    }
    else if(o == '-'){
        cout<<a-b<<endl;
    }
    else if(o == '*'){
        cout<<a*b<<endl;
    }
    else if(o == '/'){
        cout<<fixed<<setprecision(1)<<a/b<<endl;
    }

    return 0;
}