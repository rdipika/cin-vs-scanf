# cin-vs-scanf 

Comparison of execution times when reading input using cin and scanf.

Normally,owing to synchronization with the underlying c library,cin is slower than scanf.

However,with sync_with_stdio() disabled, cin proves faster than scanf in execution ,measured using the clock times.
