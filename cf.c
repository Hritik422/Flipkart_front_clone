#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    long long int n,i,j=0,sum=0,tot=0;
	    scanf("%lld",&n);
	    long long int arr[n];
	    for(i=0;i<n;i++){
	        scanf("%lld",&arr[i]);
	        sum=sum+arr[i];
	    }
	    float k=n;
	  float mean=sum/k;
	    for(i=n-1;i>=0;i--){
	        j=i-1;
	        while(j>=0){
	      float mean1=(arr[i]+arr[j])/2.0;
	             if(mean==mean1){
	                tot++;
	            }
	            j--;
	        }
	    }
	    printf("%lld\n",tot);
	}
	return 0;
}

