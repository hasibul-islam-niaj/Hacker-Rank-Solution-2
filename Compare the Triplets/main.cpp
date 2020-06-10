#include <iostream>
using namespace std;

int compare(int a, int b){
    if (a > b)
        return 1;
    return 0;
}

int main() {
    int alice[3], blob[3], blobResult, aliceResult = blobResult = 0;
    cin >> alice[0] >> alice[1] >> alice[2];
    cin >> blob[0] >> blob[1] >> blob[2];

    for (int i = 0; i < 3; i++) {
        aliceResult += compare(alice[i], blob[i]);
        blobResult += compare(blob[i], alice[i]);
    }

    cout << aliceResult << " " << blobResult << endl;
    return 0;
}
