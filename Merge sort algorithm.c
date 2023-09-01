merge sort:
Algorithm mergesort(low,high)
{
 //a[low:high]is global array to be sorted.
 //small [p] is true if there is only one element to sort in this case the list is already sorted.
if(low < high)
{
Mid=[(low + high)/2]
mergesort(low,mid);
mergesort(mid,high);
mergesort(low,mid,high);
}
}
Algorithm merge(low,mid,high)
{
h:low; i:low; j:mid+1;
while (h<=mid) and (j<high) do
{ 
if(a[h]<=a[j]) then
{
b[i]:=a[h];
h:=h+1;
}
else
}
}