#include <fstream>

#define DEBUG_TERMINAL_LOGS_FOLDER "debugLogs/"

class DebugTerminalManager
{
// Fields
private:
    std::ofstream m_outfile;
    unsigned int m_logsCount;

// Members
public:
    void Write(const char* val);

// Constructors
public:
    DebugTerminalManager();
    ~DebugTerminalManager();
};


std::string GetCurrentTimeAsString();