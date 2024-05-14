#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 0;
    int result = 0;

    
    for (int i = 0; i <= a; ++i) {
        b += i;
    }

    result = a / b;
 
    cout << "Result: " << result << endl;

    int c = 0;//initialized c to fix the code
    cout << "Uninitialized variable c: " << c << endl;

    int d = 10;
    while (d <= 10) {
        cout << "d: " << d << endl;
        d =d +1;
    }//fixed this loop as it was an infity loop

    int array[3] = {1, 2, 3};
    for (int i = 0; i <= 2; ++i) {//i<=3 was here which was wrong as i is initialized with 0
        cout << "array[" << i << "]: " << array[i] << endl;
    }

    return 0;
}