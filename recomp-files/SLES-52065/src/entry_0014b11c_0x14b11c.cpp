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

// Function: entry_0014b11c
// Address: 0x14b11c - 0x14b140
void entry_0014b11c_0x14b11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b11c_0x14b11c");
#endif

    ctx->pc = 0x14b11cu;

    // 0x14b11c: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x14b11cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x14b120: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x14b120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14b124: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x14b124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14b128: 0x2012  mflo        $a0
    ctx->pc = 0x14b128u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x14b12c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14b130: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x14b130u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14b134: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B134u;
    {
        const bool branch_taken_0x14b134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b134) {
            ctx->pc = 0x14B140u;
            return;
        }
    }
    ctx->pc = 0x14B13Cu;
    // 0x14b13c: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x14b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    ctx->pc = 0x14b140u;
}
