# UniBroker

UniBroker or Universal Broker is designed as a universal broker daemon, which handles different message bus protocols
and can cast from one to another.

Whole project is based on Poco libraries set. Application intended to have a module structure, a single core in
executable and loadable stuff as shared libraries (such as protocol plugins and etc.)

ServerApplication is a base starting class of an application.

plugins/ directory must hold all of the protocol libraries