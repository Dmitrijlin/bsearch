#include <fstream>
using namespace std;

ifstream fin("input.txt");
ofstream f("output.txt");

void bsearch(long long x)
{
	bool t = true;
	long int i = 0;
	long long a;
		while (!fin.eof() && t)
		{
			fin >> a;
			if (a>x)
			{
				f << i;
				t = false;
			}
			else
			{
				i++;
			}
		}
		if (t)
		{
			f << "Такого числа нет";
		}
}

int main(void)
{
	long long x;
	fin>> x;
	bsearch(x);
	return 0;
}
