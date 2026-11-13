#include <iostream>
#include <cmath>
using namespace std;    
int main() {
    int N;
    cin >> N;

    if (N <= 1) {
        cout << "INVALID INPUT" << endl;
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i <= sqrt(N); ++i) {
        if (N % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << N << " is a Prime number" << endl;
    } else {
        cout << N << " is not a Prime number" << endl;
    }

    return 0;
}
