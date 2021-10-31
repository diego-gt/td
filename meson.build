project(
	'td',
	'cpp',
	version : '0.1',
	default_options : [
		'warning_level=3',
		'cpp_std=c++20'
	])

public_headers = include_directories('include')

sources = files([
  'src/main.cpp'
])

executable(
    'td',
    sources,
    include_directories : public_headers,
)
