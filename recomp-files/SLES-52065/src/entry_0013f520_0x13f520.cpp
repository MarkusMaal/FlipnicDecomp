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

// Function: entry_0013f520
// Address: 0x13f520 - 0x13f544
void entry_0013f520_0x13f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f520_0x13f520");
#endif

    ctx->pc = 0x13f520u;

    // 0x13f520: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x13f520u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x13f524: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x13f524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13f528: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x13f528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13f52c: 0x2812  mflo        $a1
    ctx->pc = 0x13f52cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x13f530: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x13f530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13f534: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x13f534u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x13f538: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F538u;
    {
        const bool branch_taken_0x13f538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f538) {
            ctx->pc = 0x13F544u;
            return;
        }
    }
    ctx->pc = 0x13F540u;
    // 0x13f540: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x13f540u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->pc = 0x13f544u;
}
