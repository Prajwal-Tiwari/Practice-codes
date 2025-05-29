file = open("example.txt", 'w')


file.write("Hello World\n")
lines = ['First line\n', 'Second line\n']
file.writelines(lines)
file1 = open('example.txt', 'r')
print(file1.read())