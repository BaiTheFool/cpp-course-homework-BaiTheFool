//解答：关于为什么只用遍历<=sqrt(i)的数，是因为大于这个范畴的数如果能整除i，那么在这之前i/j一定已经被遍历过了，所以无需再次遍历
//如此复杂度能从O(n²)到O(n√n)，但依旧不快。为了练习，这里使用O(n)的欧拉筛：
#include <iostream>
#include <algorithm>
#include <vector>
const int N=10000;
bool is_prime[N+1];
std::vector<int> primes;
void eulerSieve()//欧拉筛
{
    std::fill( is_prime , is_prime + N + 1 , 1 );
    is_prime[0] = is_prime[1] = 0;
    for(int i = 2 ; i <= N ; i++){
        if(is_prime[i])
            primes.push_back(i);
        for(int j=0 ; j < primes.size() && i * primes[j] <= N ; j++){
            is_prime[i*primes[j]] = 0;
            if(i % primes[j] == 0)
                break;
        }
    }
}
int main(){
    eulerSieve();
    for(int i=0 ; i < primes.size() ; i++){//遍历质数组
        std::cout<< primes[i] << " ";
    }
    return 0;
}
