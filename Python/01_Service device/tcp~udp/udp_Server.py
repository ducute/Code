import socket


def main():
        Host ="0.0.0.0"
        Port = 2333

        udp_server = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        udp_server.bind((Host, Port))

        while True:
                cnn, addr = udp_server.recvfrom(1024)
                print("这个是地址", addr)
                udp_server.sendto()






if __name__ == "__main__":
        main()
