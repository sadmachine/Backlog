# Backlog Syntax

## Contexts

A **Context** is a grouping of lists which apply to a certain scope or domain. All lists have a single context in which they reside. There is one global or "default" context which is used if no context is specified. Otherwise, Contexts are created and can be accessed from specific directories.  Each context has a general or "default" list which is used if no list is specified. Other lists can be created within the context.

```
$ # General context, no list specified:
$ backlog add Task1
$ # General context, list 'work' specified:
$ backlog work add Task1
$ # Local context, no list specified:
$ backlog . add Task1
$ # Local context, list 'work' specified:
$ backlog .work add Task1
$ # Specified context at location "/path/to/context", no list specified
$ backlog /path/to/context add Task1
$ # Specified context at location "/path/to/context", list 'work' specified
$ backlog /path/to/context/
