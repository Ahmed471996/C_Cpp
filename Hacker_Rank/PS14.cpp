#include <bits/stdc++.h>
#include<sstream>  
#include<string>  
#include <iostream>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if (s.substr(8,9) == "PM"){
        int num = std::stoi(s.substr(0,2));
        if (num == 12){
            return s.substr(0,8);
        }
        else {
            return to_string(std::stoi(s.substr(0,2))+12) + s.substr(2,6);
        }
    }
    else{
        int num = std::stoi(s.substr(0,2));
        if (num == 12){
            return "00" + s.substr(2,6);
        }
        else {
            // cout << s.substr(0,7);
            return s.substr(0,8);
        }
    }
    // cout << (s.substr(8,9) == "PM") ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);
    // timeConversion(s);
    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
