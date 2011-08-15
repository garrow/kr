task :default => [:build]

desc "Builds teh codes"
task :build do 
  puts "Building..."
  sh "./last"
end

desc "Combined text processing test, sample and lorem"
task :test => [:sample, :lorem ]


desc "Test using sample.txt"
task :sample => [:build] do 
  sh "cat sample.txt | ./a.out"
end

desc "Test using lorem.txt"
task :lorem => [:build] do 
  sh "cat lorem.txt | ./a.out"
end

