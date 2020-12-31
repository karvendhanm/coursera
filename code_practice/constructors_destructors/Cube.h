#pragma once

class Cube{
	
	public:
		Cube();
		Cube(double length);
		Cube(const Cube & obj);
		Cube & operator=(const Cube & obj);
		double getVolume() const;
		double getSurfaceArea() const;
		void setLength(double length);
	private:	
		double length_;
};
