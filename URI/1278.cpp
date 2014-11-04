#include <cstdio>
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
 
string left_trim(string s){
    return s.substr(s.find_first_not_of(" "));
}
 
string right_trim(string s){
    return s.substr(0, s.find_last_not_of(" ") + 1);
}
 
string trim(string s){
    return right_trim(left_trim(s));
}
 
string remove_middle_spaces(string s)
{
    string r = "";
    string::iterator it;
    int spaces = 0;
     
    for(it = s.begin(); it != s.end(); it++)
    {
        if(*it != ' '){
            if(spaces > 0){
                r += " ";
                spaces = 0;
            }
             
            r += *it;
        }else{
            spaces += 1;
        }
    }
     
    return r;
}

int main(int argc, char const *argv[])
{
	int n, max;
	char c, cmp = '\0';
	bool b = false;

	while(cin >> n && n)
	{
		if(b) cout << endl;
		b = true;
		max = 0;
		cin.ignore();
		string *line = new string[n];

		for (int i = 0; i < n; ++i)
		{
			getline(cin, line[i]);
			line[i] = remove_middle_spaces(trim(line[i]));

			if(line[i].size() > max)
				max = line[i].size();
		}

		for (int i = 0; i < count; ++i)
			cout << setw(max) << line[i] << endl;
	}
	return 0;
}