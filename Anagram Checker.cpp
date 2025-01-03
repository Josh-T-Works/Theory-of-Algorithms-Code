#include <iostream>
#include <string>

using namespace std;

bool isAnagram(string, string);

int main()
{
	string a = "";
	string b = "";
	cout << "Enter String A: ";
	getline(cin, a);
	cout << "Enter String B: ";
	getline(cin, b);
	cout << endl;

	if (isAnagram(a, b)) // UI SHOWING IF TWO STRINGS ARE ANAGRAMS
	{
		cout << '"' << a << '"' << " and " << '"' << b << '"' << " are ANAGRAMS" << endl;
	}
	else cout << a << " and " << b << " are NOT ANAGRAMS" << endl;

	return 0;
}

bool isAnagram(string a, string b)
{
	for (int j = 0; j < min(a.length(), b.length()); j++) // REMOVES SPACES FOR CHECKING
	{
		if (a[j] == ' ')
		{
			a.erase(j, 1);
		}
		if (b[j] == ' ')
		{
			b.erase(j, 1);
		}
	}
	if (a.length() != b.length()) // ANAGRAMS MUST HAVE THE SAME LENGTH
	{
		return false;
	}
	if (a == b)
	{
		return true;
	}
	for (int i = 0; i < a.length(); i++) // IF THE CHARACTERS ARE THE SAME, REMOVE THEM
	{
		if (a[i] == b[0]) 
		{
			a.erase(i, 1);
			b.erase(0, 1);
			i = -1;
		}
	}
	if (a.length() == 0 && b.length() == 0)
	{
		return true;
	}
	else return false;
}
