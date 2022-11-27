class Solution {
public:
    bool isPalindrome(int x) {
        if ( x < 0 ) {
            return false;
        } else {
            vector<int> int_vec;
            while (x > 0) {
                int digit = x % 10;
                x /= 10;
                int_vec.push_back(digit);
            }
            
            for (int i=0; i < int_vec.size()/2; i++) {
                if ( int_vec.at(i) != int_vec.at(int_vec.size()-1-i) ){
                    return false;
                }
            }
            return true;
        }
    }
};
