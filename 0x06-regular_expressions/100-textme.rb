#!/usr/bin/env ruby
sender = ARGV[0].scan(/from:(.*?)\]/)
receiver = ARGV[0].scan(/to:(.*?)\]/)
f = ARGV[0].scan(/flags:(.*?)\]/)
puts [sender, receiver, f].join(',')
