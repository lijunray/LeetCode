class Solution {
public:
    int compareVersion(string version1, string version2) {
        version1 += ".";
        version2 += ".";
        while(!version1.empty() || !version2.empty()) {
            int pos1 = version1.find(".");
            int pos2 = version2.find(".");
            int integer1 = pos1 == -1 ? 0 : stoi(version1.substr(0, pos1));
            int integer2 = pos2 == -1 ? 0 : stoi(version2.substr(0, pos2));
            cout << integer1 << " " << integer2 << endl;
            if (integer1 == integer2) {
                version1 = version1.substr(pos1 + 1);
                version2 = version2.substr(pos2 + 1);
            } 
            else  {
                return integer1 > integer2 ? 1 : -1;
            }
        }
        return 0;
    }
};

