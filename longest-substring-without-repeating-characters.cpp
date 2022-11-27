class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        int max_length = 0;
        std::vector<char> string_vector (s.length());
        std::copy(s.begin(), s.end(), string_vector.begin());
        std::vector<char> temp_vector;
        std::vector<char>::iterator it;

        for (int i=0; i<string_vector.size(); i++) {
            it = std::find(temp_vector.begin(), temp_vector.end(), string_vector.at(i));
            
            /*std::cout << "Size:" << max_length << " Temp vector: ";
            for (int k=0; k<temp_vector.size(); k++) {
                std::cout << " " << temp_vector[k];
            }
            std::cout << "\n";
            std::cout << "it - temp_vector.end(): " << it - temp_vector.end() << "\n";
            std::cout << "\n\n\n";*/
            
            if ( it != temp_vector.end() ) {
                i = i + (it - temp_vector.end()) + 1;
                temp_vector.clear();
            }
            temp_vector.push_back(string_vector.at(i));
            length = temp_vector.size();
            if ( length > max_length )  max_length = length;
        }
        return max_length;
    }
};
