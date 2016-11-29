#ifndef EXAMPLE_H
#define EXAMPLE_H

class example
{
	float x, y, z;
	public:
		example();
		example(float, float, float);
		void set_example(float, float, float);
		float get_A();
		float get_B();
		float get_C();
		float get_D();
		float sum();
		friend void print(example&);
		~example();
		
};

#endif
