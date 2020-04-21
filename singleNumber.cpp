#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int num = 0;
        for(int i=0;i<nums.size();i++){

            num = num^nums[i];
        }
        return num;
    }
};

int main() {
    Solution S;
    vector<int> v = {2,2,1};
    std::cout << S.singleNumber(v) << std::endl;

    return 0;
}