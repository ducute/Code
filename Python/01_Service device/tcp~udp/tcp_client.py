import socket


def main():
    client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    client.connect(("127.0.0.1",3434))
    date =  client.recv(1024)
    print(date)
    client.close()


if __name__ == '__main__':
    for i in range(20):
        main()
