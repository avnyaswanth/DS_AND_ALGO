class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n = arr.size();
        int i = 0,j = 0;
        
        for(i=0;i<n-1;i++          // break when finding the decreasing point
            if(arr[i+1]<=arr[i])
                break;
            
        for(j=i;j<n-1;j++)     //  iterating until we find false condition
            if(arr[j+1]>=arr[j])
                return false;
            
    return  j == n-1 && i!=j && i>0;    // here if the reach upto last element of the array
                                        // and i != j && i > 0
                                        // i!=j for strictly increasing
                                        //  i > 0 for strictly decreasing
    }
};