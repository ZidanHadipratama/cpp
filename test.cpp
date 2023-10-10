#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string name = "Jidun";
    int umur = 19;
    cout << "Hai " << name << endl;
    cout << "Umurmu " << umur << endl;

    // char grade = 'A';
    // string kelas="12IPA3";
    // int kelass=10;
    // float flt = 12.5;
    // double dbl = -12.34; //Untuk lebih presisi
    // bool isMale = true;


    // About Strings
    cout << "Testing" << endl;
    cout << "More testinging" << endl;
    string testing = "test variable";
    cout << testing;
    cout << "Panjang String: " << testing.length() << endl;
    cout << testing[3] << endl;
    // testing[0] = 'A'; // String all immutable in cpp
    cout << testing << endl;
    cout << testing.find("test") << endl; // Output the index where the string is found. Which is 0
    cout << testing.find("variable", 3) << endl; // Output: 5
    cout << testing.substr(6, 5) << endl;// (starting index, how many char)


    // About Number
    cout << 40 << endl;
    cout << -20.567 << endl;
    cout << (5 + 4) - 2 * 8 / 9 << endl;
    cout << 8 % 3 << endl;
    int num = 6;
    double ang = 7.56;
    cout << num << " " << ang << endl;
    num++;
    cout << num << endl;
    num--;
    cout << num << endl;
    num+=40;
    cout << num << endl;
    cout << pow(num, 3) << endl;
    cout << sqrt(pow(num, 3)) << endl;
    cout << round(sqrt(pow(num, 3))) << endl;
    cout << floor(4.8) << endl;
    cout << ceil(4.1) << endl;
    cout << fmax(4, 9) << endl;
    cout << fmin(4, 9) << endl;


    // Input
    int umur2;
    cout << "Mskan umur" << endl;
    cin >> umur2;
    cout << "You are " << umur2 << " tahun" << endl;
    char huruf;
    cout << "Mskan huruf" << endl;
    cin >> huruf;
    cout << "Halo " << huruf << endl;
    string nama2;
    cout << "Mskkan nama: " << endl;
    getline(cin, nama2);
    cout << "Halo " << nama2 << endl;

    return 0;
}