#include <Sellennia.h>

class Sandbox : public Sellennia::Application {
public:
	// constructor
	Sandbox() {

	}

	// destructor
	~Sandbox() {

	}
};

Sellennia::Application* Sellennia::CreateApplication() {
	
	return new Sandbox();

}