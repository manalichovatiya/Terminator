#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int a=12;
//    int b=89;
    int b=0;
    try{
        if(b==0){
            throw b;
        }
        else{
            cout << "Divide : " << a/b << endl;
        }
    }
    catch(int n){
        cout << "Cannot divide by zero : " << n;
    }

    return 0;
}
