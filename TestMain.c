#include <stdio.h>

int TestFunktion();
void TestFunktion2();

int main(){
	int zahl = TestFunktion(2, 3);
	TestFunktion2();
	printf("Main Test war ebenfalls erfolgreich!\n");
	printf("Die Zahl lautet %d!\n", zahl);
	return 0;
}
