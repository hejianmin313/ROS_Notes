
# Shutdown linux

```
#h-halt
shutdown -h now

#r-restart
shutdown -r now

#specific time
shutdown -h 20:01

#five minutes later
shutdown -r +5
```

# command: chmod 
> chomd is a command which set the permissions on the files


three types of linux users
* Owner
* Group
* World

three types of permissions on files
* read(4)-r
* write(2)-w
* executable(1)-x

```
COMMAND:OWNER:GROUP:WORLD:PATH
chmod read&write read read FileName
chmod 6 4 4 mydoc.txt
```

# command: at

```
COMMAND-DATE
at -f /usr/local/bin/reboot.pl 14:45
```
where reboot.pl contains
```
#!/usr/bin/perl
'shutdown -r now'
```

# select a linux distribution
a linux distribution is the linux version avaible to the public; Different versions tailor different needs; There is no best distribution

The three most popular desktop distributions are:
* Fedora
* Ubuntu
* Linux Mint

The three most popular server distributions are:
* Debian
* CentOS
* OpenSUSE

# File Backup(tar/gzip)
## using tar
Let's assume you have a list of "notes_1.txt notes_2.txt ..." under the directory /linux_course

You can use `tar` to back them up and package them in a tarball
```
tar -cvf linux_notes.tar notes*.txt

# pack all files in txt
tar -cvf linux_notes.tar *.txt

# pack all files
tar -cvf linux_notes.tar *.*.

# backup the whole directory
tar -cvf linux_notes.tat *
```
c -- create 

v -- verbose(show what files they are)

f -- make a file(always be the last option)

## using gzip
as we mentioned above, `tar` just assemble the files into a tarball; There is no reduction in the size of these files. We can use `gzip` to reduce the tarball into more manageable size

```
gzip your_tarball.tar
```

putting the two commands together
```
tar -cvzf back_up.tar.gz *
```

## Untar
```
tar -zxvpf my_tar_file.tar.gz
```
-z unzip first

-x extract the files from the tarball

-v verbose(tar tells you what files it's extracting)

-p preserve the dates and permissions of the original files

-f make a file(without it, tar will do nothing)

or you want to use untar and gzip seperately
```
gzip -d my_tar_files.tar.gz
gunzip my_tar_files.tar.gz
```

# Clear
clear the terminal
```
clear
```
or `Ctrl+L`

# MAN Pages
man -manul pages in linux
```
man [the command]
man -mkdir

# more detailed
info [command name]

```
