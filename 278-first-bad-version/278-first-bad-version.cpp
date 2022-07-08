// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
         long m;
        if(isBadVersion(n)==false)
            return 0;
        if(isBadVersion(1)==true)
            return 1;
        else
        {
            long l=1, h =n;
            while(l<=h)
            {
                m=(l+h)/2;
                if(isBadVersion(m)==true&&isBadVersion(m-1)==false)
                    return m;
                else if(isBadVersion(m)==false&&isBadVersion(m+1)==true)
                    return m+1;
                else if(isBadVersion(m)==true)
                    h = m-1;
                else if(isBadVersion(m)==false)
                    l = m+1;
                
            }
        }
            return 0;
    }
};