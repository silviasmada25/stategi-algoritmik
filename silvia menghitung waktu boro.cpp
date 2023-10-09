#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double waktu;
    int v;
    int s;
    double srad;
    double sinA;

	cout<<"Menghitung waktu yang diperlukan Boro mencapai jarak horizontal \n";
	cout<<"Masukan kecepatan : ";
    cin >> v;
    cout<<"Masukan sudut : ";
    cin >> s;
    srad = s * (3.14 / 180);
    waktu = 2 * (v * srad) / 10;
    sinA = sin((double) (s * 22) / 7 / 180);
    cout << waktu << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

