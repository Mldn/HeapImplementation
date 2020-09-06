#ifndef _HEAP_H_
#define _HEAP_H_

#include "HeapNode.h"
#include <queue>
#include <stack>

class Heap
{
public:
	HeapNode * first;
	HeapNode* last;
	Heap() {
		init();
	}
	void init();
	void add(int elem, int &steps);
	void addM(int elem, int &steps);
	int get();
	void unija(Heap& h, int &steps);
	void unijaM(Heap& h, int &steps);
	void convert();
	void convertM();
	int del(int &steps);
	int delM(int &steps);
	void destroy();
	void link(HeapNode* roditelj, HeapNode* dete);

	~Heap() {}
	void print(HeapNode* p);

};

#endif // !_HEAP_H_