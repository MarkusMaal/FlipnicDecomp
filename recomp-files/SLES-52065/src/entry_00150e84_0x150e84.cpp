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

// Function: entry_00150e84
// Address: 0x150e84 - 0x150eac
void entry_00150e84_0x150e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150e84_0x150e84");
#endif

    ctx->pc = 0x150e84u;

    // 0x150e84: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x150e84u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x150e88: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x150e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x150e8c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x150e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150e90: 0x1812  mflo        $v1
    ctx->pc = 0x150e90u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x150e94: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x150e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x150e98: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x150e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x150e9c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x150e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x150ea0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150EA0u;
    {
        const bool branch_taken_0x150ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150ea0) {
            ctx->pc = 0x150EACu;
            return;
        }
    }
    ctx->pc = 0x150EA8u;
    // 0x150ea8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x150ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x150eacu;
}
