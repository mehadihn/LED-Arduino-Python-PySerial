import serial
import time

arduino = serial.Serial(port='COM11', baudrate=115200, timeout=.1)

while True:
    i = input("on or off | done to end: ").strip()
    if i == 'done':
        print("Done")
        break

    arduino.write(i.encode())
    time.sleep(0.5)
    print(arduino.readline().decode('ascii'))

arduino.close()