from cs50 import get_int

def main():
    while True:
        num = input("Number: ")
        if check_valid(num):
            print_brand(num)
            break

def check_valid(n):
    length = len(n)
    if (length == 13 or length == 15 or len == 16) and check_sum(n):
        return True
    return False

def check_sum(n):
    if

def print_brand(n):
    
