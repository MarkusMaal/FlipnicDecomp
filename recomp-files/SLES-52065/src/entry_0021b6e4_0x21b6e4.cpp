#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0021b6e4
// Address: 0x21b6e4 - 0x21b6ec
void entry_0021b6e4_0x21b6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b6e4_0x21b6e4");
#endif

    ctx->pc = 0x21b6e4u;

    // 0x21b6e4: 0xf  sync
    ctx->pc = 0x21b6e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21b6e8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x21b6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21b6ecu;
}
