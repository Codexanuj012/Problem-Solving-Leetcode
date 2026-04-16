class Solution {
public:
    bool possiabletrips(vector<int>& time, long long givenTime,int totaltrips){
        long long primarytime=0; // initialize starting time 0
        for(int t:time){    //for(int i=0; i<time.size(); i++)
            primarytime+=givenTime/t;  // primarytime=primary+giventime/t

        }
        return primarytime>=totaltrips;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {

        long low=0;
        long high= (long long )(*min_element(time.begin(),time.end()))*totalTrips;
        while(low<high){
            long long mid=low+(high-low)/2;
            if(possiabletrips(time,mid,totalTrips)){
                high=mid;
            }
            else{
                low=mid+1;
                
            }
            }
            return low;

        }
        
        
    
};