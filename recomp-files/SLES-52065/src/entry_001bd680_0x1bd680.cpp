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

// Function: entry_001bd680
// Address: 0x1bd680 - 0x1bd6a4
void entry_001bd680_0x1bd680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd680_0x1bd680");
#endif

    ctx->pc = 0x1bd680u;

    // 0x1bd680: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x1bd680u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1bd684: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1bd684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bd688: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x1bd688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bd68c: 0x2812  mflo        $a1
    ctx->pc = 0x1bd68cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1bd690: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bd690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bd694: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x1bd694u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1bd698: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD698u;
    {
        const bool branch_taken_0x1bd698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd698) {
            ctx->pc = 0x1BD6A4u;
            return;
        }
    }
    ctx->pc = 0x1BD6A0u;
    // 0x1bd6a0: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x1bd6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->pc = 0x1bd6a4u;
}
