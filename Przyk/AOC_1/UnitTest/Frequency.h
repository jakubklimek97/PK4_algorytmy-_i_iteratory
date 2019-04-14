#ifndef FREQUENCY_H
#define FREQUENCY_H
#include<vector>
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
class Frequency
{
private:
	int temp;
	vector<int>::const_iterator it1, it2;
	vector<int> wjektor;
	vector<int>powtorzenia;
	ifstream file;
	string line;
	string namefile;
public:
	Frequency();
	~Frequency() = default;
	void savefile(string namefile);
	int PuzzleSolver();
	int getTemp() const;
};
#endif
