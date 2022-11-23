import os

dir_path = 'g:\\AAMyWorkSpace\\Algorithm_code\\.ZOJ\\pat_practice\\advanced'
file_extenstion = '.exe'  # You can change it based on your need.

for root, _, files in os.walk(dir_path):
    for file in files:
        # for each file in the dir and the sub directories, if the file name ends with the '.exe'
        if file.endswith(file_extenstion):
            os.remove(os.path.join(root, file))  # Just delete it
