from flask import Flask, request, send_file
import qrcode
from io import BytesIO

import qrcode.constants

app= Flask(__name__)

@app.route('/')
def generate_qr():
    ssid = "Swarup_5G"
    password = "Swaruplamsal99"
    wifi_data = 'WIFI:S:{};T:WPA;P:{};;'.format(ssid,password)
    qr= qrcode.QRCode(version=1,error_correction=qrcode.constants.ERROR_CORRECT_L,box_size=10,border=5)
    qr.add_data(wifi_data)
    qr.make(fit=True)
    img = qr.make_image(fill_color="blue", back_color="black")
    img.save("WIFI.PNG")

    byteIO = BytesIO()
    img.save(byteIO,'PNG')
    byteIO.seek(0)
    return send_file(byteIO,mimetype='image/png')

if __name__ == '__main__':
    app.run(port=5000,debug=True)