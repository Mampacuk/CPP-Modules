#include "Logger.hpp"

int	main(void)
{
	Logger	logger1("test1-empty");
	Logger	logger2("test2-non-empty");
	Logger	logger3("test3-non-existent");

	logger1.log("file", "hello world");
	logger1.log("console", "bye world");

	logger2.log("file", "appended");
	logger2.log("console", "do it do it do it!");

	logger3.log("file", "I'm drowning!");
	logger3.log("console", "And I'm Elfo!");
}