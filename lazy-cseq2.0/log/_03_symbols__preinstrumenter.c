list of functions:
   check(param: ss)  call count 1
   lfds711_misc_force_store(param: )  call count 1
   exponential_backoff(param: )  call count 2
   __VERIFIER_atomic_swap_stack_top(param: top, oldtop, newtop)  call count 2
   lfds711_misc_internal_backoff_init(param: bs)  call count 2
   lfds711_stack_init_valid_on_current_logical_core(param: ss, user_state)  call count 1
   lfds711_stack_pop(param: ss, se)  call count 4
   lfds711_stack_push(param: ss, se)  call count 4
   __VERIFIER_atomic_compare_and_exchange(param: mptr, eptr, newval, weak_p, sm, fm)  call count 1
   __atomic_compare_exchange_n(param: mptr, eptr, newval, weak_p, sm, fm)  call count 0
   __VERIFIER_atomic_exchange(param: previous, new, memorder)  call count 1
   __atomic_exchange_n(param: previous, new, memorder)  call count 0
   __atomic_thread_fence(param: i)  call count 0
   init(param: )  call count 1
   insert(param: s, id)  call count 3
   delete(param: s)  call count 1
   contains(param: s, id)  call count 1
   get_size(param: s)  call count 0
   is_empty(param: s)  call count 0
   thread1(param: __cs_unused)  call count 0
   thread2(param: __cs_unused)  call count 0
   main(param: )  call count 0

list of thread functions:
   thread1  call count 1
   thread2  call count 1

parameters for main():
   (no params)

Variables:
   (global)
      id6  'ps'  
         type 'struct lfds711_prng_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id7  'seed'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id8  'psts'  
         type 'struct lfds711_prng_st_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id9  'None'  
         type 'enum lfds711_stack_query {LFDS711_STACK_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_STACK_QUERY_SINGLETHREADED_VALIDATE}'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id17  'lfds711_misc_globals'  
         type 'struct lfds711_misc_globals'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id18  'query_type'  
         type 'enum lfds711_stack_query'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id19  'query_input'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id20  'query_output'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id33  'baus'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id34  'key_compare_function'  
         type 'int (*)(const void, const void)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id35  'existing_key'  
         type 'const void'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id36  'user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id37  'element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id38  'baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id39  'existing_baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id40  'key'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id41  'absolute_position'  
         type 'enum lfds711_btree_au_absolute_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id42  'relative_position'  
         type 'enum lfds711_btree_au_relative_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id52  'fs'  
         type 'struct lfds711_freelist_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id53  'elimination_array'  
         type 'struct lfds711_freelist_element * volatile (*)'  kind 'p'  arity '1'  
         size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id54  'elimination_array_size_in_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id55  'fe'  
         type 'struct lfds711_freelist_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id74  'has'  
         type 'struct lfds711_hash_a_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id75  'baus_array'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id76  'array_size'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id77  'key_hash_function'  
         type 'void (*)(const void, lfds711_pal_uint_t)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id78  'element_cleanup_function'  
         type 'void (*)(struct lfds711_hash_a_state, struct lfds711_hash_a_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id79  'hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id80  'existing_hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id81  'hai'  
         type 'struct lfds711_hash_a_iterate *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id92  'lasos'  
         type 'struct lfds711_list_aso_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id93  'lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id94  'existing_lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id105  'lasus'  
         type 'struct lfds711_list_asu_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id106  'lasue'  
         type 'struct lfds711_list_asu_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id107  'lasue_predecessor'  
         type 'struct lfds711_list_asu_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id108  'position'  
         type 'enum lfds711_list_asu_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id120  'qbmms'  
         type 'struct lfds711_queue_bmm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id121  'element_array'  
         type 'struct lfds711_queue_bss_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id122  'number_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id123  'value'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id132  'qbsss'  
         type 'struct lfds711_queue_bss_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id142  'qumms'  
         type 'struct lfds711_queue_umm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id143  'qumme_dummy'  
         type 'struct lfds711_queue_umm_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id144  'qumme'  
         type 'struct lfds711_queue_umm_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id158  'rs'  
         type 'struct lfds711_ringbuffer_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id159  're_array_inc_dummy'  
         type 'struct lfds711_ringbuffer_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id160  'number_elements_inc_dummy'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id161  'overwrite_occurred_flag'  
         type 'enum lfds711_misc_flag *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id162  'overwritten_key'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id163  'overwritten_value'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id171  'ss'  
         type 'void *'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[932, 943, 957, 968, 978, 985]'  
      id172  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id173  'bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id174  'library_lock'  
         type 'pthread_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[628, 653, 660, 687, 688, 702, 704, 708, 709, 754, 756, 758, 760]'  
         deref '[]'  
         occurs '[628, 653, 660, 687, 688, 702, 704, 708, 709, 754, 756, 758, 760]'  
      id222  'mystack'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[816, 817, 832]'  
         deref '[]'  
         occurs '[816, 817, 832]'  
      id253  'ATOMIC_OPERATION'  
         type 'int'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[927, 933, 938, 944, 952, 958, 963, 969]'  
      id254  'lock'  
         type 'pthread_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[929, 935, 940, 946, 954, 960, 965, 971, 977]'  
         deref '[]'  
         occurs '[929, 935, 940, 946, 954, 960, 965, 971, 977]'  
   check
      id0  'ss'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[160, 162]'  
      id1  'size'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[158, 163]'  
      id2  'c0'  
         type 'long unsigned int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[160, 163]'  
      id3  'c2'  
         type 'long unsigned int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[162, 163]'  
   lfds711_misc_force_store
      id21  'destination'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[211]'  
         deref '[]'  
         occurs '[211]'  
   exponential_backoff
      id175  'loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[581, 581, 581]'  
   __VERIFIER_atomic_swap_stack_top
      id176  'top'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[589, 591, 596]'  
         occurs '[589, 591, 596]'  
      id177  'oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[589, 596]'  
         occurs '[589, 596]'  
      id178  'newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[591]'  
         occurs '[591]'  
   lfds711_misc_internal_backoff_init
      id179  'bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[610, 618, 619, 620, 621, 622]'  
         occurs '[602, 610, 618, 619, 620, 621, 622]'  
      id180  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[606, 614]'  
         occurs '[605, 606, 613, 614]'  
   lfds711_stack_init_valid_on_current_logical_core
      id181  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[637, 645, 654, 655, 656, 657, 658]'  
         occurs '[629, 637, 645, 654, 655, 656, 657, 658]'  
      id182  'user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[656]'  
      id183  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[633, 641, 649]'  
         occurs '[632, 633, 640, 641, 648, 649]'  
   lfds711_stack_pop
      id184  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[689, 690, 703]'  
         occurs '[671, 689, 690, 703]'  
      id185  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[697, 719]'  
         occurs '[679, 697, 719]'  
      id186  'result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[703, 705, 718, 720]'  
      id187  'backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[668]'  
      id188  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[703]'  
         deref '[]'  
         occurs '[700, 701, 703]'  
      id189  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[703]'  
         deref '[701]'  
         occurs '[689, 690, 695, 700, 701, 703, 719]'  
      id190  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[675, 683]'  
         occurs '[674, 675, 682, 683]'  
      id191  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[692, 711, 712]'  
   lfds711_stack_push
      id192  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[747, 748, 759]'  
         occurs '[730, 747, 748, 759]'  
      id193  'se'  
         type 'struct lfds711_stack_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[755]'  
         occurs '[738, 746, 755]'  
      id194  'result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[749, 752, 759, 761]'  
      id195  'backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[727]'  
      id196  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[759]'  
         deref '[]'  
         occurs '[746, 757, 759]'  
      id197  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[759]'  
         deref '[]'  
         occurs '[747, 748, 755, 757, 759]'  
      id198  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[734, 742]'  
         occurs '[733, 734, 741, 742]'  
      id199  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[751, 765, 766]'  
   __VERIFIER_atomic_compare_and_exchange
      id200  'mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[775, 777]'  
         occurs '[775, 777]'  
      id201  'eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[775, 782]'  
         occurs '[775, 782]'  
      id202  'newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[777, 782]'  
      id203  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id204  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id205  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   __atomic_compare_exchange_n
      id206  'mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[789]'  
      id207  'eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[789]'  
      id208  'newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[789]'  
      id209  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[789]'  
      id210  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[789]'  
      id211  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[789]'  
      id212  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[789, 790]'  
   __VERIFIER_atomic_exchange
      id213  'previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[795, 796]'  
         occurs '[795, 796]'  
      id214  'new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[796]'  
      id215  'memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id216  'old'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[795, 797]'  
   __atomic_exchange_n
      id217  'previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[802]'  
      id218  'new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[802]'  
      id219  'memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[802]'  
      id220  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[802, 803]'  
   __atomic_thread_fence
      id221  'i'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   init
   insert
      id225  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[825]'  
      id226  'id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[823]'  
      id227  'td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[823, 824, 825]'  
         occurs '[822, 823, 824, 824, 825]'  
   delete
      id228  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id229  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[832]'  
         deref '[835]'  
         occurs '[832, 835]'  
      id230  'temp_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id231  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[832, 833, 837]'  
   contains
      id232  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[856, 873]'  
      id233  'id'  
         type 'unsigned long long int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[863]'  
      id234  'max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[842, 852]'  
      id235  'actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[844, 861, 862, 862, 863, 867, 867, 871]'  
      id236  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[846, 854, 856, 857]'  
      id237  'found'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[848, 854, 865, 876]'  
      id238  'dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[850]'  
      id239  'datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[862, 863, 873]'  
         occurs '[852, 861, 862, 863, 873]'  
      id240  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[856]'  
         deref '[861]'  
         occurs '[856, 861]'  
      id241  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[870, 871, 873, 874]'  
   get_size
      id242  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[893, 905]'  
      id243  'max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[881, 889]'  
      id244  'actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[883, 894, 899, 899, 903, 908]'  
      id245  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[885, 891, 893, 895]'  
      id246  'dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[887]'  
      id247  'datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[905]'  
         occurs '[889, 894, 905]'  
      id248  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[893]'  
         deref '[894]'  
         occurs '[893, 894]'  
      id249  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[902, 903, 905, 906]'  
   is_empty
      id250  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[914, 917]'  
      id251  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[914]'  
         deref '[]'  
         occurs '[914, 917]'  
      id252  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[914, 915]'  
   thread1
      id255  '__cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   thread2
      id256  '__cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   main
      id257  't1'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[981]'  
         deref '[]'  
         occurs '[981, 983]'  
      id258  't2'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[982]'  
         deref '[]'  
         occurs '[982, 984]'  

Fields:
   lfds711_prng_state
      id4  'entropy'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_prng_st_state
      id5  'entropy'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_backoff_state
      id10  'lock'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id11  'backoff_iteration_frequency_counters'  type 'lfds711_pal_uint_t'  kind 'f'  arity '1'  size '[2]'  
      id12  'metric'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id13  'total_operations'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_globals
      id14  'ps'  type 'struct lfds711_prng_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_validation_info
      id15  'min_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id16  'max_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_btree_au_element
      id22  'left'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id23  'right'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id24  'up'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id25  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id26  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_btree_au_state
      id27  'root'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id28  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id29  'existing_key'  type 'enum lfds711_btree_au_existing_key'  kind 'f'  arity '0'  size '[]'  
      id30  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id31  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id32  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_element
      id43  'next'  type 'struct lfds711_freelist_element *'  kind 'f'  arity '0'  size '[]'  
      id44  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id45  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_state
      id46  'top'  type 'struct lfds711_freelist_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id47  'elimination_array_size_in_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id48  'elimination_array'  type 'struct lfds711_freelist_element * volatile (*)'  kind 'f'  arity '1'  size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
      id49  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id50  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id51  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_element
      id56  'baue'  type 'struct lfds711_btree_au_element'  kind 'f'  arity '0'  size '[]'  
      id57  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id58  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_iterate
      id59  'baue'  type 'struct lfds711_btree_au_element *'  kind 'f'  arity '0'  size '[]'  
      id60  'baus'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id61  'baus_end'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_state
      id62  'existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id63  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id64  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id65  'array_size'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id66  'baus_array'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id67  'has'  type 'struct lfds711_hash_a_state *'  kind 'f'  arity '0'  size '[]'  
      id68  'hae'  type 'struct lfds711_hash_a_element *'  kind 'f'  arity '0'  size '[]'  
      id69  'element_cleanup_callback'  type 'void (*)(struct lfds711_hash_a_state *has, struct lfds711_hash_a_element *hae)'  kind 'f'  arity '0'  size '[]'  
      id70  'key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id71  'hash'  type 'lfds711_pal_uint_t *'  kind 'f'  arity '0'  size '[]'  
      id72  'key_hash_function'  type 'void (*)(const void *key, lfds711_pal_uint_t *hash)'  kind 'f'  arity '0'  size '[]'  
      id73  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_element
      id82  'next'  type 'struct lfds711_list_aso_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id83  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id84  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_state
      id85  'dummy_element'  type 'struct lfds711_list_aso_element'  kind 'f'  arity '0'  size '[]'  
      id86  'start'  type 'struct lfds711_list_aso_element *'  kind 'f'  arity '0'  size '[]'  
      id87  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id88  'existing_key'  type 'enum lfds711_list_aso_existing_key'  kind 'f'  arity '0'  size '[]'  
      id89  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id90  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id91  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_element
      id95  'next'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id96  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id97  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_state
      id98  'dummy_element'  type 'struct lfds711_list_asu_element'  kind 'f'  arity '0'  size '[]'  
      id99  'end'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id100  'start'  type 'struct lfds711_list_asu_element *'  kind 'f'  arity '0'  size '[]'  
      id101  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id102  'after_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id103  'end_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id104  'start_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_element
      id109  'sequence_number'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id110  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id111  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_state
      id112  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id113  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id114  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id115  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id116  'element_array'  type 'struct lfds711_queue_bmm_element *'  kind 'f'  arity '0'  size '[]'  
      id117  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id118  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id119  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_element
      id124  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id125  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_state
      id126  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id127  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id128  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id129  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id130  'element_array'  type 'struct lfds711_queue_bss_element *'  kind 'f'  arity '0'  size '[]'  
      id131  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_element
      id133  'next'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id134  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id135  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_state
      id136  'enqueue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id137  'dequeue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id138  'aba_counter'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id139  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id140  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id141  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_element
      id145  'fe'  type 'struct lfds711_freelist_element'  kind 'f'  arity '0'  size '[]'  
      id146  'qumme'  type 'struct lfds711_queue_umm_element'  kind 'f'  arity '0'  size '[]'  
      id147  'qumme_use'  type 'struct lfds711_queue_umm_element *'  kind 'f'  arity '0'  size '[]'  
      id148  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id149  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_state
      id150  'fs'  type 'struct lfds711_freelist_state'  kind 'f'  arity '0'  size '[]'  
      id151  'qumms'  type 'struct lfds711_queue_umm_state'  kind 'f'  arity '0'  size '[]'  
      id152  'rs'  type 'struct lfds711_ringbuffer_state *'  kind 'f'  arity '0'  size '[]'  
      id153  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id154  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id155  'unread_flag'  type 'enum lfds711_misc_flag'  kind 'f'  arity '0'  size '[]'  
      id156  'element_cleanup_callback'  type 'void (*)(struct lfds711_ringbuffer_state *rs, void *key, void *value, enum lfds711_misc_flag unread_flag)'  kind 'f'  arity '0'  size '[]'  
      id157  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_element
      id164  'next'  type 'struct lfds711_stack_element *'  kind 'f'  arity '0'  size '[]'  
      id165  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id166  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_state
      id167  'top'  type 'struct lfds711_stack_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id168  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id169  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id170  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   test_data
      id223  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id224  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  

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
       var 'ss'   type 'void *'   kind 'g'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
       var 'bs'   type 'struct lfds711_misc_backoff_state *'   kind 'p'   arity '0'   size '[]'   
   check
       var 'ss'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   lfds711_misc_force_store
   exponential_backoff
   __VERIFIER_atomic_swap_stack_top
       var 'top'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var 'oldtop'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var 'newtop'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
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
   __VERIFIER_atomic_compare_and_exchange
       var 'mptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_compare_exchange_n
       var 'mptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __VERIFIER_atomic_exchange
       var 'previous'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_exchange_n
       var 'previous'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_thread_fence
   init
   insert
       var 's'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'td'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
   delete
       var 's'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var 'temp_td'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
   contains
       var 's'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'datas'   type 'struct test_data **'   kind 'l'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
   get_size
       var 's'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'datas'   type 'struct test_data **'   kind 'l'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
   is_empty
       var 's'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
   thread1
       var '__cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   thread2
       var '__cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   main

Function blocks:
function 'check' ----------------------------------:
void check(void *ss)
{
    unsigned long int size;
    size = 14;
    long unsigned int c0;
    c0 = contains(ss, 0);
    long unsigned int c2;
    c2 = contains(ss, 2);
    assert(((size == 2) && c0) && c2);
}


void *ss
void
function 'lfds711_misc_force_store' ----------------------------------:
void lfds711_misc_force_store()
{
    lfds711_pal_uint_t destination;
    {
        (void) __atomic_exchange_n(&destination, 0, 0);
    }
    ;
    return;
}



void
function 'exponential_backoff' ----------------------------------:
void exponential_backoff()
{
    int loop;
    for (loop = 0; loop < 3; loop++)
    {
        ;
    }

}



void
function '__VERIFIER_atomic_swap_stack_top' ----------------------------------:
int __VERIFIER_atomic_swap_stack_top(struct lfds711_stack_element * volatile *top, struct lfds711_stack_element * volatile *oldtop, struct lfds711_stack_element **newtop)
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
function 'lfds711_misc_internal_backoff_init' ----------------------------------:
void lfds711_misc_internal_backoff_init(struct lfds711_misc_backoff_state *bs)
{
    if (!(bs != 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) (&(*bs).lock)) % 128) == 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    (*bs).lock = LFDS711_MISC_FLAG_LOWERED;
    (*bs).backoff_iteration_frequency_counters[0] = 0;
    (*bs).backoff_iteration_frequency_counters[1] = 0;
    (*bs).metric = 1;
    (*bs).total_operations = 0;
    return;
}


struct lfds711_misc_backoff_state *bs
void
function 'lfds711_stack_init_valid_on_current_logical_core' ----------------------------------:
void lfds711_stack_init_valid_on_current_logical_core(struct lfds711_stack_state *ss, void *user_state)
{
    pthread_mutex_init(&library_lock, 0);
    if (!(ss != 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) (*ss).top) % 128) == 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) (&(*ss).user_state)) % 128) == 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    pthread_mutex_lock(&library_lock);
    (*ss).top[0] = 0;
    (*ss).top[1] = 0;
    (*ss).user_state = user_state;
    lfds711_misc_internal_backoff_init(&(*ss).pop_backoff);
    lfds711_misc_internal_backoff_init(&(*ss).push_backoff);
    lfds711_misc_force_store();
    pthread_mutex_unlock(&library_lock);
    return;
}


struct lfds711_stack_state *ss, void *user_state
void
function 'lfds711_stack_pop' ----------------------------------:
int lfds711_stack_pop(struct lfds711_stack_state *ss, struct lfds711_stack_element **se)
{
    char unsigned result;
    lfds711_pal_uint_t backoff_iteration;
    backoff_iteration = 0;
    struct lfds711_stack_element *new_top[2];
    struct lfds711_stack_element * volatile original_top[2];
    if (!(ss != 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    if (!(se != 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    pthread_mutex_lock(&library_lock);
    pthread_mutex_unlock(&library_lock);
    original_top[1] = (*ss).top[1];
    original_top[0] = (*ss).top[0];
    int i;
    i = 0;
    do
    {
        if (original_top[0] == 0)
        {
            *se = 0;
            return 0;
        }

        new_top[1] = original_top[1] + 1;
        new_top[0] = (*original_top[0]).next;
        pthread_mutex_lock(&library_lock);
        result = __VERIFIER_atomic_swap_stack_top(&(*ss).top[0], &original_top[0], &new_top[0]);
        pthread_mutex_unlock(&library_lock);
        if (result == 0)
        {
            exponential_backoff();
            pthread_mutex_lock(&library_lock);
            pthread_mutex_unlock(&library_lock);
        }

        i++;
        if (i > 1000)
        {
            break;
        }

    }
    while (result == 0);
    *se = original_top[0];
    return result;
}


struct lfds711_stack_state *ss, struct lfds711_stack_element **se
int
function 'lfds711_stack_push' ----------------------------------:
void lfds711_stack_push(struct lfds711_stack_state *ss, struct lfds711_stack_element *se)
{
    char unsigned result;
    lfds711_pal_uint_t backoff_iteration;
    backoff_iteration = 0;
    struct lfds711_stack_element *new_top[2];
    struct lfds711_stack_element * volatile original_top[2];
    if (!(ss != 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    if (!(se != 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    new_top[0] = se;
    original_top[1] = (*ss).top[1];
    original_top[0] = (*ss).top[0];
    result = 0;
    int i;
    i = 0;
    while (result == 0)
    {
        pthread_mutex_lock(&library_lock);
        (*se).next = original_top[0];
        pthread_mutex_unlock(&library_lock);
        new_top[1] = original_top[1] + 1;
        pthread_mutex_lock(&library_lock);
        result = __VERIFIER_atomic_swap_stack_top(&(*ss).top[0], &original_top[0], &new_top[0]);
        pthread_mutex_unlock(&library_lock);
        if (result == 0)
        {
            exponential_backoff();
        }

        i++;
        if (i > 1000)
        {
            break;
        }

    }

    return;
}


struct lfds711_stack_state *ss, struct lfds711_stack_element *se
void
function '__VERIFIER_atomic_compare_and_exchange' ----------------------------------:
_Bool __VERIFIER_atomic_compare_and_exchange(int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm)
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


int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm
_Bool
function '__atomic_compare_exchange_n' ----------------------------------:
_Bool __atomic_compare_exchange_n(int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm)
{
    int res;
    res = __VERIFIER_atomic_compare_and_exchange(mptr, eptr, newval, weak_p, sm, fm);
    return res;
}


int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm
_Bool
function '__VERIFIER_atomic_exchange' ----------------------------------:
unsigned long __VERIFIER_atomic_exchange(int long long unsigned *previous, int long long unsigned new, int memorder)
{
    unsigned long int old;
    old = *previous;
    *previous = new;
    return old;
}


int long long unsigned *previous, int long long unsigned new, int memorder
unsigned long
function '__atomic_exchange_n' ----------------------------------:
unsigned long __atomic_exchange_n(int long long unsigned *previous, int long long unsigned new, int memorder)
{
    int res;
    res = __VERIFIER_atomic_exchange(previous, new, memorder);
    return res;
}


int long long unsigned *previous, int long long unsigned new, int memorder
unsigned long
function '__atomic_thread_fence' ----------------------------------:
void __atomic_thread_fence(int i)
{
}


int i
void
function 'init' ----------------------------------:
void *init()
{
    lfds711_stack_init_valid_on_current_logical_core(&mystack, 0);
    return (void *) (&mystack);
}



void *
function 'insert' ----------------------------------:
void insert(struct lfds711_stack_state *s, int long long unsigned id)
{
    struct test_data *td;
    td = malloc(sizeof(struct test_data));
    (*td).user_id = id;
    (*td).se.value = (void *) ((lfds711_pal_uint_t) td);
    lfds711_stack_push((struct lfds711_stack_state *) s, &(*td).se);
}


struct lfds711_stack_state *s, int long long unsigned id
void
function 'delete' ----------------------------------:
int delete(struct lfds711_stack_state *s)
{
    struct lfds711_stack_element *se;
    struct test_data *temp_td;
    int res;
    res = lfds711_stack_pop(&mystack, &se);
    if (res != 0)
    {
        free((*se).value);
    }

    return res;
}


struct lfds711_stack_state *s
int
function 'contains' ----------------------------------:
int contains(struct lfds711_stack_state *s, unsigned long long int id)
{
    int max_size;
    max_size = 2;
    int actual_size;
    actual_size = 0;
    int res;
    res = 1;
    int found;
    found = 0;
    int dimension;
    dimension = 2;
    struct test_data **datas;
    datas = malloc((sizeof(struct test_data *)) * max_size);
    struct lfds711_stack_element *se;
    while ((found == 0) && (res != 0))
    {
        res = lfds711_stack_pop(s, &se);
        if (res == 0)
        {
            break;
        }

        datas[actual_size] = (*se).value;
        printf("%d -- %d\n", (*datas[actual_size]).user_id, actual_size);
        if ((*datas[actual_size]).user_id == id)
        {
            found = 1;
        }

        actual_size = actual_size + 1;
    }

    int i;
    i = 0;
    while (i < actual_size)
    {
        lfds711_stack_push(s, &(*datas[i]).se);
        i++;
    }

    return found;
}


struct lfds711_stack_state *s, unsigned long long int id
int
function 'get_size' ----------------------------------:
int get_size(struct lfds711_stack_state *s)
{
    int max_size;
    max_size = 2;
    int actual_size;
    actual_size = 0;
    int res;
    res = 1;
    int dimension;
    dimension = 2;
    struct test_data **datas;
    datas = malloc((sizeof(struct test_data *)) * max_size);
    struct lfds711_stack_element *se;
    while (res != 0)
    {
        res = lfds711_stack_pop(s, &se);
        datas[actual_size] = (*se).value;
        if (res == 0)
        {
            break;
        }

        actual_size = actual_size + 1;
    }

    int i;
    i = 0;
    while (i < actual_size)
    {
        lfds711_stack_push(s, &(*datas[i]).se);
        i++;
    }

    return actual_size;
}


struct lfds711_stack_state *s
int
function 'is_empty' ----------------------------------:
int is_empty(struct lfds711_stack_state *s)
{
    struct lfds711_stack_element *se;
    int res;
    res = lfds711_stack_pop(s, &se);
    if (res != 0)
    {
        lfds711_stack_push(s, se);
        return 0;
    }

    return 1;
}


struct lfds711_stack_state *s
int
function 'thread1' ----------------------------------:
void *thread1(void *__cs_unused)
{
    if (ATOMIC_OPERATION)
    {
        pthread_mutex_lock(&lock);
    }

    ;
    insert(ss, 0);
    if (ATOMIC_OPERATION)
    {
        pthread_mutex_unlock(&lock);
    }

    ;
    if (ATOMIC_OPERATION)
    {
        pthread_mutex_lock(&lock);
    }

    ;
    insert(ss, 1);
    if (ATOMIC_OPERATION)
    {
        pthread_mutex_unlock(&lock);
    }

    ;
}


void *__cs_unused
void *
function 'thread2' ----------------------------------:
void *thread2(void *__cs_unused)
{
    if (ATOMIC_OPERATION)
    {
        pthread_mutex_lock(&lock);
    }

    ;
    delete(ss);
    if (ATOMIC_OPERATION)
    {
        pthread_mutex_unlock(&lock);
    }

    ;
    if (ATOMIC_OPERATION)
    {
        pthread_mutex_lock(&lock);
    }

    ;
    insert(ss, 2);
    if (ATOMIC_OPERATION)
    {
        pthread_mutex_unlock(&lock);
    }

    ;
}


void *__cs_unused
void *
function 'main' ----------------------------------:
int main()
{
    pthread_mutex_init(&lock, 0);
    ss = init();
    pthread_t t1;
    pthread_t t2;
    pthread_create(&t1, 0, thread1, 0);
    pthread_create(&t2, 0, thread2, 0);
    pthread_join(t1, 0);
    pthread_join(t2, 0);
    check(ss);
    return 0;
}



int
Last statement, by function:
function: check   stmt:     assert(((size == 2) && c0) && c2);

function: lfds711_misc_force_store   stmt:     return;

function: exponential_backoff   stmt:     for (loop = 0; loop < 3; loop++)
    {
        ;
    }


function: __VERIFIER_atomic_swap_stack_top   stmt:     if ((*oldtop) == (*top))
    {
        *top = *newtop;
        return 1;
    }
    else
    {
        *oldtop = *top;
        return 0;
    }


function: lfds711_misc_internal_backoff_init   stmt:     return;

function: lfds711_stack_init_valid_on_current_logical_core   stmt:     return;

function: lfds711_stack_pop   stmt:     return result;

function: lfds711_stack_push   stmt:     return;

function: __VERIFIER_atomic_compare_and_exchange   stmt:     if ((*mptr) == (*eptr))
    {
        *mptr = newval;
        return 1;
    }
    else
    {
        *eptr = newval;
        return 0;
    }


function: __atomic_compare_exchange_n   stmt:     return res;

function: __VERIFIER_atomic_exchange   stmt:     return old;

function: __atomic_exchange_n   stmt:     return res;

function: __atomic_thread_fence   stmt:     return res;

function: init   stmt:     return (void *) (&mystack);

function: insert   stmt:     lfds711_stack_push((struct lfds711_stack_state *) s, &(*td).se);

function: delete   stmt:     return res;

function: contains   stmt:     return found;

function: get_size   stmt:     return actual_size;

function: is_empty   stmt:     return 1;

function: thread1   stmt:     ;

function: thread2   stmt:     ;

function: main   stmt:     return 0;


All symbols (new symbol table - work in progress):
   (0, 'check')  
   (1, 'ss')  
   (2, 'size')  
   (3, 'c0')  
   (4, 'c2')  
   (5, 'entropy')  
   (6, 'entropy')  
   (7, 'lfds711_prng_init_valid_on_current_logical_core')  
   (8, 'ps')  
   (9, 'seed')  
   (10, 'lfds711_prng_st_init')  
   (11, 'psts')  
   (12, 'seed')  
   (13, 'lock')  
   (14, 'backoff_iteration_frequency_counters')  
   (15, 'metric')  
   (16, 'total_operations')  
   (17, 'ps')  
   (18, 'min_elements')  
   (19, 'max_elements')  
   (20, 'lfds711_misc_globals')  
   (21, 'lfds711_misc_force_store')  
   (22, 'lfds711_misc_query')  
   (23, 'query_type')  
   (24, 'query_input')  
   (25, 'query_output')  
   (26, 'lfds711_misc_force_store')  
   (27, 'destination')  
   (28, 'left')  
   (29, 'right')  
   (30, 'up')  
   (31, 'value')  
   (32, 'key')  
   (33, 'root')  
   (34, 'key_compare_function')  
   (35, 'new_key')  
   (36, 'existing_key')  
   (37, 'existing_key')  
   (38, 'user_state')  
   (39, 'insert_backoff')  
   (40, 'lfds711_btree_au_init_valid_on_current_logical_core')  
   (41, 'baus')  
   (42, 'key_compare_function')  
   (43, 'new_key')  
   (44, 'existing_key')  
   (45, 'existing_key')  
   (46, 'user_state')  
   (47, 'lfds711_btree_au_cleanup')  
   (48, 'baus')  
   (49, 'element_cleanup_callback')  
   (50, 'baus')  
   (51, 'baue')  
   (52, 'lfds711_btree_au_insert')  
   (53, 'baus')  
   (54, 'baue')  
   (55, 'existing_baue')  
   (56, 'lfds711_btree_au_get_by_key')  
   (57, 'baus')  
   (58, 'key_compare_function')  
   (59, 'new_key')  
   (60, 'existing_key')  
   (61, 'key')  
   (62, 'baue')  
   (63, 'lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position')  
   (64, 'baus')  
   (65, 'baue')  
   (66, 'absolute_position')  
   (67, 'relative_position')  
   (68, 'lfds711_btree_au_get_by_absolute_position')  
   (69, 'baus')  
   (70, 'baue')  
   (71, 'absolute_position')  
   (72, 'lfds711_btree_au_get_by_relative_position')  
   (73, 'baue')  
   (74, 'relative_position')  
   (75, 'lfds711_btree_au_query')  
   (76, 'baus')  
   (77, 'query_type')  
   (78, 'query_input')  
   (79, 'query_output')  
   (80, 'next')  
   (81, 'key')  
   (82, 'value')  
   (83, 'top')  
   (84, 'elimination_array_size_in_elements')  
   (85, 'elimination_array')  
   (86, 'user_state')  
   (87, 'pop_backoff')  
   (88, 'push_backoff')  
   (89, 'lfds711_freelist_init_valid_on_current_logical_core')  
   (90, 'fs')  
   (91, 'elimination_array')  
   (92, 'elimination_array_size_in_elements')  
   (93, 'user_state')  
   (94, 'lfds711_freelist_cleanup')  
   (95, 'fs')  
   (96, 'element_cleanup_callback')  
   (97, 'fs')  
   (98, 'fe')  
   (99, 'lfds711_freelist_push')  
   (100, 'fs')  
   (101, 'fe')  
   (102, 'psts')  
   (103, 'lfds711_freelist_pop')  
   (104, 'fs')  
   (105, 'fe')  
   (106, 'psts')  
   (107, 'lfds711_freelist_query')  
   (108, 'fs')  
   (109, 'query_type')  
   (110, 'query_input')  
   (111, 'query_output')  
   (112, 'baue')  
   (113, 'key')  
   (114, 'value')  
   (115, 'baue')  
   (116, 'baus')  
   (117, 'baus_end')  
   (118, 'existing_key')  
   (119, 'key_compare_function')  
   (120, 'new_key')  
   (121, 'existing_key')  
   (122, 'array_size')  
   (123, 'baus_array')  
   (124, 'element_cleanup_callback')  
   (125, 'has')  
   (126, 'hae')  
   (127, 'key_hash_function')  
   (128, 'key')  
   (129, 'hash')  
   (130, 'user_state')  
   (131, 'lfds711_hash_a_init_valid_on_current_logical_core')  
   (132, 'has')  
   (133, 'baus_array')  
   (134, 'array_size')  
   (135, 'key_compare_function')  
   (136, 'new_key')  
   (137, 'existing_key')  
   (138, 'key_hash_function')  
   (139, 'key')  
   (140, 'hash')  
   (141, 'existing_key')  
   (142, 'user_state')  
   (143, 'lfds711_hash_a_cleanup')  
   (144, 'has')  
   (145, 'element_cleanup_function')  
   (146, 'has')  
   (147, 'hae')  
   (148, 'lfds711_hash_a_insert')  
   (149, 'has')  
   (150, 'hae')  
   (151, 'existing_hae')  
   (152, 'lfds711_hash_a_get_by_key')  
   (153, 'has')  
   (154, 'key_compare_function')  
   (155, 'new_key')  
   (156, 'existing_key')  
   (157, 'key_hash_function')  
   (158, 'key')  
   (159, 'hash')  
   (160, 'key')  
   (161, 'hae')  
   (162, 'lfds711_hash_a_iterate_init')  
   (163, 'has')  
   (164, 'hai')  
   (165, 'lfds711_hash_a_iterate')  
   (166, 'hai')  
   (167, 'hae')  
   (168, 'lfds711_hash_a_query')  
   (169, 'has')  
   (170, 'query_type')  
   (171, 'query_input')  
   (172, 'query_output')  
   (173, 'next')  
   (174, 'value')  
   (175, 'key')  
   (176, 'dummy_element')  
   (177, 'start')  
   (178, 'key_compare_function')  
   (179, 'new_key')  
   (180, 'existing_key')  
   (181, 'existing_key')  
   (182, 'user_state')  
   (183, 'insert_backoff')  
   (184, 'lfds711_list_aso_init_valid_on_current_logical_core')  
   (185, 'lasos')  
   (186, 'key_compare_function')  
   (187, 'new_key')  
   (188, 'existing_key')  
   (189, 'existing_key')  
   (190, 'user_state')  
   (191, 'lfds711_list_aso_cleanup')  
   (192, 'lasos')  
   (193, 'element_cleanup_callback')  
   (194, 'lasos')  
   (195, 'lasoe')  
   (196, 'lfds711_list_aso_insert')  
   (197, 'lasos')  
   (198, 'lasoe')  
   (199, 'existing_lasoe')  
   (200, 'lfds711_list_aso_get_by_key')  
   (201, 'lasos')  
   (202, 'key')  
   (203, 'lasoe')  
   (204, 'lfds711_list_aso_query')  
   (205, 'lasos')  
   (206, 'query_type')  
   (207, 'query_input')  
   (208, 'query_output')  
   (209, 'next')  
   (210, 'value')  
   (211, 'key')  
   (212, 'dummy_element')  
   (213, 'end')  
   (214, 'start')  
   (215, 'user_state')  
   (216, 'after_backoff')  
   (217, 'end_backoff')  
   (218, 'start_backoff')  
   (219, 'lfds711_list_asu_init_valid_on_current_logical_core')  
   (220, 'lasus')  
   (221, 'user_state')  
   (222, 'lfds711_list_asu_cleanup')  
   (223, 'lasus')  
   (224, 'element_cleanup_callback')  
   (225, 'lasus')  
   (226, 'lasue')  
   (227, 'lfds711_list_asu_insert_at_position')  
   (228, 'lasus')  
   (229, 'lasue')  
   (230, 'lasue_predecessor')  
   (231, 'position')  
   (232, 'lfds711_list_asu_insert_at_start')  
   (233, 'lasus')  
   (234, 'lasue')  
   (235, 'lfds711_list_asu_insert_at_end')  
   (236, 'lasus')  
   (237, 'lasue')  
   (238, 'lfds711_list_asu_insert_after_element')  
   (239, 'lasus')  
   (240, 'lasue')  
   (241, 'lasue_predecessor')  
   (242, 'lfds711_list_asu_get_by_key')  
   (243, 'lasus')  
   (244, 'key_compare_function')  
   (245, 'new_key')  
   (246, 'existing_key')  
   (247, 'key')  
   (248, 'lasue')  
   (249, 'lfds711_list_asu_query')  
   (250, 'lasus')  
   (251, 'query_type')  
   (252, 'query_input')  
   (253, 'query_output')  
   (254, 'sequence_number')  
   (255, 'key')  
   (256, 'value')  
   (257, 'number_elements')  
   (258, 'mask')  
   (259, 'read_index')  
   (260, 'write_index')  
   (261, 'element_array')  
   (262, 'user_state')  
   (263, 'dequeue_backoff')  
   (264, 'enqueue_backoff')  
   (265, 'lfds711_queue_bmm_init_valid_on_current_logical_core')  
   (266, 'qbmms')  
   (267, 'element_array')  
   (268, 'number_elements')  
   (269, 'user_state')  
   (270, 'lfds711_queue_bmm_cleanup')  
   (271, 'qbmms')  
   (272, 'element_cleanup_callback')  
   (273, 'qbmms')  
   (274, 'key')  
   (275, 'value')  
   (276, 'lfds711_queue_bmm_enqueue')  
   (277, 'qbmms')  
   (278, 'key')  
   (279, 'value')  
   (280, 'lfds711_queue_bmm_dequeue')  
   (281, 'qbmms')  
   (282, 'key')  
   (283, 'value')  
   (284, 'lfds711_queue_bmm_query')  
   (285, 'qbmms')  
   (286, 'query_type')  
   (287, 'query_input')  
   (288, 'query_output')  
   (289, 'key')  
   (290, 'value')  
   (291, 'number_elements')  
   (292, 'mask')  
   (293, 'read_index')  
   (294, 'write_index')  
   (295, 'element_array')  
   (296, 'user_state')  
   (297, 'lfds711_queue_bss_init_valid_on_current_logical_core')  
   (298, 'qbsss')  
   (299, 'element_array')  
   (300, 'number_elements')  
   (301, 'user_state')  
   (302, 'lfds711_queue_bss_cleanup')  
   (303, 'qbsss')  
   (304, 'element_cleanup_callback')  
   (305, 'qbsss')  
   (306, 'key')  
   (307, 'value')  
   (308, 'lfds711_queue_bss_enqueue')  
   (309, 'qbsss')  
   (310, 'key')  
   (311, 'value')  
   (312, 'lfds711_queue_bss_dequeue')  
   (313, 'qbsss')  
   (314, 'key')  
   (315, 'value')  
   (316, 'lfds711_queue_bss_query')  
   (317, 'qbsss')  
   (318, 'query_type')  
   (319, 'query_input')  
   (320, 'query_output')  
   (321, 'next')  
   (322, 'key')  
   (323, 'value')  
   (324, 'enqueue')  
   (325, 'dequeue')  
   (326, 'aba_counter')  
   (327, 'user_state')  
   (328, 'dequeue_backoff')  
   (329, 'enqueue_backoff')  
   (330, 'lfds711_queue_umm_init_valid_on_current_logical_core')  
   (331, 'qumms')  
   (332, 'qumme_dummy')  
   (333, 'user_state')  
   (334, 'lfds711_queue_umm_cleanup')  
   (335, 'qumms')  
   (336, 'element_cleanup_callback')  
   (337, 'qumms')  
   (338, 'qumme')  
   (339, 'dummy_element_flag')  
   (340, 'lfds711_queue_umm_enqueue')  
   (341, 'qumms')  
   (342, 'qumme')  
   (343, 'lfds711_queue_umm_dequeue')  
   (344, 'qumms')  
   (345, 'qumme')  
   (346, 'lfds711_queue_umm_query')  
   (347, 'qumms')  
   (348, 'query_type')  
   (349, 'query_input')  
   (350, 'query_output')  
   (351, 'fe')  
   (352, 'qumme')  
   (353, 'qumme_use')  
   (354, 'key')  
   (355, 'value')  
   (356, 'fs')  
   (357, 'qumms')  
   (358, 'element_cleanup_callback')  
   (359, 'rs')  
   (360, 'key')  
   (361, 'value')  
   (362, 'unread_flag')  
   (363, 'user_state')  
   (364, 'lfds711_ringbuffer_init_valid_on_current_logical_core')  
   (365, 'rs')  
   (366, 're_array_inc_dummy')  
   (367, 'number_elements_inc_dummy')  
   (368, 'user_state')  
   (369, 'lfds711_ringbuffer_cleanup')  
   (370, 'rs')  
   (371, 'element_cleanup_callback')  
   (372, 'rs')  
   (373, 'key')  
   (374, 'value')  
   (375, 'unread_flag')  
   (376, 'lfds711_ringbuffer_read')  
   (377, 'rs')  
   (378, 'key')  
   (379, 'value')  
   (380, 'lfds711_ringbuffer_write')  
   (381, 'rs')  
   (382, 'key')  
   (383, 'value')  
   (384, 'overwrite_occurred_flag')  
   (385, 'overwritten_key')  
   (386, 'overwritten_value')  
   (387, 'lfds711_ringbuffer_query')  
   (388, 'rs')  
   (389, 'query_type')  
   (390, 'query_input')  
   (391, 'query_output')  
   (392, 'next')  
   (393, 'key')  
   (394, 'value')  
   (395, 'top')  
   (396, 'user_state')  
   (397, 'pop_backoff')  
   (398, 'push_backoff')  
   (399, 'lfds711_stack_init_valid_on_current_logical_core')  
   (400, 'ss')  
   (401, 'user_state')  
   (402, 'lfds711_stack_cleanup')  
   (403, 'ss')  
   (404, 'element_cleanup_callback')  
   (405, 'ss')  
   (406, 'se')  
   (407, 'lfds711_stack_push')  
   (408, 'ss')  
   (409, 'se')  
   (410, 'lfds711_stack_pop')  
   (411, 'ss')  
   (412, 'se')  
   (413, 'lfds711_stack_query')  
   (414, 'ss')  
   (415, 'query_type')  
   (416, 'query_input')  
   (417, 'query_output')  
   (418, 'lfds711_misc_internal_backoff_init')  
   (419, 'bs')  
   (420, 'library_lock')  
   (421, 'exponential_backoff')  
   (422, 'loop')  
   (423, '__VERIFIER_atomic_swap_stack_top')  
   (424, 'top')  
   (425, 'oldtop')  
   (426, 'newtop')  
   (427, 'lfds711_misc_internal_backoff_init')  
   (428, 'bs')  
   (429, 'c')  
   (430, 'c')  
   (431, 'lfds711_stack_init_valid_on_current_logical_core')  
   (432, 'ss')  
   (433, 'user_state')  
   (434, 'c')  
   (435, 'c')  
   (436, 'c')  
   (437, 'lfds711_stack_pop')  
   (438, 'ss')  
   (439, 'se')  
   (440, 'result')  
   (441, 'backoff_iteration')  
   (442, 'new_top')  
   (443, 'original_top')  
   (444, 'c')  
   (445, 'c')  
   (446, 'i')  
   (447, 'lfds711_stack_push')  
   (448, 'ss')  
   (449, 'se')  
   (450, 'result')  
   (451, 'backoff_iteration')  
   (452, 'new_top')  
   (453, 'original_top')  
   (454, 'c')  
   (455, 'c')  
   (456, 'i')  
   (457, '__VERIFIER_atomic_compare_and_exchange')  
   (458, 'mptr')  
   (459, 'eptr')  
   (460, 'newval')  
   (461, 'weak_p')  
   (462, 'sm')  
   (463, 'fm')  
   (464, '__atomic_compare_exchange_n')  
   (465, 'mptr')  
   (466, 'eptr')  
   (467, 'newval')  
   (468, 'weak_p')  
   (469, 'sm')  
   (470, 'fm')  
   (471, 'res')  
   (472, '__VERIFIER_atomic_exchange')  
   (473, 'previous')  
   (474, 'new')  
   (475, 'memorder')  
   (476, 'old')  
   (477, '__atomic_exchange_n')  
   (478, 'previous')  
   (479, 'new')  
   (480, 'memorder')  
   (481, 'res')  
   (482, '__atomic_thread_fence')  
   (483, 'i')  
   (484, 'mystack')  
   (485, 'se')  
   (486, 'user_id')  
   (487, 'init')  
   (488, 'insert')  
   (489, 's')  
   (490, 'id')  
   (491, 'td')  
   (492, 'delete')  
   (493, 's')  
   (494, 'se')  
   (495, 'temp_td')  
   (496, 'res')  
   (497, 'contains')  
   (498, 's')  
   (499, 'id')  
   (500, 'max_size')  
   (501, 'actual_size')  
   (502, 'res')  
   (503, 'found')  
   (504, 'dimension')  
   (505, 'datas')  
   (506, 'se')  
   (507, 'i')  
   (508, 'get_size')  
   (509, 's')  
   (510, 'max_size')  
   (511, 'actual_size')  
   (512, 'res')  
   (513, 'dimension')  
   (514, 'datas')  
   (515, 'se')  
   (516, 'i')  
   (517, 'is_empty')  
   (518, 's')  
   (519, 'se')  
   (520, 'res')  
   (521, 'ATOMIC_OPERATION')  
   (522, 'ss')  
   (523, 'lock')  
   (524, 'thread1')  
   (525, '__cs_unused')  
   (526, 'thread2')  
   (527, '__cs_unused')  
   (528, 'main')  
   (529, 't1')  
   (530, 't2')  