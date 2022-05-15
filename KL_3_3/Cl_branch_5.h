#ifndef CL_BRANCH_5
#define CL_BRANCH_5

#include "Cl_base.h"

class Cl_branch_5 :
	public Cl_base
{
public:
	Cl_branch_5(string objectName, Cl_base* parentPtr) :
		Cl_base(objectName, parentPtr) {};

	void signal_v(string path) override
	{
		cout << "\nSignal from " << path;
	}

	void handler_v(string path, string message) override
	{
		cout << "\nSignal to " << path
			<< " Text: " << message << " (class: 6)";
	}

	size_t getClassNumber() override
	{
		return 6;
	}
};

#endif