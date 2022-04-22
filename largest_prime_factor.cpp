/*
* The prime factors of 13195 are 5, 7, 13 and 29.
*
* What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>

typedef long long ll;

ll largest_prime_factor(ll);

int main() {
    std::cout << "*************************************" << '\n';
    std::cout << "*       Largest Prime Factor        *" << '\n';
    std::cout << "*************************************" << '\n';
    std::cout << "\n\n";

    ll num = 0;
    std::cout << "Enter a number: \n";
    while(std::cin >> num) {
        std::cout << "Largest prime factor of " << num << " = " << largest_prime_factor(num) << '\n';
    }
    return 0;
}

ll largest_prime_factor(ll num) {
    if(num <=1) return 1;
    ll largest_prime_factor = 2;
    while(largest_prime_factor != num) {
        if(num % largest_prime_factor == 0){
            num /= largest_prime_factor;
        } else {
            ++largest_prime_factor;
        }
    }
    return largest_prime_factor;
}