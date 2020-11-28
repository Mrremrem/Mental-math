add_library(HeadersAndSources Window.cpp MathFunctions.cpp ExamMode.cpp HandleUpdates.cpp Score.cpp Textbox.cpp)

target_include_directories(HeadersAndSources INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
