# C++ HTTP Server

A learning project to build an HTTP server from scratch using C++ and CMake.

## Project Goals

- Learn C++ through practical application
- Understand HTTP protocol fundamentals
- Master socket programming and networking concepts
- Use industry-standard build tools (CMake)
- Explore concurrency and performance optimization

## Development Phases

### Phase 1: Basic TCP Server **(Current Phase)**
- [x] Set up CMake project structure
- [ ] Create basic socket wrapper
- [ ] Implement TCP server that can accept connections
- [ ] Handle basic send/receive operations
- [ ] Implement proper error handling
- [ ] Test with telnet or netcat

**Learning Focus:** Socket programming, bind/listen/accept flow, POSIX sockets

### Phase 2: Parse HTTP Requests

### Phase 3: Generate HTTP Responses

### Phase 4: Routing & Features

## Building the Project

```bash
# Create build directory
mkdir build && cd build

# Configure with CMake
cmake ..

# Build
cmake --build .

# Run
./http_server
```
---

