from PIL import Image, ImageFilter

before = Image.open("brige.bmp")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("out.bmp")
