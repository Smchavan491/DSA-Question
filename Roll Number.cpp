#include <iostream>
using namespace std;

int user_logic(int A1, int A2, int N) {
    int d= A2-A1;
    int p=A1 + (N-1)*d; //Arithmetic Progression formula
    return p;
}

int main() {
    int A1, A2, N;
    cin >> A1 >> A2 >> N;
    int result = user_logic(A1, A2, N);
    cout << result << endl;
    return 0;
}