
#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int t,r;
	scanf("%d",&t);
	while(t--){
	    int n,tot=0,j,k,i;
	    scanf("%d",&n);
	    int x[n],y[n];
	    for(i=0;i<n;i++){
	        scanf("%d%d",&x[i],&y[i]);
	    }
	    	               
	    for(i=0;i<n;i++){
	        int l=i;
	        for(j=i+1;j<n;j++){
	            for(k=j+1;k<n;k++){
	                int o,p,m;
                    if(x[k]-x[j]!=0){
	                o=((y[k]-y[j])/(x[k]-x[j]));
                    }
                    else{
                        o=100;
                    }
                    if( x[j]-x[i]!=0)
	                p=((y[j]-y[i])/(x[j]-x[i])); 
                    else
                    p=100;
                    if(x[k]-x[j]!=0)
	                m=(y[k]-y[j])/(x[k]-x[j]);
                    else
                    m=100;
                    
	                if(o!=p){
	                    int q,w,r;
	                   if(x[k]-x[j]!=0 && x[j]-x[i]!=0)
	                   q=((y[k]-y[j])/(x[k]-x[j]))*(y[j]-y[i])/(x[j]-x[i]);
                       else
                       q=200;
	                   if(x[j]-x[i]!=0 && x[k]-x[i]!=0)
	                    w=(y[j]-y[i])/(x[j]-x[i])*(y[k]-y[i])/(x[k]-x[i]);
                        else
                        w=300;
                        if(x[k]-x[j]!=0 && x[k]-x[i]!=0)
	                  r=((y[k]-y[j])/(x[k]-x[j]))*((y[k]-y[i])/(x[k]-x[i]));
	                   else
                       r=400;
	                    if(r==-1 || w==-1 || q==-1){
	                        tot++;
	                        
	                    }
	                }
	            }
	        }
	    }
	    printf("%d\n",tot);
	}
	return 0;
}

