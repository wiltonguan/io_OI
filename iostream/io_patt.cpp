#include <iostream>
#include <fstream>
#include <string>
//#include <cstdio>
using namespace std;

string const endl("\n"),el(::endl);
#define NV(var) (#var":")<<(var)<<" "

ifstream fin;
istream  &cin(fin);
ostream  &fout(::cout);
ofstream flog;

void init_io(const string io_fn_patt,bool io_log,bool io2file=true)
{
	const string in_fn(io2file?io_fn_patt+".in":"/dev/tty");
	fin.open(in_fn.c_str());
	if(io2file){
		freopen((io_fn_patt+".out").c_str(),"w",stdout);
	}
	io_log && (flog.open((io_fn_patt+".log").c_str()),0);
}

int main(void)
{
	init_io("io_patt",false);
	int x=-1,y;
	fin>>x; //::cin>>x; //also work
	flog<<"hello "<<NV(x)<<el;
	y=x+2;
	fout<<NV(x)<<NV(y)<<el;
	fout<<NV(x+y)<<NV(y*2)<<el;
	//fout<<NV(x++)<<NV(++x)<<el;
	//::cout<<y<<el;
}
