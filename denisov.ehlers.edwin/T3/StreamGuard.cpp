#include "StreamGuard.h"

StreamGuard::StreamGuard(std::basic_ios<char>& s) :
  s_(s),
  width_(s.width()),
  precision_(s.precision()),
  fmt_(s.flags())
{
}

StreamGuard::~StreamGuard()
{
  s_.width(width_);
  s_.precision(precision_);
  s_.flags(fmt_);
}
