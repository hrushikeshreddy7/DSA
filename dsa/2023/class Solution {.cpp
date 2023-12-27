class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        int n=maxHeights.size();
        int a[n];
        int max=-1;
        for(int k=0;k<n;k++){
            a[k]=maxHeights[k];
        }
        for(int i=0;i<n;i++){
                 for(int k=0;k<n;k++){
            a[k]=maxHeights[k];
        }
            int sum=0;
            for(int j=0;j<=i;j++){
                if(j-1>0){
                    if(a[j-1]>a[j])
                        a[j]=a[j-1];
                    sum=sum+a[j-1];    
                }
            }
            for(int j=i;j<n-1;j++){
            
                    if(a[j]<a[j+1])
                        a[j+1]=a[j];
                    sum=sum+a[j];
            
        }
     if(sum>max)
         max=sum;
    }
        return max;
    }
};