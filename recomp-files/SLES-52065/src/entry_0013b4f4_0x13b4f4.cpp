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

// Function: entry_0013b4f4
// Address: 0x13b4f4 - 0x13b520
void entry_0013b4f4_0x13b4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b4f4_0x13b4f4");
#endif

    ctx->pc = 0x13b4f4u;

    // 0x13b4f4: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x13b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x13b4f8: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x13b4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x13b4fc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x13b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x13b500: 0x27b60098  addiu       $s6, $sp, 0x98
    ctx->pc = 0x13b500u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x13b504: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x13b504u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x13b508: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x13b508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b50c: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x13b50cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13b510: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B510u;
    {
        const bool branch_taken_0x13b510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B510u;
        // 0x13b514: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b510) {
            ctx->pc = 0x13B520u;
            return;
        }
    }
    ctx->pc = 0x13B518u;
    // 0x13b518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B518u;
    {
        const bool branch_taken_0x13b518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B518u;
        // 0x13b51c: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b518) {
            ctx->pc = 0x13B528u;
            return;
        }
    }
    ctx->pc = 0x13B520u;
}
