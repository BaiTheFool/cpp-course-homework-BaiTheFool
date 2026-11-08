#include<iostream>
using ll = long long;
ll reverse(ll n) {
    ll ans = 0;
    while (n != 0) {
        ans = ans * 10 + n % 10; 
        n /= 10;
    }
    return ans;
}
int main(){
    ll n;
    std::cin>>n;
    std::cout << reverse(n);

    return 0;
}