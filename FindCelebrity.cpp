bool knows(int a, int b);

class Solution {
public:
    int findCelebrity(int n) {
        if(n<2) return n;
        int candidate = 0;
        
        for(int i=1; i<n; i++){
            if(knows(candidate, i)) candidate = i;
        }
        
        for(int j=0; j<n; j++){
            if(j==candidate) continue;
            if(!knows(j, candidate) || knows(candidate,j)) return -1;
        }
        return candidate;
    }
};
