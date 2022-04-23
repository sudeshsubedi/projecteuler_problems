/*
* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
* we can see that the 6th prime is 13.
* 
* What is the 10 001st prime number?
*/

#include <iostream>

typedef long long ll;

ll ith_prime(int);

int main() {
    int num = 0;
    std::cout << "Enter a num: ";
    std::cin >> num;
    std::cout << ith_prime(num) << std::endl;
    return 0;
}

ll ith_prime(int n) {
    ll primes[n];
    int i = 0;
    primes[i] = 2;
    ll next = 3;
    while (i < n-1)
    {
        bool is_prime = true;
        for(int j=0; j<=i; j++)
        {
            if(next % primes[j] == 0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            ++i;
            primes[i] = next;
        }
        ++next;
    }
    // for (int a=0; a<i; a++) {
    //     std::cout << primes[a] << ' ';
    // }
    // std::cout << '\n';
    // std::cout << i-1 << '\n';
    return primes[i];
    
}