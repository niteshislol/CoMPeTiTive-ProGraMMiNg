/*Chef and Chefina are ordering pizza for dinner.
Each pizza has 
N
N slices.

What is the minimum number of pizzas they need to order, so that both Chef and Chefina can eat an equal number of slices?
Chef and Chefina must eat a positive integer number of slices.*/
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N % 2 == 0) {
        cout << 1 << endl;  
    } else {
        cout << 2 << endl;
    }

    return 0;
}
