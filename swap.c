void swap_max(int arr[],int l,int n)
    {    
       int a;
       int largest=arr[0];
        int i;
      for (i = l; i <= n; i++) 
           {
             if(largest<arr[i])
                 largest=arr[i];
            }
                    a = arr[i];
                    arr[i] = arr[l];
                    arr[l] = a;
      }
void ssort(int arr[],int n)
{
  for(int i=0;i<=n-1;i++)
     {
       swap_max(int arr[n],int i,int n);
     }
 }
