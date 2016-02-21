// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        return binarySearch(1, n);
    }
    
    int binarySearch(int left, int right) {
        if (left >= right) {
            return left;
        }
        int mid = left + (right - left) / 2;
        cout << mid << endl;
        if (isBadVersion(mid)) {
            if (mid == 1) {
                return mid;
            }
            return binarySearch(left, mid);
        }
        else {
            return binarySearch(mid + 1, right);
        }
    }
};