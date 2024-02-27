from cs50 import get_string


def main():
    text = get_string("Text: ")
    index = calculate(text)
    print_grade(index)


def calculate(s):
    letters = words = sentences = 0
    for i in range(len(s)):
        if s[i].isalpha():
            letters


def print_grade(n)
