swap_max(arr,l,n)
{      int a=0;
       int largest=arr[l];
      for (i = l; i <= n; i++) 
           {
             if(largest<arr[i])
                 largest=arr[i];
                }
                     a = arr[i];
                    arr[i] = arr[l];
                    arr[l] = a;
}
ssort(arr,int n)
{
  for(i=0;i<n-1;i++)
     {
       swap_max(arr,i,n);
     }
 }
