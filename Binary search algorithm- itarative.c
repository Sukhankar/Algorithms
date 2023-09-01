Algorithm Binsearch (a,n,x)
{
 low = 1; high = n;
 while (low<=high) do
 { 
  mid = [(low+high)];
        ___________
              2
 if (x<a[mid]) then
 high = mid -1;
 else
 if(x>a[mid]) then
 low = mid+1
 else
 return mid;
 }
return 0;
}