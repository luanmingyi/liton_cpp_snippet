subfolder = test_file test_time

out_flag = $(foreach n,$(subfolder),$(n).out_flag)
%.out_flag:
	echo $(@) > $(@)
	cd $(basename $(@)) && $(MAKE) $(basename $(@)).out
out:$(out_flag)
	rm *out_flag

run_flag = $(foreach n,$(subfolder),$(n).run_flag)
%.run_flag:
	echo $(@) > $(@)
	cd $(basename $(@)) && $(MAKE) run
run:$(run_flag)
	rm *run_flag

clean_flag = $(foreach n,$(subfolder),$(n).clean_flag)
%.clean_flag:
	echo $(@) > $(@)
	cd $(basename $(@)) && $(MAKE) clean
clean:$(clean_flag)
	rm *clean_flag

clean_run_flag = $(foreach n,$(subfolder),$(n).clean_run_flag)
%.clean_run_flag:
	echo $(@) > $(@)
	cd $(basename $(@)) && $(MAKE) clean_run
clean_run:$(clean_run_flag)
	rm *clean_run_flag

clean_all_flag = $(foreach n,$(subfolder),$(n).clean_all_flag)
%.clean_all_flag:
	echo $(@) > $(@)
	cd $(basename $(@)) && $(MAKE) clean_all
clean_all:$(clean_all_flag)
	rm *clean_all_flag
