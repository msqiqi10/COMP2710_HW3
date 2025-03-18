# Compile the program first
g++ -o duel main.cpp

# Check if compilation was successful
if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

# Run the program and automate the "Press any key to continue..." prompts
# Using 'yes' to repeatedly send newlines to the program
yes "" | ./duel
