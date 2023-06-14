#include "TerminalManager.h"


void DebugTerminalManager::Write(const char* val)
{
    this->m_outfile << val << std::endl;
}


DebugTerminalManager::DebugTerminalManager()
{
    this->m_outfile = std::ofstream("Content.txt");
}
DebugTerminalManager::~DebugTerminalManager()
{
    this->m_outfile.close();
}