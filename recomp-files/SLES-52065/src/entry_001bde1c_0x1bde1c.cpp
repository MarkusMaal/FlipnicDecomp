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

// Function: entry_001bde1c
// Address: 0x1bde1c - 0x1bde3c
void entry_001bde1c_0x1bde1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bde1c_0x1bde1c");
#endif

    ctx->pc = 0x1bde1cu;

    // 0x1bde1c: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x1bde1cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1bde20: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1bde20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1bde24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bde24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bde28: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1bde28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bde2c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1bde2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bde30: 0x1010  mfhi        $v0
    ctx->pc = 0x1bde30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bde34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bde34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bde38: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1bde38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1bde3cu;
}
