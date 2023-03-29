#ifndef NET_PACKET_LOGIN_HANDLER_H
#define NET_PACKET_LOGIN_HANDLER_H 1

#include "../../connection.h"
#include "types.h"
#include "names.h"

void handle_login(server_t *server, ConnectionPtr conn, ReactorPacketPtr packet, byte_buffer_ptr buffer);

#endif