import os

# Create the root folder named "USER"
root_folder = "USER"
os.mkdir(root_folder)

# Create the subfolders
subfolders = ["D1", "D2", "D3"]
for subfolder in subfolders:
    os.mkdir(os.path.join(root_folder, subfolder))

# Create the files with a.txt extension
files = ["A1.txt", "A2.txt", "A3.txt"]
for file in files:
    with open(os.path.join(root_folder, file), "w") as f:
        pass  # Create an empty file

# Create the sub-subfolders
sub_subfolders = ["D31", "D32"]
for sub_subfolder in sub_subfolders:
    os.mkdir(os.path.join(root_folder, subfolders[2], sub_subfolder))



# Create the files a4, a5, and a6 in D31
sub_subfiles = ["A4.txt", "A5.txt", "A6.txt"]
for sub_subfile in sub_subfiles:
    with open(os.path.join(root_folder, subfolders[2], sub_subfolders[0], sub_subfile), "w") as f:
        pass  # Create an empty file



# Create another subfolder in D31 called D311
sub_subfolders2 = ["D311"]
for sub_subfolder2 in sub_subfolders2:
    os.mkdir(os.path.join(root_folder, subfolders[2], sub_subfolders[0], sub_subfolder2))



# Create folders D3111 and D3112 in D311
sub_folders2 = ["D3111", "D3112"]
for sub_folder2 in sub_folders2:
    os.mkdir(os.path.join(root_folder, subfolders[2],sub_subfolders[0], sub_subfolders2[0], sub_folder2))
    
# USER\\D3\\D311\\D3111'
# Create a filed called A10 in D3112
sub_subfiles2 = ["A10.txt"]
for sub_subfile2 in sub_subfiles2:
    with open(os.path.join(root_folder, subfolders[2], sub_subfolders[0], sub_subfolders2[0], sub_folders2[1], sub_subfile2), "w") as f:
        pass  # Create an empty file