#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<fstream.h>

int main() 
{
srand(time(NULL));
ofstream file;
file.open("c:\tc\bin\rand.txt");
for(long i = 0; i < 100000000; ++i) 
{
long value = rand()%3222826;
file << value <<"\n";
}
file.close();
return 0;
}

