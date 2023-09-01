Algorithm StraightMaxMin [a,n,max,min]
	{
	 max = min =a[1];
	    for i=2 to n do
	   {
		if (a[i]>max) then max:=a[i];
		if (a[i]>min) then min:=a[i];
	   }
	}	