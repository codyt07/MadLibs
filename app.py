"""Python version of the mad libs project for practice. """

def main():
    print("\n")
    print("Mad Libs! \r")
    adjective1 = input("Please enter an adjective: ")
    girlsName = input("Please enter a girl's name: ")
    adjective2 = input("Please enter another adjective: ")
    occupation1 = input ("Please enter an occupation: ")
    placeName = input("Please enter the name of a place: ")
    clothing = input("Please input the name of a plural clothing item: ")
    hobby = input("Please enter a hobby: ")
    adjective3 = input("Please enter another adjective: ")
    occupation2 = input("Please enter another occupation: ")
    boysName = input("Please enter a boy's name: ")
    mansName = input("Please enter a man's name: ")

    print(f'''\rThere was once a {adjective1} girl name {girlsName} 
who was a {adjective2} {occupation1} in the Kingdom of {placeName}. 
She loved to wear {clothing} and {hobby}. She wanted to marry 
the {adjective3} {occupation2} named {boysName}. But, her 
father, King {mansName}, forbid her from seeing him. \n''' )

if __name__ == "__main__":
    main()