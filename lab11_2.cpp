#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}


int gcd(int a,int b){
	a = a%b;
	if(a==0) return b; 
	else return(gcd(b,a));
}
