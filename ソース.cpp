#include <stdio.h>
#include <stdlib.h>


#include "Vector.h"
struct Object {
	//type T = NULL;
	typedef void* T;
	T Empty;
};

typedef void* Void;

struct Bit {
	intmax_t B;
};

typedef Object NULLOBJECT;

NULLOBJECT ConsstructNULLOBJECT() {
	NULLOBJECT N;
	srand(rand());
	((size_t)N.Empty) = (size_t)rand();

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

bool Push(NULLOBJECT& N, Void V) {
	Bit B;
	return B.B;
}

struct VoidBox {
	Vector<NULLOBJECT> Objects;
};

VoidBox ConstructVoidBox(Vector<NULLOBJECT>& V) {
	VoidBox VB = { 0, };
	VB.Objects = V;

	return VB;
}
bool DestructVoidBox(VoidBox& In) {
	Free(In.Objects);

	return true;
}

bool Push(VoidBox& V, NULLOBJECT& B) {
	return Push(V.Objects, B);

}
NULLOBJECT Pop(VoidBox& V) {
	if (Size(V.Objects) == 0) { NULLOBJECT O; return O; }
	NULLOBJECT N = Back(V.Objects);
	Pop(V.Objects);

	return N;
}

bool IsEmpty(VoidBox& V) {
	return IsEmpty(V.Objects);
}

template<class T>
bool Swap(T& A, T& B) {
	T C = A;
	A = B;
	B = C;
	return true;
}

bool Suffle(VoidBox& V) {
	srand(rand());
	size_t L = Size(V.Objects);
	for (size_t i = 0; i <L*2; i++){
		size_t P = rand()%L;
		if (Index(V.Objects, P) == NULL) { break; }
		if (Index(V.Objects, 0) == NULL) { break; }
		Swap(*Index(V.Objects, 0), *Index(V.Objects, P));
	}
	return true;
}

template <class R>
bool Initialize(VoidBox& In, R(*F)(VoidBox&, NULLOBJECT)) {
	return false;
}

bool Update(VoidBox& V) {
	if (IsEmpty(V)) { return false; }
	Suffle(V);

	return true;
}