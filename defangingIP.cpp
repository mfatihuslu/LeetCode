//
// Created by Administrator on 22.04.2020.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    static string defangIPaddr(string address) {

        for(int i=0;i<address.size();i++){

            if(address[i]=='.'){
                address.replace(i,1,"[.]");
                i+=2;
            }

        }
        return address;
    }
};

int main(){

    string IP = "23.34.123.43";
    cout<<Solution::defangIPaddr(IP);
    return 0;
}