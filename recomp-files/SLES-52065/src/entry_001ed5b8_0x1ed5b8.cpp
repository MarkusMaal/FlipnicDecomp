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

// Function: entry_001ed5b8
// Address: 0x1ed5b8 - 0x1ed5c8
void entry_001ed5b8_0x1ed5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed5b8_0x1ed5b8");
#endif

    ctx->pc = 0x1ed5b8u;

    // 0x1ed5b8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1ed5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed5bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ed5bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ed5c0: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1ed5c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1ed5c4: 0x0  nop
    ctx->pc = 0x1ed5c4u;
    // NOP
    ctx->pc = 0x1ed5c8u;
}
