MAKE := make -s
BUILD_DIR := build
GENERATOR := Unix Makefiles
CXX ?= $(which g++)
CMAKE_FLAGS := "-DCMAKE_CXX_COMPILER='$(CXX)'"

.PHONY:: all test run-tests compile build-dir \
	 prepare-deps generate clean \
	 clean-build

.DEFAULT:: all
all::
all:: compile


test::
test run-tests::
	@$(MAKE) test -C $(BUILD_DIR)


compile::
compile generate prepare-deps::
	@conan install -if ./build --build=missing .
compile generate build-dir::
	@mkdir -p $(BUILD_DIR)
compile generate::
	@cd $(BUILD_DIR) && cmake $(CMAKE_FLAGS) -G"$(GENERATOR)" ..
compile::
	@$(MAKE) -C $(BUILD_DIR)


clean::
	@$(MAKE) -C $(BUILD_DIR) clean ||:
clean clean-build::
	@rm -rf $(BUILD_DIR)
clean clean-copied-dcc::
	@rm -f $(BINARY_TO_COPY)
