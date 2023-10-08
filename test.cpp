#include <iostream>

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

    return 0;
}