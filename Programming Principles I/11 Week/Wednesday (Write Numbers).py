import math

def main():
    outfile = open('circle.txt', 'w')

    radius = float(input('Enter the radius of a circle: '))
    area = math.pi * radius ** 2
    circumference = math.pi * radius * 2

    outfile.write(str(radius) + '\n')
    outfile.write(str(area) + '\n')
    outfile.write(str(circumference) + '\n')

    outfile.close()
    print('Data written to circle.txt')

    
def read_circle_data():
    infile = open('circle.txt', 'r')
    radius = float(infile.readline())
    infile.close()
    area = math.pi * radius **2 *4
    circumference = math.pi * radius * 4
    print(radius)
    print(area)
    print(circumference)

    
main()
read_circle_data()



    
    
