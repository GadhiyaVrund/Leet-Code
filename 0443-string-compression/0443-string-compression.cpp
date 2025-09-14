class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;  
        int read = 0;   
    
        while (read < n) {
            int j = read;
            while (j < n && chars[j] == chars[read]) j++;
            
            chars[write++] = chars[read];
            
            int count = j - read;
            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[write++] = c;
                }
            }
            read = j;
        }
        
        return write;
    }
};