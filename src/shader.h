#ifndef SHADER_H
#define SHADER_H

#include <GL/gl.h>
#include <glm/glm.hpp>
#include <string>
#include <vector>
struct ShaderInfo {
  GLenum type;
  std::string file_path;
};

struct Shader {
  unsigned int ID;
  Shader(const std::string &vertex_file_path,
         const std::string &fragment_file_path);
  Shader(const std::string &vertex_file_path,
         const std::string &fragment_file_path,
         const std::string &geometry_file_path);
  Shader(const std::vector<ShaderInfo> &shaders);
  // activate the shader
  void use() const;

  // utility uniform functions
  void setBool(const std::string &name, bool value) const;

  void setInt(const std::string &name, int value) const;

  void setFloat(const std::string &name, float value) const;

  void setVec2(const std::string &name, const glm::vec2 &value) const;
  void setVec2(const std::string &name, float x, float y) const;

  void setVec3(const std::string &name, const glm::vec3 &value) const;
  void setVec3(const std::string &name, float x, float y, float z) const;

  void setVec4(const std::string &name, const glm::vec4 &value) const;
  void setVec4(const std::string &name, float x, float y, float z,
               float w) const;

  void setMat2(const std::string &name, const glm::mat2 &mat) const;

  void setMat3(const std::string &name, const glm::mat3 &mat) const;

  void setMat4(const std::string &name, const glm::mat4 &mat) const;
};

#endif
