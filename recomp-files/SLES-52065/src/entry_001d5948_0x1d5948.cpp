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

// Function: entry_001d5948
// Address: 0x1d5948 - 0x1d5950
void entry_001d5948_0x1d5948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5948_0x1d5948");
#endif

    ctx->pc = 0x1d5948u;

    // 0x1d5948: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d5948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d594c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d594cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d5950u;
}
