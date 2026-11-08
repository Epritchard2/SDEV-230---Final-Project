# SDEV230 Final Project - Budget Manager

This is my final project for SDEV230 at Ivy Tech Community College. I'm creating a text-based budgeting application in C++ using the 50/30/20 budgeting method.

The program divides monthly income after taxes into three categories:

- 50% for needs
- 30% for wants
- 20% for savings and additional debt payments

## Current Progress

So far, I've created a console menu that lets users enter their monthly income and view how it would be divided using the 50/30/20 method. I've also started using Object-Oriented Programming by creating an Account class to store the monthly income. The class uses separate header and implementation files.

## Files

- main.cpp - Contains the menu and budget calculations.
- Account.h - Defines the Account class.
- Account.cpp - Contains the Account class functions.

## Running the Program

I'm using Clang to compile the program. To compile both C++ files, run:

clang++ main.cpp Account.cpp -o BudgetManager.exe

Then run the program in PowerShell:

.\BudgetManager.exe

## Future Plans

As I continue working on the project, I plan to add more classes for transactions and budget categories. I also want users to be able to enter expenses and track how much money they have remaining in each category. I eventually want a graphical user interface as well as permanent storage data.

## Development Log

November 8, 2026 - Initial Setup

Created the GitHub repository and started the C++ project in Visual Studio Code.

Created a basic console menu for navigating the application.

Added the ability to enter monthly income.

Added calculations for the 50/30/20 budgeting method.

Created the Account class using separate header and implementation files.

Added basic input validation to prevent negative income values.

Tested the application to make sure the menu and budget calculations work correctly.

## Future Updates

Additional updates will be documented here as I continue developing the application.

