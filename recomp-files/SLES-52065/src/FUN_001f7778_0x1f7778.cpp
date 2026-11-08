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

// Function: FUN_001f7778
// Address: 0x1f7778 - 0x1f7810
void FUN_001f7778_0x1f7778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7778_0x1f7778");
#endif

    switch (ctx->pc) {
        case 0x1f778cu: goto label_1f778c;
        case 0x1f77ccu: goto label_1f77cc;
        case 0x1f77e0u: goto label_1f77e0;
        case 0x1f77fcu: goto label_1f77fc;
        default: break;
    }

    ctx->pc = 0x1f7778u;

    // 0x1f7778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f7778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f777c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f777cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7780: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f7780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f7784: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x1F7784u;
    SET_GPR_U32(ctx, 31, 0x1F778Cu);
    ctx->pc = 0x1F7788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7784u;
    // 0x1f7788: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7608u, 0x1F7784u, 0x1F778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F778Cu;
label_1f778c:
    // 0x1f778c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F778Cu;
    {
        const bool branch_taken_0x1f778c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F778Cu;
        // 0x1f7790: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f778c) {
            ctx->pc = 0x1F779Cu;
            goto label_1f779c;
        }
    }
    ctx->pc = 0x1F7794u;
    // 0x1f7794: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1F7794u;
    {
        const bool branch_taken_0x1f7794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7794u;
        // 0x1f7798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7794) {
            ctx->pc = 0x1F7800u;
            goto label_1f7800;
        }
    }
    ctx->pc = 0x1F779Cu;
label_1f779c:
    // 0x1f779c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f779cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f77a0: 0x2450bb80  addiu       $s0, $v0, -0x4480
    ctx->pc = 0x1f77a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949760));
    // 0x1f77a4: 0x2484ccd0  addiu       $a0, $a0, -0x3330
    ctx->pc = 0x1f77a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954192));
    // 0x1f77a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f77a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f77ac: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1f77acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f77b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f77b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f77b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f77b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77bc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f77bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f77c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f77c4: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F77C4u;
    SET_GPR_U32(ctx, 31, 0x1F77CCu);
    ctx->pc = 0x1F77C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F77C4u;
    // 0x1f77c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F77C4u, 0x1F77CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F77CCu;
label_1f77cc:
    // 0x1f77cc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F77CCu;
    {
        const bool branch_taken_0x1f77cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77CCu;
        // 0x1f77d0: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77cc) {
            ctx->pc = 0x1F77E8u;
            goto label_1f77e8;
        }
    }
    ctx->pc = 0x1F77D4u;
    // 0x1f77d4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f77d8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F77D8u;
    SET_GPR_U32(ctx, 31, 0x1F77E0u);
    ctx->pc = 0x1F77DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F77D8u;
    // 0x1f77dc: 0x8c44bb28  lw          $a0, -0x44D8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F77D8u, 0x1F77E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F77E0u;
label_1f77e0:
    // 0x1f77e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F77E0u;
    {
        const bool branch_taken_0x1f77e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77E0u;
        // 0x1f77e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77e0) {
            ctx->pc = 0x1F7800u;
            goto label_1f7800;
        }
    }
    ctx->pc = 0x1F77E8u;
label_1f77e8:
    // 0x1f77e8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1f77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1f77ec: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f77ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f77f0: 0x8c64bb28  lw          $a0, -0x44D8($v1)
    ctx->pc = 0x1f77f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949672)));
    // 0x1f77f4: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F77F4u;
    SET_GPR_U32(ctx, 31, 0x1F77FCu);
    ctx->pc = 0x1F77F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F77F4u;
    // 0x1f77f8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F77F4u, 0x1F77FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F77FCu;
label_1f77fc:
    // 0x1f77fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f77fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7800:
    // 0x1f7800: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f7800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7804: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f7804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7808: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7808u;
        // 0x1f780c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7810u;
}
