#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#define PORT 5001
#define MAX 200 
int main ()
{
    int sock_fd ,new_socket ,val_read = 0;
    char buffer [MAX] ;
    struct sockaddr_in serv_addr ;
    int sockaddr1_len = sizeof (serv_addr);   
    char * message = "I am a Client sending for Server to respond" ;
    /*socket (int domain , int type ,int protocol)*/
    if ((sock_fd = socket (AF_INET , SOCK_STREAM , 0))== 0) {
        printf ("Error is Creating the Socket\n");
        return -1 ;
    }
    memset (&serv_addr  ,'0',sizeof (serv_addr))  ;
    serv_addr.sin_family = AF_INET ;
    serv_addr.sin_port = htons(PORT) ; /*host to network*/ 
    if (inet_pton(AF_INET ,"127.0.0.1" ,&serv_addr.sin_addr) <= 0){
        printf ("Invalid Address:\n");
        return -1;
    }
    if (connect(sock_fd,(struct sockaddr*)&serv_addr,
                sizeof(struct sockaddr))<0){
        printf ("Error in Connecting the Socket\n");
        return -1;
    }
    send(sock_fd , message, strlen(message) ,0) ;
    printf ("The Message is sent:\n");
    val_read = read(new_socket ,buffer, sizeof(buffer)) ;
    printf ("%s\n",buffer) ;
    return 0 ;
}    
        
    
     
