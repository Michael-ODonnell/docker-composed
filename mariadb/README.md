# MariaDB
Creates a MariaDB image from the official source at https://hub.docker.com/_/mariadb

## Requirements
- [Docker](https://docs.docker.com/install/)

## Usage
See https://github.com/Michael-ODonnell/docker-composed for general notes on this repo

## Commands
### Database volume management
List all volumes  
`docker volume ls`  
  
Delete the data volume. This erases all stored data and will recreate the db on next launch  
`docker volume rm *PARENT_FOLDER*_mariadb`  
  
### Access container  
`docker exec -it db bash`  

## Notes
* 10.2 onward did not work on Docker for Windows with the same compose. Not tested on OSX or linux.
* Scripts in db/init get executed upon volume creation in alphabetical order
* Custom configs can be placed in db/conf
