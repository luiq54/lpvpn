include(FetchContent)

FetchContent_Declare(
	wxWidgets
	URL https://github.com/wxWidgets/wxWidgets/releases/download/v3.1.4/wxWidgets-3.1.4.tar.bz2
)
FetchContent_GetProperties(wxWidgets)
if(NOT wxwidgets_POPULATED)
	FetchContent_Populate(wxwidgets)
endif()

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
set(wxBUILD_MONOLITHIC OFF CACHE INTERNAL "")
set(wxBUILD_SHARED ON CACHE INTERNAL "")
set(wxBUILD_USE_STATIC_RUNTIME ON CACHE INTERNAL "")
add_subdirectory("${wxwidgets_SOURCE_DIR}")
