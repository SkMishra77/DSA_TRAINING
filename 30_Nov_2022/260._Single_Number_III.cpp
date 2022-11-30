#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long a=0;
        for(auto x:nums){
            a^=x;
        }
        
        long diff=a & (-a);
        long aa=0;
        for(auto x:nums){
            if((x&diff)==diff){
                aa^=x;
            }
        }
        return {(int)(aa),(int)(aa^a)};
    }
};