class Solution {
public:
    void rotate(vector<int>& number, int k) {
        int integer = number.size();
    k = k % integer;

    reverse(number.begin(),number.begin()+integer-k);

    reverse(number.begin()+integer-k,number.end());

    reverse(number.begin(),number.end());
    }
};