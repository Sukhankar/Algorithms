Selection sort:
Algorithm selection sort(a,n)
//sort the array a[1:n] in non-decreasing order
{
for i:=1 to n do 
{
j:=1;
for k:=i + 1 to n
if(a[k]< a[j] then j:=k);
t:= a[i];
a[i]:= a[j];
a[j]: = t;
}
}