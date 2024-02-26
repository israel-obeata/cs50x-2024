from cs50 import get_int


def main():
    num = input("Number: ")
    if check_valid(num):
        print_brand(num)
    else:
        print("INVALID")


def check_valid(n):
    # length = len(n)
    if (length == 13 or length == 15 or length == 16) and check_sum(n):
        return True
    return False

def check_sum(n):
    total = 0
    for i in range(len(n)):
        total += n[]

def print_brand(n):

