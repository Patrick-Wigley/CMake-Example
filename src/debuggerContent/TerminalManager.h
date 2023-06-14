#include <fstream>

class DebugTerminalManager
{
// Fields
private:
    std::ofstream m_outfile;

// Members
public:
    void Write(const char* val);

// Constructors
public:
    DebugTerminalManager();
    ~DebugTerminalManager();
};
