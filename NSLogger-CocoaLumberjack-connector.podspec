Pod::Spec.new do |s|
  s.name     = 'NSLogger-CocoaLumberjack-connector'
  s.version  = '1.3.3'
  s.license  = 'BSD'
  s.summary  = 'Bridges NSLogger and CocoaLumberjack.'
  s.homepage = 'https://github.com/arturgrigor/NSLogger-CocoaLumberjack-connector'
  s.author   = { 'Peter Steinberger' => 'steipete@gmail.com', 'Artur Grigor' => 'arturgrigor@gmail.com' }
  s.source   = { :git => 'https://github.com/arturgrigor/NSLogger-CocoaLumberjack-connector.git', :tag => s.version.to_s }
  s.description = 'This is a bridge for the projects http://github.com/robbiehanson/CocoaLumberjack (A general purpose super-fast logging framework) and http://github.com/fpillet/NSLogger (send logs to a client app via network).'
  s.source_files = 'PSDDFormatter', 'DDNSLoggerLogger.*', 'DDLogExtras.h'
  s.requires_arc = false
  s.dependency 'NSLogger'
  s.dependency 'CocoaLumberjack'
end
