#include "TerminalManager.h"

// Getting Time
#include <chrono>
#include <ctime>

void DebugTerminalManager::Write(const char* val)
{
    this->m_outfile << this->m_logsCount << ": " << val << std::endl;
    this->m_logsCount++;
}

DebugTerminalManager::DebugTerminalManager()
    : m_logsCount(0)
{
    std::string path; 
    path.append(DEBUG_TERMINAL_LOGS_FOLDER);
    
    path.append(GetCurrentTimeAsString());
    path.append(".txt");

    this->m_outfile = std::ofstream(path);
}
DebugTerminalManager::~DebugTerminalManager()
{
    this->Write(std::string("Debug Session Finished at: '" + GetCurrentTimeAsString() + "'").c_str());
    this->m_outfile.close();
}


std::string GetCurrentTimeAsString()
{
    time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::string now_str =  std::string(std::ctime(&now));
    now_str.erase(now_str.length() - 1);
    return now_str;
}