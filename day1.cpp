#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    const int n = 2000;
    int lines[n];

    ifstream input; input.open("day1.txt");

    if (input.is_open() ) {
        int i = 0;
        while (input) {
            input >> lines[i]; 
            //cout << lines[i] << endl;
            i++;
        }
    }
    input.close();

    int result = 0;

    for (int i = 1; i < n; i++) {
        if (lines[i] > lines[i-1]) {
            result++;
        }
    }

    cout << result << endl;
}