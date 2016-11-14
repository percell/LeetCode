tion for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
#include <algorithm> 
class Solution {
public:
    static bool comp(Interval a, Interval b){
       return (a.start<b.start);
    }
    int minMeetingRooms(vector<Interval>& intervals) {
        if(intervals.size()==0) return 0;
        sort(intervals.begin(), intervals.end(), comp);
        int count = 0;
        vector<int> rooms;
     //   rooms.push_back(intervals[0].end);
        for(int i=0; i<intervals.size(); i++){
            int start = intervals[i].start;
            int end = intervals[i].end;
            pair<int, int> room (-1, 2e9);
            for(int j=0; j<rooms.size(); j++){
                if(start>=rooms[j] && rooms[j]<=room.second){
                    room.first = j;
                    room.second = rooms[j];
                }
            }
            cout<<room.first<<" "<<room.second<<endl;
            if (room.first==-1){
                count ++;
                rooms.push_back(end);
            }
            else {
                rooms[room.first] = end;
            }
        }
        return count;
    }
};
