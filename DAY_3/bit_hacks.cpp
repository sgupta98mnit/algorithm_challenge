/*
~ x = −x − 1
The left bit shift x << k appends k zero bits to the number, and the right bit
shift x >> k removes the k last bits from the number.
The following
code prints the bit representation of an int number x:
for(int k=31;k>=0;--k){
	if(x&(1<<k)==1)
		cout<<1;
	else
		cout<<0;
}
The formula
x | (1 << k) sets the kth bit of x to one, the formula x & ~ (1 << k) sets the kth bit
of x to zero, and the formula x ˆ (1 << k) inverts the kth bit of x. Then, the formula
x & (x − 1) sets the last one bit of x to zero, and the formula x & −x sets all the one
bits to zero, except for the last one bit. The formula x | (x − 1) inverts all the bits
after the last one bit. Finally, a positive number x is a power of two exactly when x
& (x − 1) = 0.
*/
