
# Data Validation

This is a Project on Data Validation.

The function library can be used in the following format.
I have developed the function library in such a format that can be used by programmer to check the data entered by user, when he is expecting a particular kind of data. Moreover, it can also behave as a program directly showing menus and asking the user about which datatype he is going to enter.

The functions are:
	1. int datatype(char *a,int x)
		It can be used to check wether an entered data is of the correct type.
		we have to use 
		x=1, for DIGISTS type
		x=2, for CAPITAL ALPHABETS type
		x=3, for SMALL ALPHABETS type
		x=4, for MIXED CASE letters 
		x=5, for DECIMAL numbers
		x=any other number, it will show this menu and ask which sub-menu to call

	2. int range(char *a,int x)
		it can be used to check wether an entered integer is of a particular range
		x=1, for DATE
		x=2, for MONTH
		x=3, for HOUR
		x=4, for MINUTES
		x=5, for SECONDS
		x=6, for CUSTOM INPUT where it will ask the user of a range
		x=any other number, it will show this menu and ask which sub-menu to call
	
	3. int length(char *a,int x)
		it can be used to check wether a function is of desire length or not
		x=1, for MOBILE NUMBER (10 digit and hyphens)
		x=2, for MOBILE NUMBER with COUNTRY CODE (12 digits and hyphen or plus sign)
		x=3, for BANK ACCOUNT NUMBER (11 digit)
		x=4, for user specified input where it will ask the user to enter the length
		x=any other number, it will show this menu and ask which sub-menu to call

	4. int format(char *a,int x)
		it can be used to check wether a program is of desired format
		x=1, for DD/MM/YYYY
		x=2, for DD/MM/YY
		x=3, for DD-MM-YYYY
		x=4, for DD-MM-YY
		x=5, for HH/MM/SS
		x=6, for HH:MM:SS
		x=any other number, it will show this menu and ask which sub-menu to call

	5. int divisible(int x,int y)
		it can be used to check wether the x is divisible by y or not.

	6. int email(char *a)
		it can be used to check wether the entered string can be a vaid email adress or not		

Aditionally, the data(if valid) is stored in char array a[RANGE].It can be used by any program which needs data validation and uses these functions.
The functions also return 1 if data is valid. 
