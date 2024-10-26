#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    
    int a[n+5];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int F[100000] = {0};

    for (int i = 0; i < n; i++)
    {
        F[a[i]] =1;
        /* code */
    }
    
      for(int i=0;i<n;i++){
        printf("%d" , F[i]);
    }



        int m;
    scanf("%d",&m);
    
   
    for(int i=0;i<m;i++){
        int x;
        scanf("%d",&x);

        if (F[x] ==1)
        {
            printf("Found\n");
            /* code */
        }
        else{
            printf("Not Found\n");
            /* code */
        }
        
    }







    return 0;
}