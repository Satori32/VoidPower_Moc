#include <stdio.h>
#include <stdlib.h>

struct Object {
	//type T = NULL;
	typedef void* T;
	T Empty;
};

typedef Object NULLOBJECT;

NULLOBJECT ConsstructNULLOBJECT() {
	NULLOBJECT N;
	srand(rand());
	((size_t) N.Empty) = (size_t)rand();

	return N;
}
bool DestructNULLOBJECT(NULLOBJECT& In) {
	return false;//inpliment is odd.
}

void* HandDiveIn(NULLOBJECT& In) {//if end search. dive out to hand
	void* P = In.Empty;
	In.Empty = rand();
	return P;
}