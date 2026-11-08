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

// Function: entry_001bbe4c
// Address: 0x1bbe4c - 0x1bbe78
void entry_001bbe4c_0x1bbe4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbe4c_0x1bbe4c");
#endif

    ctx->pc = 0x1bbe4cu;

    // 0x1bbe4c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1bbe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbe50: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1bbe50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bbe54: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bbe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bbe58: 0xb31823  subu        $v1, $a1, $s3
    ctx->pc = 0x1bbe58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1bbe5c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1bbe5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bbe60: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBE60u;
    {
        const bool branch_taken_0x1bbe60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE60u;
        // 0x1bbe64: 0x203a021  addu        $s4, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe60) {
            ctx->pc = 0x1BBE78u;
            return;
        }
    }
    ctx->pc = 0x1BBE68u;
    // 0x1bbe68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bbe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbe6c: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x1bbe6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1bbe70: 0x1020005c  beqz        $at, . + 4 + (0x5C << 2)
    ctx->pc = 0x1BBE70u;
    {
        const bool branch_taken_0x1bbe70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe70) {
            ctx->pc = 0x1BBFE4u;
            return;
        }
    }
    ctx->pc = 0x1BBE78u;
}
