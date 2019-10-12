import socket
import datetime

def main():
    host = "0.0.0.0"
    port = 3434
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    server.bind((host, port))
    server.listen(1)

    while True:
        conn, addr = server.accept()
        dt = str(datetime.datetime.now())
        conn.send(dt.encode("utf-8"))
        print("sent", addr)
        conn.close()







if __name__ == '__main__':
    main()