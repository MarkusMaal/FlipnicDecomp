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

// Function: FUN_00171430
// Address: 0x171430 - 0x1714b8
void FUN_00171430_0x171430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00171430_0x171430");
#endif

    switch (ctx->pc) {
        case 0x171458u: goto label_171458;
        case 0x171470u: goto label_171470;
        case 0x171490u: goto label_171490;
        default: break;
    }

    ctx->pc = 0x171430u;

    // 0x171430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x171438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17143c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17143cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x171440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x171440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171444: 0x8c820254  lw          $v0, 0x254($a0)
    ctx->pc = 0x171444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x171448: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x171448u;
    {
        const bool branch_taken_0x171448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171448u;
        // 0x17144c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171448) {
            ctx->pc = 0x171480u;
            goto label_171480;
        }
    }
    ctx->pc = 0x171450u;
    // 0x171450: 0xc059990  jal         func_166640
    ctx->pc = 0x171450u;
    SET_GPR_U32(ctx, 31, 0x171458u);
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x171450u, 0x171458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171458u;
label_171458:
    // 0x171458: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x171458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17145c: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x17145Cu;
    {
        const bool branch_taken_0x17145c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x171460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17145Cu;
        // 0x171460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17145c) {
            ctx->pc = 0x1714A0u;
            goto label_1714a0;
        }
    }
    ctx->pc = 0x171464u;
    // 0x171464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171468: 0xc0561d4  jal         func_158750
    ctx->pc = 0x171468u;
    SET_GPR_U32(ctx, 31, 0x171470u);
    ctx->pc = 0x17146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171468u;
    // 0x17146c: 0xae300254  sw          $s0, 0x254($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x171468u, 0x171470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171470u;
label_171470:
    // 0x171470: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x171470u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171474: 0x7e260240  sq          $a2, 0x240($s1)
    ctx->pc = 0x171474u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 576), GPR_VEC(ctx, 6));
    // 0x171478: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x171478u;
    {
        const bool branch_taken_0x171478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171478u;
        // 0x17147c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171478) {
            ctx->pc = 0x1714A4u;
            goto label_1714a4;
        }
    }
    ctx->pc = 0x171480u;
label_171480:
    // 0x171480: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171480u;
    {
        const bool branch_taken_0x171480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x171480) {
            ctx->pc = 0x171498u;
            goto label_171498;
        }
    }
    ctx->pc = 0x171488u;
    // 0x171488: 0xc059990  jal         func_166640
    ctx->pc = 0x171488u;
    SET_GPR_U32(ctx, 31, 0x171490u);
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x171488u, 0x171490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171490u;
label_171490:
    // 0x171490: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x171490u;
    {
        const bool branch_taken_0x171490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171490u;
        // 0x171494: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171490) {
            ctx->pc = 0x1714A8u;
            goto label_1714a8;
        }
    }
    ctx->pc = 0x171498u;
label_171498:
    // 0x171498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171498u;
    {
        const bool branch_taken_0x171498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171498u;
        // 0x17149c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171498) {
            ctx->pc = 0x1714A4u;
            goto label_1714a4;
        }
    }
    ctx->pc = 0x1714A0u;
label_1714a0:
    // 0x1714a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1714a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1714a4:
    // 0x1714a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1714a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1714a8:
    // 0x1714a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1714a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1714ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1714acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1714b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1714B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1714B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714B0u;
        // 0x1714b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1714B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1714B8u;
}
