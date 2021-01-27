#ifndef NUMBER_H
#define NUMBER_H

class Number{
private:
	long number;
	static const int DIGITS = 5;
	long digitArray[DIGITS];
	long answer[DIGITS+1];

	void initializeArrays();
	void initializeNumberArray();
	void initializeAnswerArray();
	void toDigitArray();
public:
	explicit Number(int = 0);
	long getNumber()const;
	void setNumber(int n);
	static int countDigits(int);
	static long toNumber(const long *const, int);
	long calculateAnswer();
	long myNumber();
};


#endif
