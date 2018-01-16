
#if !defined(__linux__) && !defined(__FreeBSD__) && !defined(__OpenBSD__)
extern int test_weak (void) __attribute__ ((weak_import));
#else
extern int test_weak (void) __attribute__ ((weak));
#endif

int main(){
  int (*t)(void) = test_weak;
  if (t) {
    t();
    return 1;
  }
  return 0;
}
