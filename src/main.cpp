#include <cerrno>
#include <cstring>
#include <format>
#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

int main() {
    // Create empty socket no address or port
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd < 0) {
        std::cerr << "Socket failed: " << strerror(errno) << "\n";
        return 1;
    }

    uint16_t port = 8080;

    // Create address and port of the socket
    sockaddr_in address;
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(port);

    // Assign the address and port to the socket
    if (bind(server_fd, (sockaddr *)&address, sizeof(address)) != 0) {
        std::cerr << "Biding failed: " << strerror(errno) << "\n";
        return 1;
    }

    if (listen(server_fd, 3) != 0) {
        std::cerr << "Listen failed: " << strerror(errno) << "\n";
        return 1;
    };

    std::string success_message = std::format(
        "Succesfully created a socket: Port: {}, Status: Listening", port);

    std::cout << success_message << "\n";

    close(server_fd);

    return 0;
}
