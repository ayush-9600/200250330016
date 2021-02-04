#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <linux/in.h>

int cfd;

struct sockaddr_in saddr;


int leng;
unsigned char buffer[1024];



struct packet{
    int id;
    int packetNo;
    int data;


};

void rand(int data){
    int temp,thruster,rocket,gyro;



    


}

void *thread1(void *args)
{
    struct packet p1;
    p1.id=
    p1.packetNo=
    p1.data=

}
void *thread2(void *args)
{
    struct packet p2;
    p2.id=
    p2.packetNo=
    p2.data=
}
void *thread3(void *args)
{
    struct packet p3;
    p3.id=
    p3.packetNo=
    p3.data=



}
void *thread4(void *args)
{
    struct packet p4;
    p4.id=
    p4.packetNo=
    p4.data=

}




int main(int argc, char const *argv[])
{
    cfd = (AF_LOCAL,SOCK_STREAM,0);

    saddr.sin_family=AF_LOCAL;
    saddr.sin_addr.s_addr=local_addr("127.0.0.1");
    saddr.sin_port=htons(5678);
    connect(cfd,(struct sockaddr *)&saddr,sizeof(struct sockaddr_in));
    read(cfd,buffer,1024);
    printf("server sent: %s\n",buffer);



    pthread_t temp_cont_system,temp_thrusters,acceleration_rocket,gyro_rocket;
    pthread_create(&temp_cont_system,NULL,thread1,NULL);
    pthread_create(&temp_thrusters,NULL,thread2,NULL);
    pthread_create(&acceleration_rocket,NULL,thread3,NULL);
    pthread_create(&gyro_rocket,NULL,thread4,NULL);
    pthread_join(&temp_cont_system,NULL);
    pthread_join(&temp_thrusters,NULL);
    pthread_join(&acceleration_rocket,NULL);
    pthread_join(&gyro_rocket,NULL);

    close(cfd);

    
    return 0;
}
