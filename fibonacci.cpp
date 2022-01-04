#include<iostream>
using namespace std;
int fib(int a);
int main(){
    int n;
    cout << "Enter any number : ";
    cin >> n;
    for(int i=0; i <= n; i++){
        cout << fib(i);
    }
}

int fib(int a){
    if(a==0){
        return 0;
    }
    else if(a==1 || a==2){
        return 1;
    }
    else{
        return fib(a-2) + fib(a-1);
    }

}