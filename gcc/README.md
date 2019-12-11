# GCC
Creates a GCC image from the official source at https://hub.docker.com/_/gcc/

## Requirements
- [Docker](https://docs.docker.com/install/)

## Usage
See https://github.com/Michael-ODonnell/docker-composed for general notes on this repo

## Commands
### Start container  
`docker-compose up -d`

## Notes
* `docker-compose up -d` uses a shell script to build `./src/main.cpp` and run the output executable
* This only runs the executable once. Use `docker-compose run --rm gcc bash` to start a container for active editing
  * Build and execute with `sh /app/build_and_run.sh`
