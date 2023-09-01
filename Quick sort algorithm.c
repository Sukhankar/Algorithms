Quick sort:
Algorithm Quick sort(A,start,end)
{
if(start<end)
{
p index:=partition(A,start,end);
Quicksort(A,start,pindex-1);
Quicksort(A,pindex+1,end);
}
}
Algorithm partition(A,start,end)
{
pivot:=A[end];
pindex:=start;
for i:=start to end-1 do
{
if(A[i]<=pivot)
{
swap(a[i],A[pindex])
pindex=pindex+1;
}
}
swap(A[pindex],A[end])
return pindex;
}