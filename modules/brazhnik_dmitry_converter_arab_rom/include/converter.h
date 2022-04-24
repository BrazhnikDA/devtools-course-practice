// Copyright 2022 Brazhnik Dmitry

#ifndef MODULES_BRAZHNIK_DMITRY_CONVERTER_ARAB_ROM_INCLUDE_CONVERTER_H_
#define MODULES_BRAZHNIK_DMITRY_CONVERTER_ARAB_ROM_INCLUDE_CONVERTER_H_

#ifndef countof
#define countof(array) (sizeof(array) / sizeof((array)[0]))
#endif

#include <string>
#include <iostream>

struct roman
{
	std::string val;
};

struct arabien
{
	int val;
};

class Converter
{
public:
	Converter();
	Converter(std::string R_);
	Converter(int A_);

	arabien ConvertRomToArab(roman R_);
	roman	ConvertArabToRom(arabien A_);

	void OutputConsole();
	int CheckInput(std::string inText);

	std::string Get_R_Val();
	int			Get_A_Val();

	friend std::ostream& operator<< (std::ostream& out, const Converter& converter);
	friend std::istream& operator>> (std::istream& in, Converter& converter);

private:
	roman	R;
	arabien A;
};

#endif  // MODULES_BRAZHNIK_DMITRY_CONVERTER_ARAB_ROM_INCLUDE_CONVERTER_H_
