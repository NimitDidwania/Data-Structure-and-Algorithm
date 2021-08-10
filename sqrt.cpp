 int mySqrt(int x) {
        
        int low = 1 , high = x , ans;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(mid == x/mid)
                return mid;
            else if(mid < x/mid)
            {
                ans=mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return ans;
    }