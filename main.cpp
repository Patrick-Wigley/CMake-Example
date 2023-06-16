#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <adder.h>
#include <TerminalManager.h>

using namespace std;

int main(void)
{
    DebugTerminalManager terminalManager;

    GLFWwindow* window;
    unsigned int test = 1;
    test++;

    
    /* Initialize the library */
    if (!glfwInit())
        terminalManager.Write("exitting");
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        terminalManager.Write("exitting - No Winow");
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        // glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
        int a;
        std::cin;
        
        printf("1 + 3 = %f\n", CMakeExample::Add(1.0f,3.0f));
    }
    const char* err;
    glfwGetError(&err);
    std::cout << "errors:" << err;
    std::cin;

    glfwTerminate();
    
    return 0;
}


