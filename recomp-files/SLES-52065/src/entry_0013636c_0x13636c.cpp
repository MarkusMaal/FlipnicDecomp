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

// Function: entry_0013636c
// Address: 0x13636c - 0x136398
void entry_0013636c_0x13636c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013636c_0x13636c");
#endif

    ctx->pc = 0x13636cu;

    // 0x13636c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x13636cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x136370: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x136370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x136374: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x136374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x136378: 0x27b70098  addiu       $s7, $sp, 0x98
    ctx->pc = 0x136378u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x13637c: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x13637cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x136380: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x136380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x136384: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x136384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x136388: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136388u;
    {
        const bool branch_taken_0x136388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136388u;
        // 0x13638c: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136388) {
            ctx->pc = 0x136398u;
            return;
        }
    }
    ctx->pc = 0x136390u;
    // 0x136390: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136390u;
    {
        const bool branch_taken_0x136390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136390u;
        // 0x136394: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136390) {
            ctx->pc = 0x1363A0u;
            return;
        }
    }
    ctx->pc = 0x136398u;
}
