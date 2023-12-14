// C program to convert binary to decimal 
#include <stdio.h> 
#include<math.h>

// Function to convert binary to decimal 
int binaryToDecimal(int n) 
{ 
	 
	int decimal = 0; 

	// Initializing base value to 1, i.e 2^0 
	int b = 0; 

	 
	// Extracting the last digit of the binary number 
	while (n!=0) 
	{ 
		int last_digit = n % 10; 
		// Removing the last digit from the binary number 
		n = n / 10; 

		// multiply last digit by 2^b and add the product to decimal
		decimal = decimal + last_digit * pow(2,b);

		// increment base
		b++; 
	} 

	// Returning the decimal value 
	return decimal; 
} 

 
int main() 
{ 
	int n;
	printf("enter a number: \n");
	scanf("%d",&n); 
	printf("%d", binaryToDecimal(n)); 
}
