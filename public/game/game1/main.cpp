#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#endif

#include <GL/gl.h>
#include <GL/glfw.h>

int running = 1;

void UpdateDrawFrame() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 800, 450, 0, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(20, 40);
    
    glfwSwapBuffers();
}

int main() {
    if (!glfwInit()) return -1;
    
    if (!glfwOpenWindow(800, 450, 0, 0, 0, 0, 0, 0, GLFW_WINDOW)) {
        glfwTerminate();
        return -1;
    }
    
    glfwSetWindowTitle("Game on Web");
    
#ifdef __EMSCRIPTEN__
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else
    while (running) {
        UpdateDrawFrame();
    }
#endif
    
    glfwTerminate();
    return 0;
}
