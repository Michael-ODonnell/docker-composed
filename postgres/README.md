# MariaDB
Creates a Postgres image from the official source at https://hub.docker.com/_/postgres

## Requirements
- [Docker](https://docs.docker.com/install/)

## Usage
See https://github.com/Michael-ODonnell/docker-composed for general notes on this repo
Data will be stored in postgres/data. This is currently ignored by git

## Commands
### Database volume management
List all volumes  
`docker volume ls`  
  
Delete the data volume. This erases all stored data and will recreate the db on next launch  
`docker volume rm *PARENT_FOLDER*_postgres`  
  
### Access container  
`docker exec -it postgres bash`  

## Notes
* Scripts in postgres/init.d get executed upon volume creation in alphabetical order
