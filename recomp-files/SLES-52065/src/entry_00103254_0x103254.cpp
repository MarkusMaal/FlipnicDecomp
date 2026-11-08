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

// Function: entry_00103254
// Address: 0x103254 - 0x10325c
void entry_00103254_0x103254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103254_0x103254");
#endif

    ctx->pc = 0x103254u;

    // 0x103254: 0x0  nop
    ctx->pc = 0x103254u;
    // NOP
    // 0x103258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x103258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10325cu;
}
