#include "packet_play_handler.h"
#include "util/logger.h"

void handle_play(server_t *server, ConnectionPtr conn, ReactorPacketPtr packet, byte_buffer_ptr buffer) {
    debug("got play packet %d\n", packet->packet_id);
}