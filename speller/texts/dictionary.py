words = set{}

def check(word):
    return word in words

def load(dictionary):
    with open(dictionary) as file:
        words.update(file.read().splitlines())
    return True

def size():
    return len(words)

def unload():
    return True
