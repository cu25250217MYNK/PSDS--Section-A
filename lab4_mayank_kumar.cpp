
-- Create Database
CREATE DATABASE CollegeDB;

USE CollegeDB;

-- Create Department Table
CREATE TABLE Department (
    Dept_ID INT PRIMARY KEY,
    Dept_Name VARCHAR(50) NOT NULL
);

-- Create Student Table
CREATE TABLE Student (
    Student_ID INT PRIMARY KEY,
    Student_Name VARCHAR(50) NOT NULL,
    Age INT,
    Dept_ID INT,
    FOREIGN KEY (Dept_ID)
        REFERENCES Department(Dept_ID)
);

-- Insert Data into Department
INSERT INTO Department VALUES
(1, 'CSE'),
(2, 'Mechanical'),
(3, 'Civil');

-- Insert Data into Student
INSERT INTO Student VALUES
(101, 'Aman', 20, 1),
(102, 'Rahul', 21, 2),
(103, 'Priya', 19, 1);

-- Display Tables
SELECT * FROM Department;
SELECT * FROM Student;
