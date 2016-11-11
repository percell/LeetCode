
ol isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        return binarySearch(1, n);
    }
    int binarySearch(int start, int end){
        if(start>=end) {
            if(isBadVersion(start))return start;
            else return -1;
        }
        int mid = start+(end-start)/2;
        cout<<mid<<endl;
        if (isBadVersion(mid)){
            return binarySearch(start, mid);
        }
        else{
            return binarySearch(mid+1, end);
        }
    }
};
