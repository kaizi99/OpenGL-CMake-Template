#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {

  std::cout << "Hello World!" << std::endl;

  GLFWwindow* window;

  if (!glfwInit())
    return -1;

  window = glfwCreateWindow(640, 480, "Hello World!", NULL, NULL);
  if (!window) {
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(window);

  gladLoadGLLoader((GLADloadproc) glfwGetProcAddress);

  glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

  while (!glfwWindowShouldClose(window)) {
      glClear(GL_COLOR_BUFFER_BIT);


      glfwSwapBuffers(window);
      glfwPollEvents();
  }


  return 0;
}
