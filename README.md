# C++ HTTP Server

A learning project to build an HTTP server from scratch using C++ and CMake.

## Project Goals

- Learn C++ through practical application
- Understand HTTP protocol fundamentals
- Master socket programming and networking concepts
- Use industry-standard build tools (CMake)
- Explore concurrency and performance optimization

## Development Phases

### Phase 1: Basic TCP Server
- [x] Set up CMake project structure
- [X] Create basic socket
- [X] Accept connections
- [X] Add basic error handling

### Phase 2: Parse HTTP Requests **(Current Phase)**
- [ ] Parse request (method, path, version)
- [ ] Parse headers into key-value pairs
- [ ] Handle different HTTP methods

### Phase 3: Generate HTTP Responses
- [ ] Create basic response (Text, JSON)
- [ ] Handle different status codes
- [ ] Set proper Content-Type headers
- [ ] Serve simple static content

### Phase 4: Concurrency

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

