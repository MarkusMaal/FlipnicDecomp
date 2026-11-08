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

// Function: entry_001e9130
// Address: 0x1e9130 - 0x1e9170
void entry_001e9130_0x1e9130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9130_0x1e9130");
#endif

    ctx->pc = 0x1e9130u;

    // 0x1e9130: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e9130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e9134: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x1e9134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1e9138: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E9138u;
    {
        const bool branch_taken_0x1e9138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9138) {
            ctx->pc = 0x1E9114u;
            return;
        }
    }
    ctx->pc = 0x1E9140u;
    // 0x1e9140: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1e9140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e9144: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x1e9144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e9148: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E9148u;
    {
        const bool branch_taken_0x1e9148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9148) {
            ctx->pc = 0x1E91A4u;
            return;
        }
    }
    ctx->pc = 0x1E9150u;
    // 0x1e9150: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1e9150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e9154: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E9154u;
    {
        const bool branch_taken_0x1e9154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9154) {
            ctx->pc = 0x1E91A4u;
            return;
        }
    }
    ctx->pc = 0x1E915Cu;
    // 0x1e915c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1e915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e9160: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e9160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e9164: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1e9164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e9168: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E9168u;
    {
        const bool branch_taken_0x1e9168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9168u;
        // 0x1e916c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9168) {
            ctx->pc = 0x1E9194u;
            return;
        }
    }
    ctx->pc = 0x1E9170u;
}
