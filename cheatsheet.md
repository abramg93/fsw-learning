# Day 1 Command Cheat Sheet
# Flight Software Learning Repo
# Note: Do not run this whole file all at once.
# Use the commands you need, one section at a time.

# ============================================================
# POWERSHELL / TERMINAL BASICS
# ============================================================

# Show files and folders in the current location
dir

# Show the current folder path
pwd

# Show the contents of main.cpp
Get-Content .\main.cpp

# Create a new file called .gitignore
New-Item .gitignore


# ============================================================
# C++ COMPILER COMMANDS
# ============================================================

# Check that g++ is installed
g++ --version

# Compile main.cpp into an executable program
g++ .\main.cpp -o spacecraft_day1.exe

# Run the executable program
.\spacecraft_day1.exe

# Compile with extra warning messages
g++ .\main.cpp -Wall -o spacecraft_day1.exe


# ============================================================
# GIT SETUP COMMANDS
# ============================================================

# Check that Git is installed
git --version

# Start tracking the current folder with Git
git init

# Configure Git username
git config --global user.name "Abram Ghobrial"

# Configure Git email
# Replace this with the email you use for GitHub
git config --global user.email "your-email@example.com"


# ============================================================
# GIT STATUS AND SAVE COMMANDS
# ============================================================

# Check the current Git status
git status

# Add specific files to the next commit
git add main.cpp .gitignore

# Add all changed files to the next commit
git add .

# Save a local checkpoint
git commit -m "Day 1 first C++ spacecraft health report"

# Show compact commit history
git log --oneline


# ============================================================
# GIT BRANCH COMMANDS
# ============================================================

# Show current branches
git branch

# Rename current branch to main
git branch -M main


# ============================================================
# GITHUB CONNECTION COMMANDS
# ============================================================

# Check whether this local repo is connected to GitHub
git remote -v

# Connect this local repo to a GitHub repo
# Replace YOUR-USERNAME with your actual GitHub username
git remote add origin https://github.com/YOUR-USERNAME/fsw-learning.git

# Push local commits to GitHub for the first time
git push -u origin main

# Push future commits to GitHub
git push


# ============================================================
# COMMON DAILY WORKFLOW
# ============================================================

# 1. Compile the code
g++ .\main.cpp -o spacecraft_day1.exe

# 2. Run the program
.\spacecraft_day1.exe

# 3. Check what changed
git status

# 4. Add changed files
git add .

# 5. Save a checkpoint
git commit -m "Describe what changed"

# 6. Upload changes to GitHub
git push


# ============================================================
# MENTAL MODEL
# ============================================================

# VS Code     = where I write and edit code
# PowerShell  = where I give commands to the computer
# g++         = turns C++ code into a runnable program
# Git         = saves project history locally
# GitHub      = stores and shares the project online