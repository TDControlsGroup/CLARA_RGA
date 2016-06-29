import sys
import epics
import numpy as np

from PyQt4.Qt import *
from PyQt4.Qwt5 import *
from PyQt4.Qwt5.qplt import *
from PyQt4 import QtGui
from epics import PV

application = QApplication([])
x = np.arange(-2*np.pi, 2*np.pi, 0.01)
p = Plot(
  Curve(x, np.cos(x), Pen(Magenta, 2), "cos(x)"),
  Curve(x, np.exp(x), Pen(Red), "exp(x)", Y2),
  Axis(Y2, Log),
  "PyQwt using Qwt-%s -- http://qwt.sf.net" % QWT_VERSION_STR)
QPixmap.grabWidget(p).save('cli-plot-1.png', 'PNG')
True
x = x[0:-1:10]
p.plot(
  Curve(x, np.cos(x-np.pi/4), Symbol(Circle, Yellow), "circle"),
  Curve(x, np.cos(x+np.pi/4), Pen(Blue), Symbol(Square, Cyan), "square"))
QPixmap.grabWidget(p).save('cli-plot-2.png', 'PNG')
True

m1 = PV('XXX:m1.VAL')
print (m1.value)

def main():
    
    app = QtGui.QApplication(sys.argv)

    w = QtGui.QWidget()
    w.resize(250, 150)
    w.move(300, 300)
    w.setWindowTitle('Simple')
    w.show()
    
    sys.exit(app.exec_())


if __name__ == '__main__':
    main()
