#include "iostream"
#include <string.h>
#include <cstdlib>

#include <sys/stat.h>

bool isPathExist(const std::string &s)
{
  struct stat buffer;
  return (stat (s.c_str(), &buffer) == 0);
}

void createPythonFile(std::string code, std::string filename, std::string foldername);
int main(){

  std::string foldername = "files";
  if (isPathExist(foldername)){
    system(("cd " + foldername).c_str());
    std::cout << "Folder exist" << '\n';
  }else{
    system(("mkdir " + foldername + " && cd " + foldername).c_str());
    std::cout << "Folder doesnt exist" << '\n';
  }
  std::string pythonCode = "print('hello c++')";
  std::string filename = "sayhello.py";
  createPythonFile(pythonCode, filename, foldername);
  system("python sayhello.py");
  return 0;
}

void createPythonFile(std::string code, std::string filename, std::string foldername=".") {
  system(("echo \"" +  code + "\" > " + foldername + "/"+filename).c_str());
}

void runPythonFile(std::string filename, std::string foldername){
  system(("python " + foldername + "/"))
}
