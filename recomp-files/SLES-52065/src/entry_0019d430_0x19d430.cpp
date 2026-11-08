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

// Function: entry_0019d430
// Address: 0x19d430 - 0x19d490
void entry_0019d430_0x19d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d430_0x19d430");
#endif

    ctx->pc = 0x19d430u;

    // 0x19d430: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x19d430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19d434: 0x8c650674  lw          $a1, 0x674($v1)
    ctx->pc = 0x19d434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1652)));
    // 0x19d438: 0x24720674  addiu       $s2, $v1, 0x674
    ctx->pc = 0x19d438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1652));
    // 0x19d43c: 0x8c6406b4  lw          $a0, 0x6B4($v1)
    ctx->pc = 0x19d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1716)));
    // 0x19d440: 0x247306b4  addiu       $s3, $v1, 0x6B4
    ctx->pc = 0x19d440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1716));
    // 0x19d444: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x19d444u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19d448: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x19d448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19d44c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19d450: 0x8cc62cd8  lw          $a2, 0x2CD8($a2)
    ctx->pc = 0x19d450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x19d454: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x19D454u;
    {
        const bool branch_taken_0x19d454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D454u;
        // 0x19d458: 0x8cd00004  lw          $s0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d454) {
            ctx->pc = 0x19D510u;
            return;
        }
    }
    ctx->pc = 0x19D45Cu;
    // 0x19d45c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19d460: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x19D460u;
    {
        const bool branch_taken_0x19d460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d460) {
            ctx->pc = 0x19D510u;
            return;
        }
    }
    ctx->pc = 0x19D468u;
    // 0x19d468: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d46c: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x19D46Cu;
    {
        const bool branch_taken_0x19d46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d46c) {
            ctx->pc = 0x19D4CCu;
            return;
        }
    }
    ctx->pc = 0x19D474u;
    // 0x19d474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d478: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19D478u;
    {
        const bool branch_taken_0x19d478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d478) {
            ctx->pc = 0x19D490u;
            return;
        }
    }
    ctx->pc = 0x19D480u;
    // 0x19d480: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x19D480u;
    {
        const bool branch_taken_0x19d480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d480) {
            ctx->pc = 0x19D510u;
            return;
        }
    }
    ctx->pc = 0x19D488u;
    // 0x19d488: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x19D488u;
    {
        const bool branch_taken_0x19d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d488) {
            ctx->pc = 0x19D510u;
            return;
        }
    }
    ctx->pc = 0x19D490u;
}
