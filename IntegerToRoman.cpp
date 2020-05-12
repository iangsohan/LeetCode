/*  LeetCode: "Integer to Roman"
    - Given an integer, return the value as a Roman Numeral.
    - Assume integer is less than 4000. */

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

string intToRoman(int num) {
    string roman = "";
    vector<int> numbers {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    unordered_map<int, string> intRom;
    intRom = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},
              {100,"C"},{90,"XC"},{50,"L"},{40,"XL"},
              {10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
    
    for (int i = 0; i < numbers.size(); i++) {
        while (num >= numbers[i]) {
            roman += intRom[numbers[i]][0];
            if (intRom[numbers[i]].size() > 1)
                roman += intRom[numbers[i]][1];
            num -= numbers[i];
        }
    }
    return roman;
}