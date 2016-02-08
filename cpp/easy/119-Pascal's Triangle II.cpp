class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0) {
            return vector<int>(1, 1);
        }
        vector<int> first(2, 1);
        if (rowIndex == 1) {
            return first;
        }
        vector<int> last = first;
        int curr_size = last.size() + 1;
        vector<int> current(curr_size, 1);
        
        while(curr_size <= rowIndex + 1) {
            current.resize(curr_size, 1);
            for (int i = 1; i < curr_size - 1; i++) {
                current[i] = last[i - 1] + last[i];
            }
            curr_size++;
            last = current;
        }
        return current;
    }
};