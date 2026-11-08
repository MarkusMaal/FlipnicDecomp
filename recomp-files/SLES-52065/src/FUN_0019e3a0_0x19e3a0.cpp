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

// Function: FUN_0019e3a0
// Address: 0x19e3a0 - 0x19e444
void FUN_0019e3a0_0x19e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e3a0_0x19e3a0");
#endif

    switch (ctx->pc) {
        case 0x19e3a0u: goto label_19e3a0;
        case 0x19e3a4u: goto label_19e3a4;
        case 0x19e3a8u: goto label_19e3a8;
        case 0x19e3acu: goto label_19e3ac;
        case 0x19e3b0u: goto label_19e3b0;
        case 0x19e3b4u: goto label_19e3b4;
        case 0x19e3b8u: goto label_19e3b8;
        case 0x19e3bcu: goto label_19e3bc;
        case 0x19e3c0u: goto label_19e3c0;
        case 0x19e3c4u: goto label_19e3c4;
        case 0x19e3c8u: goto label_19e3c8;
        case 0x19e3ccu: goto label_19e3cc;
        case 0x19e3d0u: goto label_19e3d0;
        case 0x19e3d4u: goto label_19e3d4;
        case 0x19e3d8u: goto label_19e3d8;
        case 0x19e3dcu: goto label_19e3dc;
        case 0x19e3e0u: goto label_19e3e0;
        case 0x19e3e4u: goto label_19e3e4;
        case 0x19e3e8u: goto label_19e3e8;
        case 0x19e3ecu: goto label_19e3ec;
        case 0x19e3f0u: goto label_19e3f0;
        case 0x19e3f4u: goto label_19e3f4;
        case 0x19e3f8u: goto label_19e3f8;
        case 0x19e3fcu: goto label_19e3fc;
        case 0x19e400u: goto label_19e400;
        case 0x19e404u: goto label_19e404;
        case 0x19e408u: goto label_19e408;
        case 0x19e40cu: goto label_19e40c;
        case 0x19e410u: goto label_19e410;
        case 0x19e414u: goto label_19e414;
        case 0x19e418u: goto label_19e418;
        case 0x19e41cu: goto label_19e41c;
        case 0x19e420u: goto label_19e420;
        case 0x19e424u: goto label_19e424;
        case 0x19e428u: goto label_19e428;
        case 0x19e42cu: goto label_19e42c;
        case 0x19e430u: goto label_19e430;
        case 0x19e434u: goto label_19e434;
        case 0x19e438u: goto label_19e438;
        case 0x19e43cu: goto label_19e43c;
        case 0x19e440u: goto label_19e440;
        default: break;
    }

    ctx->pc = 0x19e3a0u;

label_19e3a0:
    // 0x19e3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19e3a4:
    // 0x19e3a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19e3a8:
    // 0x19e3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19e3ac:
    // 0x19e3ac: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_19e3b0:
    if (ctx->pc == 0x19E3B0u) {
        ctx->pc = 0x19E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3ACu;
        // 0x19e3b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3B4u;
        goto label_19e3b4;
    }
    ctx->pc = 0x19E3ACu;
    {
        const bool branch_taken_0x19e3ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3ACu;
        // 0x19e3b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3ac) {
            ctx->pc = 0x19E3F8u;
            goto label_19e3f8;
        }
    }
    ctx->pc = 0x19E3B4u;
label_19e3b4:
    // 0x19e3b4: 0x8e030994  lw          $v1, 0x994($s0)
    ctx->pc = 0x19e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2452)));
label_19e3b8:
    // 0x19e3b8: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_19e3bc:
    if (ctx->pc == 0x19E3BCu) {
        ctx->pc = 0x19E3C0u;
        goto label_19e3c0;
    }
    ctx->pc = 0x19E3B8u;
    {
        const bool branch_taken_0x19e3b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e3b8) {
            ctx->pc = 0x19E434u;
            goto label_19e434;
        }
    }
    ctx->pc = 0x19E3C0u;
label_19e3c0:
    // 0x19e3c0: 0x8e04099c  lw          $a0, 0x99C($s0)
    ctx->pc = 0x19e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2460)));
label_19e3c4:
    // 0x19e3c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19e3c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19e3c8:
    // 0x19e3c8: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x19e3c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_19e3cc:
    // 0x19e3cc: 0x320f809  jalr        $t9
label_19e3d0:
    if (ctx->pc == 0x19E3D0u) {
        ctx->pc = 0x19E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3CCu;
        // 0x19e3d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3D4u;
        goto label_19e3d4;
    }
    ctx->pc = 0x19E3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E3D4u);
        ctx->pc = 0x19E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3CCu;
        // 0x19e3d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E3CCu, 0x19E3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E3D4u;
label_19e3d4:
    // 0x19e3d4: 0x8e04099c  lw          $a0, 0x99C($s0)
    ctx->pc = 0x19e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2460)));
label_19e3d8:
    // 0x19e3d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e3dc:
    // 0x19e3dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19e3dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19e3e0:
    // 0x19e3e0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19e3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19e3e4:
    // 0x19e3e4: 0x320f809  jalr        $t9
label_19e3e8:
    if (ctx->pc == 0x19E3E8u) {
        ctx->pc = 0x19E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3E4u;
        // 0x19e3e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3ECu;
        goto label_19e3ec;
    }
    ctx->pc = 0x19E3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E3ECu);
        ctx->pc = 0x19E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3E4u;
        // 0x19e3e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E3E4u, 0x19E3ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E3ECu;
label_19e3ec:
    // 0x19e3ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e3f0:
    // 0x19e3f0: 0x10000010  b           . + 4 + (0x10 << 2)
label_19e3f4:
    if (ctx->pc == 0x19E3F4u) {
        ctx->pc = 0x19E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3F0u;
        // 0x19e3f4: 0xae030994  sw          $v1, 0x994($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3F8u;
        goto label_19e3f8;
    }
    ctx->pc = 0x19E3F0u;
    {
        const bool branch_taken_0x19e3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3F0u;
        // 0x19e3f4: 0xae030994  sw          $v1, 0x994($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3f0) {
            ctx->pc = 0x19E434u;
            goto label_19e434;
        }
    }
    ctx->pc = 0x19E3F8u;
label_19e3f8:
    // 0x19e3f8: 0x8e030994  lw          $v1, 0x994($s0)
    ctx->pc = 0x19e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2452)));
label_19e3fc:
    // 0x19e3fc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_19e400:
    if (ctx->pc == 0x19E400u) {
        ctx->pc = 0x19E404u;
        goto label_19e404;
    }
    ctx->pc = 0x19E3FCu;
    {
        const bool branch_taken_0x19e3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e3fc) {
            ctx->pc = 0x19E434u;
            goto label_19e434;
        }
    }
    ctx->pc = 0x19E404u;
label_19e404:
    // 0x19e404: 0x8e04099c  lw          $a0, 0x99C($s0)
    ctx->pc = 0x19e404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2460)));
label_19e408:
    // 0x19e408: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e40c:
    // 0x19e40c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19e40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19e410:
    // 0x19e410: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19e410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19e414:
    // 0x19e414: 0x320f809  jalr        $t9
label_19e418:
    if (ctx->pc == 0x19E418u) {
        ctx->pc = 0x19E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E414u;
        // 0x19e418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E41Cu;
        goto label_19e41c;
    }
    ctx->pc = 0x19E414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E41Cu);
        ctx->pc = 0x19E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E414u;
        // 0x19e418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E414u, 0x19E41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E41Cu;
label_19e41c:
    // 0x19e41c: 0x8e04099c  lw          $a0, 0x99C($s0)
    ctx->pc = 0x19e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2460)));
label_19e420:
    // 0x19e420: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19e420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19e424:
    // 0x19e424: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x19e424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_19e428:
    // 0x19e428: 0x320f809  jalr        $t9
label_19e42c:
    if (ctx->pc == 0x19E42Cu) {
        ctx->pc = 0x19E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E428u;
        // 0x19e42c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E430u;
        goto label_19e430;
    }
    ctx->pc = 0x19E428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E430u);
        ctx->pc = 0x19E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E428u;
        // 0x19e42c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E428u, 0x19E430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E430u;
label_19e430:
    // 0x19e430: 0xae000994  sw          $zero, 0x994($s0)
    ctx->pc = 0x19e430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2452), GPR_U32(ctx, 0));
label_19e434:
    // 0x19e434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19e434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19e438:
    // 0x19e438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19e43c:
    // 0x19e43c: 0x3e00008  jr          $ra
label_19e440:
    if (ctx->pc == 0x19E440u) {
        ctx->pc = 0x19E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E43Cu;
        // 0x19e440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E444u;
        goto label_fallthrough_0x19e43c;
    }
    ctx->pc = 0x19E43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E43Cu;
        // 0x19e440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19e43c:
    ctx->pc = 0x19E444u;
}
