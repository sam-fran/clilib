#include <clilib>

int main ()
{
	clilib::Logger logger;

	logger < "Hello, World!" < "This is a test message." < "Logging multiple messages in a single statement.";
}