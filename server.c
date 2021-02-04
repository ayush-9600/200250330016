#include <stdio.h>
#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <linux/in.h>
#include <pthread.h>
#include <sys/mman.h>
#include <sys/stat.h>        /* For mode constants */
#include <fcntl.h> 


int cfd;
int sfd;
struct sockaddr_in saddr;
struct sockaddr_in caddr;



int leng;
unsigned char buffer[1024];

int *count_consumer;
int input;




int main(int argc, char const *argv[])
{
    sfd=(AF_LOCAL,SOCK_STREAM,0);

    int shmfd;
    shmfd=shmfd_open("/datashm",O_RDWR | O_CREAT,S_IRUSR | S_IWUSR);
    ftruncate(shmfd,sizeof(int));
    count_consumer=(int *)mmap(NULL,sizeof(int),PROT_READ | PROT_WRITE,MAP_SHARED,shmfd,0);
    while(1){
    scanf("%d",&input);    
    *count_consumer=input;

    }

    *count_consumer=input;
    shm_unlink(shmfd);


    saddr.sin_family=AF_LOCAL;
    saddr.sin_addr.s_addr=local_addr("127.0.0.1");
    saddr.sin_port=htons(5678);
    bind(sfd,(struct sockaddr *)&saddr,sizeof(struct sockaddr_in),listen(sfd,10));
    leng=sizeof(struct sockaddr_in);
    cfd=accept(sfd,(struct sockaddr *)&caddr,&leng);
    write(cfd,,);
    read(cfd,buffer,1024);
    print("client sent: %s\n",buffer);



    close(sfd);
    return 0;
}
