add_executable(example
	main.cpp
)

target_link_libraries(example
	PRIVATE clilib
)

target_compile_features(example PUBLIC cxx_std_17)
