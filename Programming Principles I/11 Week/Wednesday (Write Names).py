def main():
    print('Enter the names of three friends. ')
    name1 = input('Friends #1: ')
    name2 = input('Friends #2: ')
    name3 = input('Friends #3: ')

    #Open a file named friends.txt
    #And use variable myfile to reference the file object
    myfile = open('friends.txt', 'w')
    myfile.write(name1 + '\n')
    myfile.write(name2 + '\n')
    myfile.write(name3 + '\n')

    myfile.close()
    print('The names were written to friends.txt')

def append_names():
    name4 = input('Friend #4: ')
    name5 = input('Friend #5: ')
    append_file = open('friends.txt', 'a')
    append_file.write(name4 + '\n')
    append_file.write(name5 + '\n')
    append_file.close()
    

main()
append_names()
