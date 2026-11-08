#include<iostream>
#define ll long long
ll gcd( ll x , ll y ){
    if(y==0)return x;
    return gcd( y , x % y );
}
int main(){
    ll x,y;
    std::cin >> x >> y;
    std::cout << gcd( x , y );
    return 0;
}