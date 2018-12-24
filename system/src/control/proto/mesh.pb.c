/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9 at Tue Dec 25 01:27:57 2018. */

#include "mesh.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t particle_ctrl_mesh_NetworkInfo_fields[6] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, particle_ctrl_mesh_NetworkInfo, name, name, 0),
    PB_FIELD(  2, STRING  , SINGULAR, CALLBACK, OTHER, particle_ctrl_mesh_NetworkInfo, ext_pan_id, name, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_NetworkInfo, pan_id, ext_pan_id, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_NetworkInfo, channel, pan_id, 0),
    PB_FIELD(  5, STRING  , SINGULAR, CALLBACK, OTHER, particle_ctrl_mesh_NetworkInfo, network_id, channel, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_AuthRequest_fields[2] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, particle_ctrl_mesh_AuthRequest, password, password, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_AuthReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_CreateNetworkRequest_fields[5] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, particle_ctrl_mesh_CreateNetworkRequest, name, name, 0),
    PB_FIELD(  2, STRING  , SINGULAR, CALLBACK, OTHER, particle_ctrl_mesh_CreateNetworkRequest, password, name, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_CreateNetworkRequest, channel, password, 0),
    PB_FIELD(  4, STRING  , SINGULAR, CALLBACK, OTHER, particle_ctrl_mesh_CreateNetworkRequest, network_id, channel, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_CreateNetworkReply_fields[2] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, particle_ctrl_mesh_CreateNetworkReply, network, network, &particle_ctrl_mesh_NetworkInfo_fields),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_StartCommissionerRequest_fields[2] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, particle_ctrl_mesh_StartCommissionerRequest, timeout, timeout, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_StartCommissionerReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_StopCommissionerRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_StopCommissionerReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_PrepareJoinerRequest_fields[2] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, particle_ctrl_mesh_PrepareJoinerRequest, network, network, &particle_ctrl_mesh_NetworkInfo_fields),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_PrepareJoinerReply_fields[3] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, particle_ctrl_mesh_PrepareJoinerReply, eui64, eui64, 0),
    PB_FIELD(  2, STRING  , SINGULAR, CALLBACK, OTHER, particle_ctrl_mesh_PrepareJoinerReply, password, eui64, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_AddJoinerRequest_fields[4] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, particle_ctrl_mesh_AddJoinerRequest, eui64, eui64, 0),
    PB_FIELD(  2, STRING  , SINGULAR, CALLBACK, OTHER, particle_ctrl_mesh_AddJoinerRequest, password, eui64, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_AddJoinerRequest, timeout, password, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_AddJoinerReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_RemoveJoinerRequest_fields[2] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, particle_ctrl_mesh_RemoveJoinerRequest, eui64, eui64, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_RemoveJoinerReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_JoinNetworkRequest_fields[2] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, particle_ctrl_mesh_JoinNetworkRequest, timeout, timeout, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_JoinNetworkReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_LeaveNetworkRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_LeaveNetworkReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_GetNetworkInfoRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_GetNetworkInfoReply_fields[2] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, particle_ctrl_mesh_GetNetworkInfoReply, network, network, &particle_ctrl_mesh_NetworkInfo_fields),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_ScanNetworksRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_ScanNetworksReply_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, particle_ctrl_mesh_ScanNetworksReply, networks, networks, &particle_ctrl_mesh_NetworkInfo_fields),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_DiagnosticInfo_fields[17] = {
    PB_FIELD(  1, FIXED_LENGTH_BYTES, SINGULAR, STATIC  , FIRST, particle_ctrl_mesh_DiagnosticInfo, ext_mac_address, ext_mac_address, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo, rloc, ext_mac_address, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo, mode, rloc, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo, timeout, mode, 0),
    PB_FIELD(  5, MESSAGE , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo, connectivity, timeout, &particle_ctrl_mesh_DiagnosticInfo_Connectivity_fields),
    PB_FIELD(  6, MESSAGE , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo, route64, connectivity, &particle_ctrl_mesh_DiagnosticInfo_Route64_fields),
    PB_FIELD(  7, MESSAGE , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo, leader_data, route64, &particle_ctrl_mesh_DiagnosticInfo_NetworkData_fields),
    PB_FIELD(  8, MESSAGE , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo, network_data, leader_data, &particle_ctrl_mesh_DiagnosticInfo_NetworkData_fields),
    PB_FIELD(  9, MESSAGE , REPEATED, CALLBACK, OTHER, particle_ctrl_mesh_DiagnosticInfo, ipv6_address_list, network_data, &particle_ctrl_Ipv6Address_fields),
    PB_FIELD( 10, MESSAGE , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo, mac_counters, ipv6_address_list, &particle_ctrl_mesh_DiagnosticInfo_MacCounters_fields),
    PB_FIELD( 15, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo, battery_level, mac_counters, 0),
    PB_FIELD( 16, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo, supply_voltage, battery_level, 0),
    PB_FIELD( 17, MESSAGE , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo, child_table, supply_voltage, &particle_ctrl_mesh_DiagnosticInfo_ChildTable_fields),
    PB_FIELD( 18, BYTES   , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo, channel_pages, child_table, 0),
    PB_FIELD( 19, UENUM   , REPEATED, CALLBACK, OTHER, particle_ctrl_mesh_DiagnosticInfo, type_list, channel_pages, 0),
    PB_FIELD( 20, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo, max_child_timeout, type_list, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_DiagnosticInfo_Connectivity_fields[10] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, particle_ctrl_mesh_DiagnosticInfo_Connectivity, parent_priority, parent_priority, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_Connectivity, link_quality_1, parent_priority, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_Connectivity, link_quality_2, link_quality_1, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_Connectivity, link_quality_3, link_quality_2, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_Connectivity, leader_cost, link_quality_3, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_Connectivity, id_sequence, leader_cost, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_Connectivity, active_routers, id_sequence, 0),
    PB_FIELD(  8, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_Connectivity, sed_buffer_size, active_routers, 0),
    PB_FIELD(  9, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_Connectivity, sed_datagram_count, sed_buffer_size, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_DiagnosticInfo_Route64_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, particle_ctrl_mesh_DiagnosticInfo_Route64, id_sequence, id_sequence, 0),
    PB_FIELD(  2, MESSAGE , REPEATED, CALLBACK, OTHER, particle_ctrl_mesh_DiagnosticInfo_Route64, routes, id_sequence, &particle_ctrl_mesh_DiagnosticInfo_Route64_RouteData_fields),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_DiagnosticInfo_Route64_RouteData_fields[5] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, particle_ctrl_mesh_DiagnosticInfo_Route64_RouteData, router_id, router_id, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_Route64_RouteData, link_quality_out, router_id, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_Route64_RouteData, link_quality_in, link_quality_out, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_Route64_RouteData, route_cost, link_quality_in, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_DiagnosticInfo_NetworkData_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_DiagnosticInfo_MacCounters_fields[10] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, particle_ctrl_mesh_DiagnosticInfo_MacCounters, if_in_unknown_protos, if_in_unknown_protos, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_MacCounters, if_in_errors, if_in_unknown_protos, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_MacCounters, if_out_errors, if_in_errors, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_MacCounters, if_in_ucast_pkts, if_out_errors, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_MacCounters, if_in_broadcast_pkts, if_in_ucast_pkts, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_MacCounters, if_in_discards, if_in_broadcast_pkts, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_MacCounters, if_out_ucast_pkts, if_in_discards, 0),
    PB_FIELD(  8, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_MacCounters, if_out_broadcast_pkts, if_out_ucast_pkts, 0),
    PB_FIELD(  9, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_MacCounters, if_out_discards, if_out_broadcast_pkts, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_DiagnosticInfo_ChildTable_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, particle_ctrl_mesh_DiagnosticInfo_ChildTable, children, children, &particle_ctrl_mesh_DiagnosticInfo_ChildTable_ChildEntry_fields),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_DiagnosticInfo_ChildTable_ChildEntry_fields[4] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, particle_ctrl_mesh_DiagnosticInfo_ChildTable_ChildEntry, timeout, timeout, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_ChildTable_ChildEntry, child_id, timeout, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_DiagnosticInfo_ChildTable_ChildEntry, mode, child_id, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_GetNetworkDiagnosticsRequest_fields[4] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, particle_ctrl_mesh_GetNetworkDiagnosticsRequest, flags, flags, 0),
    PB_FIELD(  2, UENUM   , REPEATED, CALLBACK, OTHER, particle_ctrl_mesh_GetNetworkDiagnosticsRequest, diagnostic_types, flags, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, particle_ctrl_mesh_GetNetworkDiagnosticsRequest, timeout, diagnostic_types, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_mesh_GetNetworkDiagnosticsReply_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, particle_ctrl_mesh_GetNetworkDiagnosticsReply, nodes, nodes, &particle_ctrl_mesh_DiagnosticInfo_fields),
    PB_LAST_FIELD
};





/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(particle_ctrl_mesh_CreateNetworkReply, network) < 65536 && pb_membersize(particle_ctrl_mesh_PrepareJoinerRequest, network) < 65536 && pb_membersize(particle_ctrl_mesh_GetNetworkInfoReply, network) < 65536 && pb_membersize(particle_ctrl_mesh_DiagnosticInfo, connectivity) < 65536 && pb_membersize(particle_ctrl_mesh_DiagnosticInfo, route64) < 65536 && pb_membersize(particle_ctrl_mesh_DiagnosticInfo, leader_data) < 65536 && pb_membersize(particle_ctrl_mesh_DiagnosticInfo, network_data) < 65536 && pb_membersize(particle_ctrl_mesh_DiagnosticInfo, mac_counters) < 65536 && pb_membersize(particle_ctrl_mesh_DiagnosticInfo, child_table) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_particle_ctrl_mesh_NetworkInfo_particle_ctrl_mesh_AuthRequest_particle_ctrl_mesh_AuthReply_particle_ctrl_mesh_CreateNetworkRequest_particle_ctrl_mesh_CreateNetworkReply_particle_ctrl_mesh_StartCommissionerRequest_particle_ctrl_mesh_StartCommissionerReply_particle_ctrl_mesh_StopCommissionerRequest_particle_ctrl_mesh_StopCommissionerReply_particle_ctrl_mesh_PrepareJoinerRequest_particle_ctrl_mesh_PrepareJoinerReply_particle_ctrl_mesh_AddJoinerRequest_particle_ctrl_mesh_AddJoinerReply_particle_ctrl_mesh_RemoveJoinerRequest_particle_ctrl_mesh_RemoveJoinerReply_particle_ctrl_mesh_JoinNetworkRequest_particle_ctrl_mesh_JoinNetworkReply_particle_ctrl_mesh_LeaveNetworkRequest_particle_ctrl_mesh_LeaveNetworkReply_particle_ctrl_mesh_GetNetworkInfoRequest_particle_ctrl_mesh_GetNetworkInfoReply_particle_ctrl_mesh_ScanNetworksRequest_particle_ctrl_mesh_ScanNetworksReply_particle_ctrl_mesh_DiagnosticInfo_particle_ctrl_mesh_DiagnosticInfo_Connectivity_particle_ctrl_mesh_DiagnosticInfo_Route64_particle_ctrl_mesh_DiagnosticInfo_Route64_RouteData_particle_ctrl_mesh_DiagnosticInfo_NetworkData_particle_ctrl_mesh_DiagnosticInfo_MacCounters_particle_ctrl_mesh_DiagnosticInfo_ChildTable_particle_ctrl_mesh_DiagnosticInfo_ChildTable_ChildEntry_particle_ctrl_mesh_GetNetworkDiagnosticsRequest_particle_ctrl_mesh_GetNetworkDiagnosticsReply)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(particle_ctrl_mesh_CreateNetworkReply, network) < 256 && pb_membersize(particle_ctrl_mesh_PrepareJoinerRequest, network) < 256 && pb_membersize(particle_ctrl_mesh_GetNetworkInfoReply, network) < 256 && pb_membersize(particle_ctrl_mesh_DiagnosticInfo, connectivity) < 256 && pb_membersize(particle_ctrl_mesh_DiagnosticInfo, route64) < 256 && pb_membersize(particle_ctrl_mesh_DiagnosticInfo, leader_data) < 256 && pb_membersize(particle_ctrl_mesh_DiagnosticInfo, network_data) < 256 && pb_membersize(particle_ctrl_mesh_DiagnosticInfo, mac_counters) < 256 && pb_membersize(particle_ctrl_mesh_DiagnosticInfo, child_table) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_particle_ctrl_mesh_NetworkInfo_particle_ctrl_mesh_AuthRequest_particle_ctrl_mesh_AuthReply_particle_ctrl_mesh_CreateNetworkRequest_particle_ctrl_mesh_CreateNetworkReply_particle_ctrl_mesh_StartCommissionerRequest_particle_ctrl_mesh_StartCommissionerReply_particle_ctrl_mesh_StopCommissionerRequest_particle_ctrl_mesh_StopCommissionerReply_particle_ctrl_mesh_PrepareJoinerRequest_particle_ctrl_mesh_PrepareJoinerReply_particle_ctrl_mesh_AddJoinerRequest_particle_ctrl_mesh_AddJoinerReply_particle_ctrl_mesh_RemoveJoinerRequest_particle_ctrl_mesh_RemoveJoinerReply_particle_ctrl_mesh_JoinNetworkRequest_particle_ctrl_mesh_JoinNetworkReply_particle_ctrl_mesh_LeaveNetworkRequest_particle_ctrl_mesh_LeaveNetworkReply_particle_ctrl_mesh_GetNetworkInfoRequest_particle_ctrl_mesh_GetNetworkInfoReply_particle_ctrl_mesh_ScanNetworksRequest_particle_ctrl_mesh_ScanNetworksReply_particle_ctrl_mesh_DiagnosticInfo_particle_ctrl_mesh_DiagnosticInfo_Connectivity_particle_ctrl_mesh_DiagnosticInfo_Route64_particle_ctrl_mesh_DiagnosticInfo_Route64_RouteData_particle_ctrl_mesh_DiagnosticInfo_NetworkData_particle_ctrl_mesh_DiagnosticInfo_MacCounters_particle_ctrl_mesh_DiagnosticInfo_ChildTable_particle_ctrl_mesh_DiagnosticInfo_ChildTable_ChildEntry_particle_ctrl_mesh_GetNetworkDiagnosticsRequest_particle_ctrl_mesh_GetNetworkDiagnosticsReply)
#endif


/* @@protoc_insertion_point(eof) */
