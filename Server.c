#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#define PORT 5001
#define MAX 200 
int main ()
{
    int sock_fd ,new_socket ,val_read = 0;
    char buffer [MAX] ;
    struct sockaddr_in sockaddr1 ;

    char * message = "I am a Server waiting for Client to respond" ;

    /*socket (int domain , int type ,int protocol)*/
    if ((sock_fd = socket (AF_INET , SOCK_STREAM , IPPROTO_TCP)) <0) {
        printf ("Error is Creating the Socket\n");
        return -1 ;
    }

    sockaddr1.sin_family = AF_INET ;
    sockaddr1.sin_addr.s_addr = INADDR_ANY ;
    sockaddr1.sin_port = htons(PORT) ; /*host to network*/ 
    
    int sockaddr1_len = sizeof (sockaddr1);   
    if (bind(sock_fd, (struct sockaddr*)&sockaddr1, 
                              sockaddr1_len) < 0){
        perror ("Error in Binding the Socket\n");
        return -1;
    }

    if (listen(sock_fd, 2) < 0) {
        printf ("Error in Litsening the Socket\n");
    }

    if ((new_socket = accept (sock_fd,(struct sockaddr*)&sockaddr1,
                                (socklen_t *)&(sockaddr1_len)))<0){

        printf ("Error in accepting the Socket\n");
        return -1;
    }
    val_read = read(new_socket, buffer, sizeof(buffer)) ;
    printf ("%s\n",buffer) ;
    send(new_socket , message, strlen(message) ,0) ;
    printf ("The Message is sent:\n");
    return 0 ;
}    
        
    
     
