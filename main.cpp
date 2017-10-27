#include <iostream>
#include <sstream>
#include <utility>

using namespace std;

bool read (istream & stream, int* &A,  int &razmer) {
    bool result = true;
    for ( int i=0; i < razmer; i++) {
        if (!(stream >> A[i])) {
            result = false;
            break;
        }
    }
    return result;
}

void selectionsort(int* A, int razmer) {
    for ( int i = 0; i < razmer; i++) {
        for ( int j = i+1; j < razmer; j++) {
            if (A[i] > A[j]) {
                swap(A[i], A[j]);
            }
        }
    }
}



void write(ostream & stream,int*A,  int razmer) {
    for ( int i = 0; i < razmer; i++) {
         stream << A[i] << ' ';
    }
}

int main() {
     int razmer;
    int* A;
     string str;
    if(cin>>razmer){}
    cin.get();
    getline(cin, str);
    istringstream stream(str);
    A = new int [razmer];
    if( read(stream,A, razmer)) {
        selectionsort(A, razmer);
        write (cout, A, razmer);
    }
    else {
        cout << "An error has occured while reading numbers from line";
    }
}
