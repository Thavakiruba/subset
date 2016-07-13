#include<stdio.h>
int main(){
        int a[10],b[10],i,j,n,n2,count=0;
        scanf("%d %d",&n,&n2);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n2;i++){
            scanf("%d",&b[i]);
        }
        for(i=0;i<n2;i++){
            for(j=0;j<n;j++){
                if(b[i]==a[j]){
                    count++;
                    break;
                    
                }
            }
        }
        if(count==n2)
        printf("a1 is subset of a2");
        else
        printf("a1 is not a subset of a2");
        
   return 0;     
}
