#include <iostream>
using namespace std;


class Mouse
{
	string model;
	double sens;

public:
	Mouse() = default;
	Mouse(const char* _mod, double _sens) {
		sens = _sens;
		model.append(_mod);
	};
	void Print() {
		cout << "Mouse >" << endl;
		cout << "Model - " << model << endl << "Sens - " << sens << endl;
	}

};





class CPU
{
	string model;
	double Gghz;

public:
	CPU();
	CPU(const char* _model, double _Gghz);
	void Print() {
		cout << "Model - " << model << endl << "Gghz - " << Gghz << endl;
	}

};

CPU::CPU()
{
	model = " ";
	Gghz = 0;
}

CPU::CPU(const char* _model, double _Gghz)
{
	model.append(_model);
	Gghz = _Gghz;
}


class SSD
{
	string model;
	double val;

public:
	SSD() = default;
	SSD(const char* mod, double _val) {
		model.append(mod);
		val = _val;
	}
	void Print() {
		cout << "Model - " << model << endl << "Val - " << val << endl;
	}


};



class RAM
{
	string type;
	double ggb;

public:
	RAM() = default;
	RAM(const char* t, double _ggb) {
		type.append(t);
		ggb = _ggb;
	};
	void Print() {
		cout << "Type - " << type << endl << "GGB - " << ggb << endl;
	}
};




class GPU
{
	string model;
	double vats;
public:
	GPU() = default;
	GPU(const char* mod, double _vats) {
		model.append(mod);
		vats = _vats;
	};
	void Print() {
		cout << "Model - " << model << endl << "Vats - " << vats << endl;
	}

};

class Laptop
{
	Mouse* hyperx;
	CPU intel;
	GPU nvidia;
	SSD king;
	RAM ddr;
public:
	Laptop() = default;
	Laptop(Mouse* _hyper, const char* modelCPU, double gghz,
		const char* modelGPU, double vats, const char* modelSSD,
		double val, const char* modelRAM, double ggb)
		:intel(modelCPU, gghz)
		, nvidia(modelGPU, vats), king(modelSSD, val), ddr(modelRAM, ggb), hyperx(_hyper) {}
	void Print() {
		cout << "Laptop components >" << endl;
		intel.Print();
		nvidia.Print();
		king.Print();
		ddr.Print();
	}


};

int main()
{
	Mouse mouse("HyperX", 1600);
	mouse.Print();
	Laptop laptop(&mouse, "Apple M2 Pro", 3.5, "Apple 16-core GPU", 21, "Apple SSD", 1024, "Unified Memory", 32);

	laptop.Print();

}