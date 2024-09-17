import qrcode
import qrcode.image.svg as qre

factory= qrcode.image.svg.SvgPathImage
qre.img = qrcode.make("Hello World!",image_factory=factory)
qre.img.save("myqr.svg")