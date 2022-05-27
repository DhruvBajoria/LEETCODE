class Solution {
public:
    int d(vector<int>&p1,vector<int>&p2)
    {
        return pow((p1[0]-p2[0]),2)+pow((p1[1]-p2[1]),2);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
    unordered_set<int>s({d(p1,p2),d(p2,p3),d(p3,p4),d(p1,p4),d(p1,p3),d(p2,p4)});
        return s.size()==2&&!s.count(0);
    }
};