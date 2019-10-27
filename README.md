# docker-composed
Compose files for common services pre-configured for local development where that requires data persistence or host access

## Requirements
- [Docker](https://docs.docker.com/install/)

## Usage
Each folder contains a docker-compose.yml and any folders that are required.
Copy the folders into your project, and merge the docker-compose.yml into the one for your project. You may also want to take the contents of any .gitignore files.
Each folder contains a README.md with more detail on the specific container.