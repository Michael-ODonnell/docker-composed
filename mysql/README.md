# MySQL
Creates a MySQL image from the official source at https://hub.docker.com/_/mysql

## Requirements
- [Docker](https://docs.docker.com/install/)

## Usage
See https://github.com/Michael-ODonnell/docker-composed for general notes on this repo

## Commands
### Database volume management
List all volumes  
`docker volume ls`  
  
Delete the data volume. This erases all stored data and will recreate the db on next launch  
`docker volume rm *PARENT_FOLDER*_mysql`  
  
### Access container  
`docker exec -it db bash`  

## Notes
* Scripts in db/init get executed upon volume creation in alphabetical order
* Custom configs can be placed in db/conf
