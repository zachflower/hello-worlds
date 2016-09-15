-module(hello).
-export([hello/0]).

hello() ->
  io:fwrite("hello, world\n").
