list of functions:
   lfds711_misc_force_store(param: )  call count 1
   __atomic_compare_exchange_n(param: mptr, eptr, newval, weak_p, sm, fm)  call count 0
   __atomic_exchange_n(param: previous, new, memorder)  call count 0
   __atomic_thread_fence(param: i)  call count 1
   swap_stack_top(param: top, oldtop, newtop)  call count 2
   exponential_backoff(param: )  call count 2
   lfds711_misc_internal_backoff_init(param: bs)  call count 2
   lfds711_stack_init_valid_on_current_logical_core(param: ss, user_state)  call count 1
   lfds711_stack_pop(param: ss, se)  call count 1
   lfds711_stack_push(param: ss, se)  call count 1
   lfds711_stack_cleanup(param: ss, ss, se, element_cleanup_callback)  call count 0
   push(param: )  call count 0
   pop(param: )  call count 0
   main(param: )  call count 0

list of thread functions:
   push  call count 1
   pop  call count 1

parameters for main():
   (no params)

Variables:
   (global)
      id2  'ps'  
         type 'struct lfds711_prng_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id3  'seed'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id4  'psts'  
         type 'struct lfds711_prng_st_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id5  'None'  
         type 'enum lfds711_stack_query {LFDS711_STACK_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_STACK_QUERY_SINGLETHREADED_VALIDATE}'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id13  'lfds711_misc_globals'  
         type 'extern struct lfds711_misc_globals'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id14  'query_type'  
         type 'enum lfds711_stack_query'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id15  'query_input'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id16  'query_output'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id29  'baus'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id30  'key_compare_function'  
         type 'int (*)(const void, const void)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id31  'existing_key'  
         type 'const void'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id32  'user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id33  'element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id34  'baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id35  'existing_baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id36  'key'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id37  'absolute_position'  
         type 'enum lfds711_btree_au_absolute_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id38  'relative_position'  
         type 'enum lfds711_btree_au_relative_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id48  'fs'  
         type 'struct lfds711_freelist_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id49  'elimination_array'  
         type 'struct lfds711_freelist_element * volatile (*)'  kind 'p'  arity '1'  
         size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id50  'elimination_array_size_in_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id51  'fe'  
         type 'struct lfds711_freelist_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id70  'has'  
         type 'struct lfds711_hash_a_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id71  'baus_array'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id72  'array_size'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id73  'key_hash_function'  
         type 'void (*)(const void, lfds711_pal_uint_t)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id74  'element_cleanup_function'  
         type 'void (*)(struct lfds711_hash_a_state, struct lfds711_hash_a_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id75  'hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id76  'existing_hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id77  'hai'  
         type 'struct lfds711_hash_a_iterate *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id88  'lasos'  
         type 'struct lfds711_list_aso_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id89  'lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id90  'existing_lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id101  'lasus'  
         type 'struct lfds711_list_asu_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id102  'lasue'  
         type 'struct lfds711_list_asu_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id103  'lasue_predecessor'  
         type 'struct lfds711_list_asu_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id104  'position'  
         type 'enum lfds711_list_asu_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id116  'qbmms'  
         type 'struct lfds711_queue_bmm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id117  'element_array'  
         type 'struct lfds711_queue_bss_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id118  'number_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id119  'value'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id128  'qbsss'  
         type 'struct lfds711_queue_bss_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id138  'qumms'  
         type 'struct lfds711_queue_umm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id139  'qumme_dummy'  
         type 'struct lfds711_queue_umm_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id140  'qumme'  
         type 'struct lfds711_queue_umm_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id154  'rs'  
         type 'struct lfds711_ringbuffer_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id155  're_array_inc_dummy'  
         type 'struct lfds711_ringbuffer_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id156  'number_elements_inc_dummy'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id157  'overwrite_occurred_flag'  
         type 'enum lfds711_misc_flag *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id158  'overwritten_key'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id159  'overwritten_value'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id167  'ss'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[1282, 1299, 1315]'  
         deref '[]'  
         occurs '[1282, 1299, 1315]'  
      id168  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id169  'bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id185  'lock'  
         type 'pthread_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[1080, 1088, 1100, 1124, 1125, 1144, 1146, 1155, 1156, 1195, 1197, 1203, 1205, 1279, 1283, 1298, 1300, 1318]'  
         deref '[]'  
         occurs '[1080, 1088, 1100, 1124, 1125, 1144, 1146, 1155, 1156, 1195, 1197, 1203, 1205, 1279, 1283, 1298, 1300, 1318]'  
   lfds711_misc_force_store
      id17  'destination'  
         type 'volatile lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[292]'  
         deref '[]'  
         occurs '[292]'  
   __atomic_compare_exchange_n
      id170  'mptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1016, 1018]'  
         occurs '[1016, 1018]'  
      id171  'eptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1016, 1023]'  
         occurs '[1016, 1023]'  
      id172  'newval'  
         type 'volatile int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1018, 1023]'  
      id173  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id174  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id175  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   __atomic_exchange_n
      id176  'previous'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1030, 1031]'  
         occurs '[1030, 1031]'  
      id177  'new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1031]'  
      id178  'memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id179  'old'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1032]'  
   __atomic_thread_fence
      id180  'i'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   swap_stack_top
      id181  'top'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1042, 1044, 1049]'  
         occurs '[1042, 1044, 1049]'  
      id182  'oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1042, 1049]'  
         occurs '[1042, 1049]'  
      id183  'newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1044]'  
         occurs '[1044]'  
   exponential_backoff
      id184  'loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1060, 1060, 1060]'  
   lfds711_misc_internal_backoff_init
      id186  'bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1066, 1067, 1069, 1070, 1071, 1072, 1073]'  
      id187  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1066, 1067]'  
         occurs '[1066, 1067]'  
   lfds711_stack_init_valid_on_current_logical_core
      id188  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1083, 1084, 1085, 1089, 1090, 1092, 1094, 1095]'  
      id189  'user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1092]'  
      id190  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1083, 1084, 1085]'  
         occurs '[1083, 1084, 1085]'  
   lfds711_stack_pop
      id191  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1117, 1127, 1128, 1145]'  
      id192  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1136, 1163]'  
         occurs '[1118, 1136, 1163]'  
      id193  'result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1145, 1148, 1161]'  
      id194  'backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id195  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1145]'  
         deref '[]'  
         occurs '[1140, 1141, 1145]'  
      id196  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1145]'  
         deref '[]'  
         occurs '[1127, 1128, 1134, 1140, 1141, 1145, 1163]'  
      id197  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1117, 1118]'  
         occurs '[1117, 1118]'  
      id198  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1158, 1159]'  
   lfds711_stack_push
      id199  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1182, 1187, 1188, 1204]'  
      id200  'se'  
         type 'struct lfds711_stack_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1183, 1185, 1196]'  
      id201  'result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1190, 1192, 1204, 1207]'  
      id202  'backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id203  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1204]'  
         deref '[]'  
         occurs '[1185, 1200, 1204]'  
      id204  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1204]'  
         deref '[]'  
         occurs '[1187, 1188, 1196, 1200, 1204]'  
      id205  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1182, 1183]'  
         occurs '[1182, 1183]'  
      id206  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1210, 1211]'  
   lfds711_stack_cleanup
      id207  'ss'  
         type 'struct lfds711_stack_state'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1228, 1235, 1242]'  
      id208  'element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1233, 1242]'  ptr-to-f 'True'
      id209  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1235, 1237, 1239, 1240, 1240]'  
      id210  'se_temp'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1239, 1242]'  
      id211  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1228]'  
         occurs '[1228]'  
   push
      id214  'td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1281, 1282]'  
         deref '[]'  
         occurs '[1275, 1280, 1281, 1281, 1282]'  
      id215  'loop'  
         type 'int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1277, 1277, 1277, 1280, 1280, 1281, 1281, 1282]'  
   pop
      id216  'loop'  
         type 'int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1295, 1295, 1295]'  
      id217  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1299]'  
         deref '[1304]'  
         occurs '[1299, 1304]'  
      id218  'temp_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1297, 1304, 1306]'  
      id219  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1299, 1302]'  
      id220  'count'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1305, 1309]'  
   main
      id221  't1'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1319]'  
         deref '[]'  
         occurs '[1319, 1321]'  
      id222  't2'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1320]'  
         deref '[]'  
         occurs '[1320, 1322]'  

Fields:
   lfds711_prng_state
      id0  'entropy'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_prng_st_state
      id1  'entropy'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_backoff_state
      id6  'lock'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id7  'backoff_iteration_frequency_counters'  type 'lfds711_pal_uint_t'  kind 'f'  arity '1'  size '[2]'  
      id8  'metric'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id9  'total_operations'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_globals
      id10  'ps'  type 'struct lfds711_prng_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_validation_info
      id11  'min_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id12  'max_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_btree_au_element
      id18  'left'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id19  'right'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id20  'up'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id21  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id22  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_btree_au_state
      id23  'root'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id24  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id25  'existing_key'  type 'enum lfds711_btree_au_existing_key'  kind 'f'  arity '0'  size '[]'  
      id26  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id27  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id28  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_element
      id39  'next'  type 'struct lfds711_freelist_element *'  kind 'f'  arity '0'  size '[]'  
      id40  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id41  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_state
      id42  'top'  type 'struct lfds711_freelist_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id43  'elimination_array_size_in_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id44  'elimination_array'  type 'struct lfds711_freelist_element * volatile (*)'  kind 'f'  arity '1'  size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
      id45  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id46  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id47  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_element
      id52  'baue'  type 'struct lfds711_btree_au_element'  kind 'f'  arity '0'  size '[]'  
      id53  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id54  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_iterate
      id55  'baue'  type 'struct lfds711_btree_au_element *'  kind 'f'  arity '0'  size '[]'  
      id56  'baus'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id57  'baus_end'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_state
      id58  'existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id59  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id60  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id61  'array_size'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id62  'baus_array'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id63  'has'  type 'struct lfds711_hash_a_state *'  kind 'f'  arity '0'  size '[]'  
      id64  'hae'  type 'struct lfds711_hash_a_element *'  kind 'f'  arity '0'  size '[]'  
      id65  'element_cleanup_callback'  type 'void (*)(struct lfds711_hash_a_state *has, struct lfds711_hash_a_element *hae)'  kind 'f'  arity '0'  size '[]'  
      id66  'key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id67  'hash'  type 'lfds711_pal_uint_t *'  kind 'f'  arity '0'  size '[]'  
      id68  'key_hash_function'  type 'void (*)(const void *key, lfds711_pal_uint_t *hash)'  kind 'f'  arity '0'  size '[]'  
      id69  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_element
      id78  'next'  type 'struct lfds711_list_aso_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id79  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id80  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_state
      id81  'dummy_element'  type 'struct lfds711_list_aso_element'  kind 'f'  arity '0'  size '[]'  
      id82  'start'  type 'struct lfds711_list_aso_element *'  kind 'f'  arity '0'  size '[]'  
      id83  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id84  'existing_key'  type 'enum lfds711_list_aso_existing_key'  kind 'f'  arity '0'  size '[]'  
      id85  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id86  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id87  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_element
      id91  'next'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id92  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id93  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_state
      id94  'dummy_element'  type 'struct lfds711_list_asu_element'  kind 'f'  arity '0'  size '[]'  
      id95  'end'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id96  'start'  type 'struct lfds711_list_asu_element *'  kind 'f'  arity '0'  size '[]'  
      id97  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id98  'after_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id99  'end_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id100  'start_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_element
      id105  'sequence_number'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id106  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id107  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_state
      id108  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id109  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id110  'read_index'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id111  'write_index'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id112  'element_array'  type 'struct lfds711_queue_bmm_element *'  kind 'f'  arity '0'  size '[]'  
      id113  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id114  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id115  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_element
      id120  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id121  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_state
      id122  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id123  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id124  'read_index'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id125  'write_index'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id126  'element_array'  type 'struct lfds711_queue_bss_element *'  kind 'f'  arity '0'  size '[]'  
      id127  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_element
      id129  'next'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id130  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id131  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_state
      id132  'enqueue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id133  'dequeue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id134  'aba_counter'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id135  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id136  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id137  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_element
      id141  'fe'  type 'struct lfds711_freelist_element'  kind 'f'  arity '0'  size '[]'  
      id142  'qumme'  type 'struct lfds711_queue_umm_element'  kind 'f'  arity '0'  size '[]'  
      id143  'qumme_use'  type 'struct lfds711_queue_umm_element *'  kind 'f'  arity '0'  size '[]'  
      id144  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id145  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_state
      id146  'fs'  type 'struct lfds711_freelist_state'  kind 'f'  arity '0'  size '[]'  
      id147  'qumms'  type 'struct lfds711_queue_umm_state'  kind 'f'  arity '0'  size '[]'  
      id148  'rs'  type 'struct lfds711_ringbuffer_state *'  kind 'f'  arity '0'  size '[]'  
      id149  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id150  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id151  'unread_flag'  type 'enum lfds711_misc_flag'  kind 'f'  arity '0'  size '[]'  
      id152  'element_cleanup_callback'  type 'void (*)(struct lfds711_ringbuffer_state *rs, void *key, void *value, enum lfds711_misc_flag unread_flag)'  kind 'f'  arity '0'  size '[]'  
      id153  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_element
      id160  'next'  type 'struct lfds711_stack_element *'  kind 'f'  arity '0'  size '[]'  
      id161  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id162  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_state
      id163  'top'  type 'struct lfds711_stack_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id164  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id165  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id166  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   test_data
      id212  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id213  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  

Typedefs:

Pointer variables:
   (global)
       var 'ps'   type 'struct lfds711_prng_state *'   kind 'p'   arity '0'   size '[]'   
       var 'psts'   type 'struct lfds711_prng_st_state *'   kind 'p'   arity '0'   size '[]'   
       var 'query_input'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var 'query_output'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var 'baus'   type 'struct lfds711_btree_au_state *'   kind 'p'   arity '0'   size '[]'   
       var 'user_state'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var 'baue'   type 'struct lfds711_btree_au_element **'   kind 'p'   arity '0'   size '[]'   
       var 'existing_baue'   type 'struct lfds711_btree_au_element **'   kind 'p'   arity '0'   size '[]'   
       var 'key'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var 'fs'   type 'struct lfds711_freelist_state *'   kind 'p'   arity '0'   size '[]'   
       var 'fe'   type 'struct lfds711_freelist_element **'   kind 'p'   arity '0'   size '[]'   
       var 'has'   type 'struct lfds711_hash_a_state *'   kind 'p'   arity '0'   size '[]'   
       var 'baus_array'   type 'struct lfds711_btree_au_state *'   kind 'p'   arity '0'   size '[]'   
       var 'hae'   type 'struct lfds711_hash_a_element **'   kind 'p'   arity '0'   size '[]'   
       var 'existing_hae'   type 'struct lfds711_hash_a_element **'   kind 'p'   arity '0'   size '[]'   
       var 'hai'   type 'struct lfds711_hash_a_iterate *'   kind 'p'   arity '0'   size '[]'   
       var 'lasos'   type 'struct lfds711_list_aso_state *'   kind 'p'   arity '0'   size '[]'   
       var 'lasoe'   type 'struct lfds711_list_aso_element **'   kind 'p'   arity '0'   size '[]'   
       var 'existing_lasoe'   type 'struct lfds711_list_aso_element **'   kind 'p'   arity '0'   size '[]'   
       var 'lasus'   type 'struct lfds711_list_asu_state *'   kind 'p'   arity '0'   size '[]'   
       var 'lasue'   type 'struct lfds711_list_asu_element **'   kind 'p'   arity '0'   size '[]'   
       var 'lasue_predecessor'   type 'struct lfds711_list_asu_element *'   kind 'p'   arity '0'   size '[]'   
       var 'qbmms'   type 'struct lfds711_queue_bmm_state *'   kind 'p'   arity '0'   size '[]'   
       var 'element_array'   type 'struct lfds711_queue_bss_element *'   kind 'p'   arity '0'   size '[]'   
       var 'value'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var 'qbsss'   type 'struct lfds711_queue_bss_state *'   kind 'p'   arity '0'   size '[]'   
       var 'qumms'   type 'struct lfds711_queue_umm_state *'   kind 'p'   arity '0'   size '[]'   
       var 'qumme_dummy'   type 'struct lfds711_queue_umm_element *'   kind 'p'   arity '0'   size '[]'   
       var 'qumme'   type 'struct lfds711_queue_umm_element **'   kind 'p'   arity '0'   size '[]'   
       var 'rs'   type 'struct lfds711_ringbuffer_state *'   kind 'p'   arity '0'   size '[]'   
       var 're_array_inc_dummy'   type 'struct lfds711_ringbuffer_element *'   kind 'p'   arity '0'   size '[]'   
       var 'overwrite_occurred_flag'   type 'enum lfds711_misc_flag *'   kind 'p'   arity '0'   size '[]'   
       var 'overwritten_key'   type 'void **'   kind 'p'   arity '0'   size '[]'   
       var 'overwritten_value'   type 'void **'   kind 'p'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
       var 'bs'   type 'struct lfds711_misc_backoff_state *'   kind 'p'   arity '0'   size '[]'   
   lfds711_misc_force_store
   __atomic_compare_exchange_n
       var 'mptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_exchange_n
       var 'previous'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_thread_fence
   swap_stack_top
       var 'top'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var 'oldtop'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var 'newtop'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
   exponential_backoff
   lfds711_misc_internal_backoff_init
       var 'bs'   type 'struct lfds711_misc_backoff_state *'   kind 'p'   arity '0'   size '[]'   
       var 'c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   lfds711_stack_init_valid_on_current_logical_core
       var 'ss'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'user_state'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var 'c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   lfds711_stack_pop
       var 'ss'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
       var 'new_top'   type 'struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var 'c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   lfds711_stack_push
       var 'ss'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element *'   kind 'p'   arity '0'   size '[]'   
       var 'new_top'   type 'struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var 'c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   lfds711_stack_cleanup
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var 'se_temp'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var 'c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   push
       var 'td'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
   pop
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var 'temp_td'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
   main

Function blocks:
function 'lfds711_misc_force_store' ----------------------------------:
inline static void lfds711_misc_force_store()
{
    volatile lfds711_pal_uint_t destination;
    {
        (void) __atomic_exchange_n(&destination, 0, 0);
    }
    ;
    return;
}



inline static void
function '__atomic_compare_exchange_n' ----------------------------------:
static _Bool __atomic_compare_exchange_n(volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm)
{
    if ((*mptr) == (*eptr))
    {
        *mptr = newval;
        return 1;
    }
    else
    {
        *eptr = newval;
        return 0;
    }

}


volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm
static _Bool
function '__atomic_exchange_n' ----------------------------------:
unsigned long __atomic_exchange_n(volatile int long long unsigned *previous, int long long unsigned new, int memorder)
{
    unsigned long int old = *previous;
    *previous = new;
    return old;
}


volatile int long long unsigned *previous, int long long unsigned new, int memorder
unsigned long
function '__atomic_thread_fence' ----------------------------------:
void __atomic_thread_fence(int i)
{
}


int i
void
function 'swap_stack_top' ----------------------------------:
int swap_stack_top(struct lfds711_stack_element * volatile *top, struct lfds711_stack_element * volatile *oldtop, struct lfds711_stack_element **newtop)
{
    if ((*oldtop) == (*top))
    {
        *top = *newtop;
        return 1;
    }
    else
    {
        *oldtop = *top;
        return 0;
    }

}


struct lfds711_stack_element * volatile *top, struct lfds711_stack_element * volatile *oldtop, struct lfds711_stack_element **newtop
int
function 'exponential_backoff' ----------------------------------:
void exponential_backoff()
{
    int loop;
    for (loop = 0; loop < 10; loop)
            ;

}



void
function 'lfds711_misc_internal_backoff_init' ----------------------------------:
void lfds711_misc_internal_backoff_init(struct lfds711_misc_backoff_state *bs)
{
    if (!(bs != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) (&bs->lock)) % 128) == 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    bs->lock = LFDS711_MISC_FLAG_LOWERED;
    bs->backoff_iteration_frequency_counters[0] = 0;
    bs->backoff_iteration_frequency_counters[1] = 0;
    bs->metric = 1;
    bs->total_operations = 0;
    return;
}


struct lfds711_misc_backoff_state *bs
void
function 'lfds711_stack_init_valid_on_current_logical_core' ----------------------------------:
void lfds711_stack_init_valid_on_current_logical_core(struct lfds711_stack_state *ss, void *user_state)
{
    pthread_mutex_init(&lock, 0);
    if (!(ss != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) ss->top) % 128) == 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) (&ss->user_state)) % 128) == 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    pthread_mutex_lock(&lock);
    ss->top[0] = 0;
    ss->top[1] = 0;
    ss->user_state = user_state;
    lfds711_misc_internal_backoff_init(&ss->pop_backoff);
    lfds711_misc_internal_backoff_init(&ss->push_backoff);
    lfds711_misc_force_store();
    pthread_mutex_unlock(&lock);
    return;
}


struct lfds711_stack_state *ss, void *user_state
void
function 'lfds711_stack_pop' ----------------------------------:
int lfds711_stack_pop(struct lfds711_stack_state *ss, struct lfds711_stack_element **se)
{
    char unsigned result;
    lfds711_pal_uint_t backoff_iteration = 0;
    struct lfds711_stack_element *new_top[2];
    struct lfds711_stack_element * volatile original_top[2];
    if (!(ss != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!(se != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    pthread_mutex_lock(&lock);
    pthread_mutex_unlock(&lock);
    original_top[1] = ss->top[1];
    original_top[0] = ss->top[0];
    int i = 0;
    do
    {
        if (original_top[0] == 0)
        {
            *se = 0;
            return 0;
        }

        new_top[1] = original_top[1] + 1;
        new_top[0] = original_top[0]->next;
        pthread_mutex_lock(&lock);
        result = swap_stack_top(&ss->top[0], &original_top[0], &new_top[0]);
        pthread_mutex_unlock(&lock);
        if (result == 0)
        {
            exponential_backoff();
            pthread_mutex_lock(&lock);
            pthread_mutex_unlock(&lock);
        }

        i++;
        if (i > 100)
                break;

    }
    while (result == 0);
    *se = original_top[0];
    return 1;
}


struct lfds711_stack_state *ss, struct lfds711_stack_element **se
int
function 'lfds711_stack_push' ----------------------------------:
void lfds711_stack_push(struct lfds711_stack_state *ss, struct lfds711_stack_element *se)
{
    char unsigned result;
    lfds711_pal_uint_t backoff_iteration = 0;
    struct lfds711_stack_element *new_top[2];
    struct lfds711_stack_element * volatile original_top[2];
    if (!(ss != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!(se != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    new_top[0] = se;
    original_top[1] = ss->top[1];
    original_top[0] = ss->top[0];
    result = 0;
    int i = 0;
    while (result == 0)
    {
        pthread_mutex_lock(&lock);
        se->next = original_top[0];
        pthread_mutex_unlock(&lock);
        new_top[1] = original_top[1] + 1;
        pthread_mutex_lock(&lock);
        result = swap_stack_top(&ss->top[0], &original_top[0], &new_top[0]);
        pthread_mutex_unlock(&lock);
        if (result == 0)
                exponential_backoff();

        i++;
        if (i > 100)
                break;

    }

    return;
}


struct lfds711_stack_state *ss, struct lfds711_stack_element *se
void
function 'lfds711_stack_cleanup' ----------------------------------:
void lfds711_stack_cleanup(struct lfds711_stack_state *ss, void (*element_cleanup_callback)(struct lfds711_stack_state, struct lfds711_stack_element))
{
    struct lfds711_stack_element *se;
    struct lfds711_stack_element *se_temp;
    if (!(ss != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    __atomic_thread_fence(2);
    if (element_cleanup_callback != 0)
    {
        se = ss->top[0];
        while (se != 0)
        {
            se_temp = se;
            se = se->next;
            element_cleanup_callback(ss, se_temp);
        }

    }

    return;
}


struct lfds711_stack_state *ss, void (*element_cleanup_callback)(struct lfds711_stack_state, struct lfds711_stack_element)
void
function 'push' ----------------------------------:
void *push()
{
    struct test_data *td;
    int long long unsigned loop;
    td = malloc((sizeof(struct test_data)) * 3);
    for (loop = 0; loop < 3; loop++)
    {
        if (0)
        {
            pthread_mutex_lock(&lock);
        }

        ;
        td[loop].user_id = loop;
        td[loop].se.value = (void *) ((lfds711_pal_uint_t) (&td[loop]));
        lfds711_stack_push(&ss, &td[loop].se);
        if (0)
        {
            pthread_mutex_unlock(&lock);
        }

        ;
    }

}



void *
function 'pop' ----------------------------------:
void *pop()
{
    int long long unsigned loop;
    struct lfds711_stack_element *se;
    struct test_data *temp_td;
    int res;
    int count = 0;
    for (loop = 0; loop < 3; loop++)
    {
        temp_td = 0;
        if (0)
        {
            pthread_mutex_lock(&lock);
        }

        ;
        res = lfds711_stack_pop(&ss, &se);
        if (0)
        {
            pthread_mutex_unlock(&lock);
        }

        ;
        if (res == 0)
                continue;

        temp_td = (*se).value;
        count++;
        printf("%llu\n", temp_td->user_id);
    }

    assert(count == 3);
}



void *
function 'main' ----------------------------------:
int main()
{
    lfds711_stack_init_valid_on_current_logical_core(&ss, 0);
    pthread_t t1;
    pthread_t t2;
    pthread_mutex_init(&lock, 0);
    pthread_create(&t1, 0, push, 0);
    pthread_create(&t2, 0, pop, 0);
    pthread_join(t1, 0);
    pthread_join(t2, 0);
    return 0;
}



int
Last statement, by function:
function: lfds711_misc_force_store   stmt:     return;

function: __atomic_compare_exchange_n   stmt:     if ((*mptr) == (*eptr))
    {
        *mptr = newval;
        return 1;
    }
    else
    {
        *eptr = newval;
        return 0;
    }


function: __atomic_exchange_n   stmt:     return old;

function: __atomic_thread_fence   stmt:     return old;

function: swap_stack_top   stmt:     if ((*oldtop) == (*top))
    {
        *top = *newtop;
        return 1;
    }
    else
    {
        *oldtop = *top;
        return 0;
    }


function: exponential_backoff   stmt:     for (loop = 0; loop < 10; loop)
            ;


function: lfds711_misc_internal_backoff_init   stmt:     return;

function: lfds711_stack_init_valid_on_current_logical_core   stmt:     return;

function: lfds711_stack_pop   stmt:     return 1;

function: lfds711_stack_push   stmt:     return;

function: lfds711_stack_cleanup   stmt:     return;

function: push   stmt:     for (loop = 0; loop < 3; loop++)
    {
        if (0)
        {
            pthread_mutex_lock(&lock);
        }

        ;
        td[loop].user_id = loop;
        td[loop].se.value = (void *) ((lfds711_pal_uint_t) (&td[loop]));
        lfds711_stack_push(&ss, &td[loop].se);
        if (0)
        {
            pthread_mutex_unlock(&lock);
        }

        ;
    }


function: pop   stmt:     assert(count == 3);

function: main   stmt:     return 0;


All symbols (new symbol table - work in progress):
   (0, 'entropy')  
   (1, 'entropy')  
   (2, 'lfds711_prng_init_valid_on_current_logical_core')  
   (3, 'ps')  
   (4, 'seed')  
   (5, 'lfds711_prng_st_init')  
   (6, 'psts')  
   (7, 'seed')  
   (8, 'lock')  
   (9, 'backoff_iteration_frequency_counters')  
   (10, 'metric')  
   (11, 'total_operations')  
   (12, 'ps')  
   (13, 'min_elements')  
   (14, 'max_elements')  
   (15, 'lfds711_misc_globals')  
   (16, 'lfds711_misc_force_store')  
   (17, 'lfds711_misc_query')  
   (18, 'query_type')  
   (19, 'query_input')  
   (20, 'query_output')  
   (21, 'lfds711_misc_force_store')  
   (22, 'destination')  
   (23, 'left')  
   (24, 'right')  
   (25, 'up')  
   (26, 'value')  
   (27, 'key')  
   (28, 'root')  
   (29, 'key_compare_function')  
   (30, 'new_key')  
   (31, 'existing_key')  
   (32, 'existing_key')  
   (33, 'user_state')  
   (34, 'insert_backoff')  
   (35, 'lfds711_btree_au_init_valid_on_current_logical_core')  
   (36, 'baus')  
   (37, 'key_compare_function')  
   (38, 'new_key')  
   (39, 'existing_key')  
   (40, 'existing_key')  
   (41, 'user_state')  
   (42, 'lfds711_btree_au_cleanup')  
   (43, 'baus')  
   (44, 'element_cleanup_callback')  
   (45, 'baus')  
   (46, 'baue')  
   (47, 'lfds711_btree_au_insert')  
   (48, 'baus')  
   (49, 'baue')  
   (50, 'existing_baue')  
   (51, 'lfds711_btree_au_get_by_key')  
   (52, 'baus')  
   (53, 'key_compare_function')  
   (54, 'new_key')  
   (55, 'existing_key')  
   (56, 'key')  
   (57, 'baue')  
   (58, 'lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position')  
   (59, 'baus')  
   (60, 'baue')  
   (61, 'absolute_position')  
   (62, 'relative_position')  
   (63, 'lfds711_btree_au_get_by_absolute_position')  
   (64, 'baus')  
   (65, 'baue')  
   (66, 'absolute_position')  
   (67, 'lfds711_btree_au_get_by_relative_position')  
   (68, 'baue')  
   (69, 'relative_position')  
   (70, 'lfds711_btree_au_query')  
   (71, 'baus')  
   (72, 'query_type')  
   (73, 'query_input')  
   (74, 'query_output')  
   (75, 'next')  
   (76, 'key')  
   (77, 'value')  
   (78, 'top')  
   (79, 'elimination_array_size_in_elements')  
   (80, 'elimination_array')  
   (81, 'user_state')  
   (82, 'pop_backoff')  
   (83, 'push_backoff')  
   (84, 'lfds711_freelist_init_valid_on_current_logical_core')  
   (85, 'fs')  
   (86, 'elimination_array')  
   (87, 'elimination_array_size_in_elements')  
   (88, 'user_state')  
   (89, 'lfds711_freelist_cleanup')  
   (90, 'fs')  
   (91, 'element_cleanup_callback')  
   (92, 'fs')  
   (93, 'fe')  
   (94, 'lfds711_freelist_push')  
   (95, 'fs')  
   (96, 'fe')  
   (97, 'psts')  
   (98, 'lfds711_freelist_pop')  
   (99, 'fs')  
   (100, 'fe')  
   (101, 'psts')  
   (102, 'lfds711_freelist_query')  
   (103, 'fs')  
   (104, 'query_type')  
   (105, 'query_input')  
   (106, 'query_output')  
   (107, 'baue')  
   (108, 'key')  
   (109, 'value')  
   (110, 'baue')  
   (111, 'baus')  
   (112, 'baus_end')  
   (113, 'existing_key')  
   (114, 'key_compare_function')  
   (115, 'new_key')  
   (116, 'existing_key')  
   (117, 'array_size')  
   (118, 'baus_array')  
   (119, 'element_cleanup_callback')  
   (120, 'has')  
   (121, 'hae')  
   (122, 'key_hash_function')  
   (123, 'key')  
   (124, 'hash')  
   (125, 'user_state')  
   (126, 'lfds711_hash_a_init_valid_on_current_logical_core')  
   (127, 'has')  
   (128, 'baus_array')  
   (129, 'array_size')  
   (130, 'key_compare_function')  
   (131, 'new_key')  
   (132, 'existing_key')  
   (133, 'key_hash_function')  
   (134, 'key')  
   (135, 'hash')  
   (136, 'existing_key')  
   (137, 'user_state')  
   (138, 'lfds711_hash_a_cleanup')  
   (139, 'has')  
   (140, 'element_cleanup_function')  
   (141, 'has')  
   (142, 'hae')  
   (143, 'lfds711_hash_a_insert')  
   (144, 'has')  
   (145, 'hae')  
   (146, 'existing_hae')  
   (147, 'lfds711_hash_a_get_by_key')  
   (148, 'has')  
   (149, 'key_compare_function')  
   (150, 'new_key')  
   (151, 'existing_key')  
   (152, 'key_hash_function')  
   (153, 'key')  
   (154, 'hash')  
   (155, 'key')  
   (156, 'hae')  
   (157, 'lfds711_hash_a_iterate_init')  
   (158, 'has')  
   (159, 'hai')  
   (160, 'lfds711_hash_a_iterate')  
   (161, 'hai')  
   (162, 'hae')  
   (163, 'lfds711_hash_a_query')  
   (164, 'has')  
   (165, 'query_type')  
   (166, 'query_input')  
   (167, 'query_output')  
   (168, 'next')  
   (169, 'value')  
   (170, 'key')  
   (171, 'dummy_element')  
   (172, 'start')  
   (173, 'key_compare_function')  
   (174, 'new_key')  
   (175, 'existing_key')  
   (176, 'existing_key')  
   (177, 'user_state')  
   (178, 'insert_backoff')  
   (179, 'lfds711_list_aso_init_valid_on_current_logical_core')  
   (180, 'lasos')  
   (181, 'key_compare_function')  
   (182, 'new_key')  
   (183, 'existing_key')  
   (184, 'existing_key')  
   (185, 'user_state')  
   (186, 'lfds711_list_aso_cleanup')  
   (187, 'lasos')  
   (188, 'element_cleanup_callback')  
   (189, 'lasos')  
   (190, 'lasoe')  
   (191, 'lfds711_list_aso_insert')  
   (192, 'lasos')  
   (193, 'lasoe')  
   (194, 'existing_lasoe')  
   (195, 'lfds711_list_aso_get_by_key')  
   (196, 'lasos')  
   (197, 'key')  
   (198, 'lasoe')  
   (199, 'lfds711_list_aso_query')  
   (200, 'lasos')  
   (201, 'query_type')  
   (202, 'query_input')  
   (203, 'query_output')  
   (204, 'next')  
   (205, 'value')  
   (206, 'key')  
   (207, 'dummy_element')  
   (208, 'end')  
   (209, 'start')  
   (210, 'user_state')  
   (211, 'after_backoff')  
   (212, 'end_backoff')  
   (213, 'start_backoff')  
   (214, 'lfds711_list_asu_init_valid_on_current_logical_core')  
   (215, 'lasus')  
   (216, 'user_state')  
   (217, 'lfds711_list_asu_cleanup')  
   (218, 'lasus')  
   (219, 'element_cleanup_callback')  
   (220, 'lasus')  
   (221, 'lasue')  
   (222, 'lfds711_list_asu_insert_at_position')  
   (223, 'lasus')  
   (224, 'lasue')  
   (225, 'lasue_predecessor')  
   (226, 'position')  
   (227, 'lfds711_list_asu_insert_at_start')  
   (228, 'lasus')  
   (229, 'lasue')  
   (230, 'lfds711_list_asu_insert_at_end')  
   (231, 'lasus')  
   (232, 'lasue')  
   (233, 'lfds711_list_asu_insert_after_element')  
   (234, 'lasus')  
   (235, 'lasue')  
   (236, 'lasue_predecessor')  
   (237, 'lfds711_list_asu_get_by_key')  
   (238, 'lasus')  
   (239, 'key_compare_function')  
   (240, 'new_key')  
   (241, 'existing_key')  
   (242, 'key')  
   (243, 'lasue')  
   (244, 'lfds711_list_asu_query')  
   (245, 'lasus')  
   (246, 'query_type')  
   (247, 'query_input')  
   (248, 'query_output')  
   (249, 'sequence_number')  
   (250, 'key')  
   (251, 'value')  
   (252, 'number_elements')  
   (253, 'mask')  
   (254, 'read_index')  
   (255, 'write_index')  
   (256, 'element_array')  
   (257, 'user_state')  
   (258, 'dequeue_backoff')  
   (259, 'enqueue_backoff')  
   (260, 'lfds711_queue_bmm_init_valid_on_current_logical_core')  
   (261, 'qbmms')  
   (262, 'element_array')  
   (263, 'number_elements')  
   (264, 'user_state')  
   (265, 'lfds711_queue_bmm_cleanup')  
   (266, 'qbmms')  
   (267, 'element_cleanup_callback')  
   (268, 'qbmms')  
   (269, 'key')  
   (270, 'value')  
   (271, 'lfds711_queue_bmm_enqueue')  
   (272, 'qbmms')  
   (273, 'key')  
   (274, 'value')  
   (275, 'lfds711_queue_bmm_dequeue')  
   (276, 'qbmms')  
   (277, 'key')  
   (278, 'value')  
   (279, 'lfds711_queue_bmm_query')  
   (280, 'qbmms')  
   (281, 'query_type')  
   (282, 'query_input')  
   (283, 'query_output')  
   (284, 'key')  
   (285, 'value')  
   (286, 'number_elements')  
   (287, 'mask')  
   (288, 'read_index')  
   (289, 'write_index')  
   (290, 'element_array')  
   (291, 'user_state')  
   (292, 'lfds711_queue_bss_init_valid_on_current_logical_core')  
   (293, 'qbsss')  
   (294, 'element_array')  
   (295, 'number_elements')  
   (296, 'user_state')  
   (297, 'lfds711_queue_bss_cleanup')  
   (298, 'qbsss')  
   (299, 'element_cleanup_callback')  
   (300, 'qbsss')  
   (301, 'key')  
   (302, 'value')  
   (303, 'lfds711_queue_bss_enqueue')  
   (304, 'qbsss')  
   (305, 'key')  
   (306, 'value')  
   (307, 'lfds711_queue_bss_dequeue')  
   (308, 'qbsss')  
   (309, 'key')  
   (310, 'value')  
   (311, 'lfds711_queue_bss_query')  
   (312, 'qbsss')  
   (313, 'query_type')  
   (314, 'query_input')  
   (315, 'query_output')  
   (316, 'next')  
   (317, 'key')  
   (318, 'value')  
   (319, 'enqueue')  
   (320, 'dequeue')  
   (321, 'aba_counter')  
   (322, 'user_state')  
   (323, 'dequeue_backoff')  
   (324, 'enqueue_backoff')  
   (325, 'lfds711_queue_umm_init_valid_on_current_logical_core')  
   (326, 'qumms')  
   (327, 'qumme_dummy')  
   (328, 'user_state')  
   (329, 'lfds711_queue_umm_cleanup')  
   (330, 'qumms')  
   (331, 'element_cleanup_callback')  
   (332, 'qumms')  
   (333, 'qumme')  
   (334, 'dummy_element_flag')  
   (335, 'lfds711_queue_umm_enqueue')  
   (336, 'qumms')  
   (337, 'qumme')  
   (338, 'lfds711_queue_umm_dequeue')  
   (339, 'qumms')  
   (340, 'qumme')  
   (341, 'lfds711_queue_umm_query')  
   (342, 'qumms')  
   (343, 'query_type')  
   (344, 'query_input')  
   (345, 'query_output')  
   (346, 'fe')  
   (347, 'qumme')  
   (348, 'qumme_use')  
   (349, 'key')  
   (350, 'value')  
   (351, 'fs')  
   (352, 'qumms')  
   (353, 'element_cleanup_callback')  
   (354, 'rs')  
   (355, 'key')  
   (356, 'value')  
   (357, 'unread_flag')  
   (358, 'user_state')  
   (359, 'lfds711_ringbuffer_init_valid_on_current_logical_core')  
   (360, 'rs')  
   (361, 're_array_inc_dummy')  
   (362, 'number_elements_inc_dummy')  
   (363, 'user_state')  
   (364, 'lfds711_ringbuffer_cleanup')  
   (365, 'rs')  
   (366, 'element_cleanup_callback')  
   (367, 'rs')  
   (368, 'key')  
   (369, 'value')  
   (370, 'unread_flag')  
   (371, 'lfds711_ringbuffer_read')  
   (372, 'rs')  
   (373, 'key')  
   (374, 'value')  
   (375, 'lfds711_ringbuffer_write')  
   (376, 'rs')  
   (377, 'key')  
   (378, 'value')  
   (379, 'overwrite_occurred_flag')  
   (380, 'overwritten_key')  
   (381, 'overwritten_value')  
   (382, 'lfds711_ringbuffer_query')  
   (383, 'rs')  
   (384, 'query_type')  
   (385, 'query_input')  
   (386, 'query_output')  
   (387, 'next')  
   (388, 'key')  
   (389, 'value')  
   (390, 'top')  
   (391, 'user_state')  
   (392, 'pop_backoff')  
   (393, 'push_backoff')  
   (394, 'lfds711_stack_init_valid_on_current_logical_core')  
   (395, 'ss')  
   (396, 'user_state')  
   (397, 'lfds711_stack_cleanup')  
   (398, 'ss')  
   (399, 'element_cleanup_callback')  
   (400, 'ss')  
   (401, 'se')  
   (402, 'lfds711_stack_push')  
   (403, 'ss')  
   (404, 'se')  
   (405, 'lfds711_stack_pop')  
   (406, 'ss')  
   (407, 'se')  
   (408, 'lfds711_stack_query')  
   (409, 'ss')  
   (410, 'query_type')  
   (411, 'query_input')  
   (412, 'query_output')  
   (413, 'lfds711_misc_internal_backoff_init')  
   (414, 'bs')  
   (415, '__atomic_compare_exchange_n')  
   (416, 'mptr')  
   (417, 'eptr')  
   (418, 'newval')  
   (419, 'weak_p')  
   (420, 'sm')  
   (421, 'fm')  
   (422, '__atomic_exchange_n')  
   (423, 'previous')  
   (424, 'new')  
   (425, 'memorder')  
   (426, 'old')  
   (427, '__atomic_thread_fence')  
   (428, 'i')  
   (429, 'swap_stack_top')  
   (430, 'top')  
   (431, 'oldtop')  
   (432, 'newtop')  
   (433, 'exponential_backoff')  
   (434, 'loop')  
   (435, 'lock')  
   (436, 'lfds711_misc_internal_backoff_init')  
   (437, 'bs')  
   (438, 'c')  
   (439, 'c')  
   (440, 'lfds711_stack_init_valid_on_current_logical_core')  
   (441, 'ss')  
   (442, 'user_state')  
   (443, 'c')  
   (444, 'c')  
   (445, 'c')  
   (446, 'lfds711_stack_pop')  
   (447, 'ss')  
   (448, 'se')  
   (449, 'result')  
   (450, 'backoff_iteration')  
   (451, 'new_top')  
   (452, 'original_top')  
   (453, 'c')  
   (454, 'c')  
   (455, 'i')  
   (456, 'lfds711_stack_push')  
   (457, 'ss')  
   (458, 'se')  
   (459, 'result')  
   (460, 'backoff_iteration')  
   (461, 'new_top')  
   (462, 'original_top')  
   (463, 'c')  
   (464, 'c')  
   (465, 'i')  
   (466, 'lfds711_stack_cleanup')  
   (467, 'ss')  
   (468, 'element_cleanup_callback')  
   (469, 'ss')  
   (470, 'se')  
   (471, 'se')  
   (472, 'se_temp')  
   (473, 'c')  
   (474, 'ss')  
   (475, 'lock')  
   (476, 'se')  
   (477, 'user_id')  
   (478, 'push')  
   (479, 'td')  
   (480, 'loop')  
   (481, 'pop')  
   (482, 'loop')  
   (483, 'se')  
   (484, 'temp_td')  
   (485, 'res')  
   (486, 'count')  
   (487, 'main')  
   (488, 't1')  
   (489, 't2')  
