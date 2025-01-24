#include <iostream>

enum ElementState: int
{
    STATE_ACTIVE    = 1 << 0,     // 00000001
    STATE_VISIBLE   = 1 << 1,     // 00000010
    STATE_LOCKED    = 1 << 2,     // 00000100
    STATE_SELECTED  = 1 << 3,     // 00001000   
};

void showElement(std::string name, int state)
{
    std::cout << "Current state:" << std::endl;
    if (state & STATE_ACTIVE)   std::cout << "- Avtive" << std::endl;
    if (state & STATE_VISIBLE)  std::cout << "- Visible" << std::endl;
    if (state & STATE_LOCKED)   std::cout << "- Blocked" << std::endl;
    if (state & STATE_SELECTED) std::cout << "- Selected" << std::endl;
}

int main()
{

    showElement("switcher1", STATE_VISIBLE | STATE_LOCKED );

    showElement("switcher2", STATE_LOCKED | STATE_ACTIVE);
    
    showElement("switcher3", STATE_ACTIVE);
}
