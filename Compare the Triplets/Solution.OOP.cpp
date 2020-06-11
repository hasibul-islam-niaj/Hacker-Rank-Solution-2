#include <iostream>
using namespace std;

class Triplet{
private:
    int alicePoints[3], blobPoints[3];
    int blobResult, aliceResult = blobResult = 0;

public:
    void setAlicePoints(int i){
        if (i<3) {
            cin >> this->alicePoints[i++];
            setAlicePoints(i);
        }
    }

    void setBlobPoints(int i){
        if (i<3){
            cin >> this->blobPoints[i++];
            setBlobPoints(i);
        }
    }

    int isGreater(int a, int b){
        return a>b;
    }

    void generateTripletResult(){
        for (int i = 0; i < 3; i++) {
            this->aliceResult += this->isGreater(alicePoints[i], blobPoints[i]);
            this->blobResult += this->isGreater(blobPoints[i], alicePoints[i]);
        }
    }

    int getAliceResult(){
        return this->aliceResult;
    }

    int getBlobResult(){
        return this->blobResult;
    }
};

int main() {
    Triplet triplet;

    triplet.setAlicePoints(0);
    triplet.setBlobPoints(0);

    triplet.generateTripletResult();
    cout << triplet.getAliceResult() << " " << triplet.getBlobResult() << endl;
    return 0;
}
