#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <list>
#include <deque>
#include <vector>
#include <string>
#include "Student.h"

class FileManager
{
public:
    static void generateRandomStudentList(int numStudents, const std::string &filename);
    static void readStudentDataFromFile(const std::string &filename, std::vector<Student> &students);
    static void readStudentDataFromFile(const std::string &filename, std::list<Student> &students);
    static void readStudentDataFromFile(const std::string &filename, std::deque<Student> &students);
    static void writeStudentDataToFile(const std::vector<Student> &students, const std::string &filename);
    static void writeStudentDataToFile(const std::list<Student> &students, const std::string &filename);
    static void writeStudentDataToFile(const std::deque<Student> &students, const std::string &filename);
    static void splitStudentsByGrade(const std::vector<Student> &students, const std::string &passedFile, const std::string &failedFile);
    static void splitStudentsByGrade(const std::list<Student> &students, const std::string &passedFile, const std::string &failedFile);
    static void splitStudentsByGrade(const std::deque<Student> &students, const std::string &passedFile, const std::string &failedFile);
};

#endif
