import qrcode
import qrcode.constants

qr = qrcode.QRCode(version=1,
                   error_correction=qrcode.constants.ERROR_CORRECT_L,
                   box_size=50,
                   border=1)

qr.add_data("https://www.youtube.com/@TheStony")
qr.make(fit=True)

img = qr.make_image(fill_color='darkgreen',back_color='black')
img.save("Hellooooo!!!.png")
