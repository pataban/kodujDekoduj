#include<bits/stdc++.h>
#include<windows.h>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#define aaa printf("a\n");
#define bbb printf("b\n");
#define ccc printf("c\n");
#define ret putchar('\n');
#define stp getchar();
#define puti(a) printf("%d\n",a);
#define putd(a) printf("%lf\n",a);
#define prt(a) printf((((string)a)+"\n").c_str());


const string TMP_FILE = "tmpFile";
vector<string> getFileList(string mod, string appName);

int main(int a, char* args[])
{	
	const string appName(args[0]);
	vector<string> fl(getFileList("/b",appName));
	
	fstream f;
	for(int i=0;i<(int)fl.size();i++){
		rename(fl[i].c_str(),to_string(i).c_str());
		f.open(TMP_FILE,ios::out);
		f<<fl[i];
		f.flush();
		f.close();
		system(("koduj <" + TMP_FILE + " >" + to_string(i) + ".info").c_str());
	}
	if(fl.size()!=0)	system(("del/f/q "+TMP_FILE).c_str());
	
	
	fl.clear();
	fl=getFileList("/b/ad",appName);
	for(int i=0;i<(int)fl.size();i++)
		system(("start /d "+fl[i] + " /b "+ appName).c_str());
	
	return 0;
}

vector<string> getFileList(string mod,string appName = ""){
	const string FLIST="fileNameList";

	system(("dir" + mod + ">"+FLIST).c_str());
	fstream f;
	f.open(FLIST,ios::in);
	
	vector<string> fl;
	string fileName = "";
	while(getline(f,fileName))
		fl.push_back(fileName);

	f.close();
	system(("del/f/q "+FLIST).c_str());
	
	for(int i=0;i<(int)fl.size();i++)
		if((fl[i]==FLIST)||(fl[i]==appName)){	
			fl.erase(fl.begin()+i);
			i--;
		}
	return fl;
}
	
	
	
	
	
	
	
	