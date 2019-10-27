# NGinX Web Server
Creates an NGinX image from the official source at https://hub.docker.com/_/nginx

## Requirements
- [Docker](https://docs.docker.com/install/)

## Usage
See https://github.com/Michael-ODonnell/docker-composed for general notes on this repo

When the container is launched, the content directory will be available from http://192.168.1.10/
For ease of use I suggest modifying your hosts file (C:\Windows\System32\drivers\etc\hosts, /etc/hosts) to resolve that domain to something easier to type, like hosting  
`192.168.1.10    hosting                             # file hosting`  

The .gitignore file in /nginx ignores all content and ssl changes.  
Content is ignored for ease of dev, as webpacked files clutter git.  
SSL is ignored so keys aren't accidetally committed.  

## Adding sites
Copy the default config (hosting.conf) in the `nginx/conf.d` directory.  I recommend naming it after the site you want to host, e.g. `my-site.com.conf`.  The file *must* end in `.conf` or the nginx container will not detect it.  
Change the server_name property to your site name.  Modify hosts again to resolve your site url to domain to your vagrant subnet  
`192.168.1.10    my-site.com                         # file hosting`  
Restart the nginx container and you're good to go  
`docker-compose restart`  

### SSL
If you generate an ssl cert for yours site, copy the public .pem or .crt into ssl/public and the private .pem or .key file into ssl/private, and uncomment the following lines in the conf file, changing the names if required  
```
#    listen 443 ssl;
#    ssl_certificate /etc/ssl/public/hosting.crt;
#    ssl_certificate_key /etc/ssl/private/hosting.key;
```

Then restart the nginx container