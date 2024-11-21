#include <stdio.h>
int main()
{
	// Khai bao pi va ban kinh hinh tron
	int radius = 6; // Ban kinh hinh tron
	float pi = 3.14; // Gia tri cua pi
	// Khai bao bien luu tru ket qua chu vi va dien tich hinh tron
	int perimeter, acreage;
	// Khai bao chu vi va dien tich hinh tron
	perimeter = 2 * pi * radius; // Chu vi hinh tron
	acreage = pi * radius * radius; // Dien tich hinh tron
	// In ra ket qua
	printf("Chu vi hinh tron bang: %d\n", perimeter);
	printf("Dien tich hinh tron bang: %d\n", acreage);
	
	return 0;
}
