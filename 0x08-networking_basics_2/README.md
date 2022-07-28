# 0x08. Networking basics #1

## Relevent Network tools
- ifconfig (`ifconfig` was obsoleted by `ip`)
- telenet (`telenet` was obsoleted by `nc`)
- netstat (`netstat` was obsoleted by `ss` and `ip`)

- ss: Used to to investigate sockets. ss is used to dump socket statistics. It allows showing information similar to netstat. It can display more TCP and state information than other tools.
- IP : Used to show / manipulate routing, network devices, interfaces and tunnels
- nc: Used to open TCP connections, send UDP packets, listen on arbitrary TCP and UDP ports, do port scanning, and deals with both IPv4 and IPv6. It scripts nicely, and can be used to write shell-script based HTTP clients and servers.
- Hostname: Used to display the system's DNS name, and to display or set its hostname or NIS domain name. Hides the loopback address by default.
