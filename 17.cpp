#include <iostream>
using namespace std;
int main() {    
    int N;
    cin >> N;

    if (N <= 0) {
        cout << "INVALID INPUT" << endl;
        return 0;
    }

    long long first = 0, second = 1;

    for (int i = 1; i <= N; ++i) {
        cout << first << " ";
        long long next = first + second;
        first = second;
        second = next;
    }
    cout << endl;

    return 0;
}
