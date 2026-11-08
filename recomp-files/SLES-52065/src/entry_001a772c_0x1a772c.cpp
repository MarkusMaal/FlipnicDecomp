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

// Function: entry_001a772c
// Address: 0x1a772c - 0x1a773c
void entry_001a772c_0x1a772c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a772c_0x1a772c");
#endif

    ctx->pc = 0x1a772cu;

    // 0x1a772c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a7730: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a7730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a7734: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1a7734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x1a7738: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a7738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->pc = 0x1a773cu;
}
