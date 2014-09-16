class MemoryLogger {
    static void* operator new(size_t size) throw(bad_alloc) { return ::operator new(size); }
    static void* operator new(size_t size, void * ptr) throw(bad_alloc) { return ::operator new(size, ptr); }
    static void* operator new(size_t size, const nothrow_t& nt) throw() { return ::operator new(size, nt); }
    
    static void operator delete(void * pMemory) throw() { ::operator delete(pMemory); }
    static void operator delete(void * pMemory, void * ptr) throw() { ::operator delete(pMemory, ptr); }
    static void operator delete(void * pMemory, const nothrow_t& nt) throw() { return ::operator delete(pMemory, nt); }
};
