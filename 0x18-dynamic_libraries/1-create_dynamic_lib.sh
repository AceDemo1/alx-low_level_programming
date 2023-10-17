#!/bin/bash

# Collect all .c files in the current directory
source_files=$(ls *.c 2>/dev/null)

if [ -z "$source_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile the .c files into object files
for source_file in $source_files; do
    object_file="${source_file%.c}.o"
    gcc -c -fPIC "$source_file" -o "$object_file"
    if [ $? -ne 0 ]; then
        echo "Error compiling $source_file"
        exit 1
    fi
done

# Create the dynamic library from the object files
gcc -shared -o liball.so *.o
if [ $? -ne 0 ]; then
    echo "Error creating the dynamic library."
    exit 1
fi

# Clean up the object files
rm -f *.o

echo "Dynamic library liball.so created successfully."

