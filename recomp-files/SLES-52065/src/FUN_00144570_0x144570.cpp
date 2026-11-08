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

// Function: FUN_00144570
// Address: 0x144570 - 0x144660
void FUN_00144570_0x144570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144570_0x144570");
#endif

    switch (ctx->pc) {
        case 0x1445b0u: goto label_1445b0;
        case 0x1445c0u: goto label_1445c0;
        case 0x1445d4u: goto label_1445d4;
        case 0x1445e0u: goto label_1445e0;
        case 0x1445e8u: goto label_1445e8;
        case 0x1445fcu: goto label_1445fc;
        case 0x14460cu: goto label_14460c;
        case 0x144620u: goto label_144620;
        case 0x144640u: goto label_144640;
        default: break;
    }

    ctx->pc = 0x144570u;

    // 0x144570: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x144570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x144574: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x144574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x144578: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x144578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14457c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14457cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x144580: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x144580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x144584: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144588: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x144588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14458c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144590: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x144590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144594: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144598: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x144598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x14459c: 0xac930084  sw          $s3, 0x84($a0)
    ctx->pc = 0x14459cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 19));
    // 0x1445a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1445a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445a4: 0xac9300b0  sw          $s3, 0xB0($a0)
    ctx->pc = 0x1445a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 19));
    // 0x1445a8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1445A8u;
    SET_GPR_U32(ctx, 31, 0x1445B0u);
    ctx->pc = 0x1445ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445A8u;
    // 0x1445ac: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1445A8u, 0x1445B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445B0u;
label_1445b0:
    // 0x1445b0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1445b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1445b4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x1445b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1445b8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1445B8u;
    SET_GPR_U32(ctx, 31, 0x1445C0u);
    ctx->pc = 0x1445BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445B8u;
    // 0x1445bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1445B8u, 0x1445C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445C0u;
label_1445c0:
    // 0x1445c0: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x1445c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1445c4: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1445c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1445c8: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x1445c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x1445cc: 0xc05099c  jal         func_142670
    ctx->pc = 0x1445CCu;
    SET_GPR_U32(ctx, 31, 0x1445D4u);
    ctx->pc = 0x1445D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445CCu;
    // 0x1445d0: 0x2512821  addu        $a1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142670u, 0x1445CCu, 0x1445D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445D4u;
label_1445d4:
    // 0x1445d4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1445d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1445d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1445D8u;
    {
        const bool branch_taken_0x1445d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1445DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445D8u;
        // 0x1445dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1445d8) {
            ctx->pc = 0x144628u;
            goto label_144628;
        }
    }
    ctx->pc = 0x1445E0u;
label_1445e0:
    // 0x1445e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1445E0u;
    SET_GPR_U32(ctx, 31, 0x1445E8u);
    ctx->pc = 0x1445E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445E0u;
    // 0x1445e4: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1445E0u, 0x1445E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445E8u;
label_1445e8:
    // 0x1445e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1445e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445ec: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1445ECu;
    {
        const bool branch_taken_0x1445ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1445F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445ECu;
        // 0x1445f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1445ec) {
            ctx->pc = 0x144600u;
            goto label_144600;
        }
    }
    ctx->pc = 0x1445F4u;
    // 0x1445f4: 0xc04ceb4  jal         func_133AD0
    ctx->pc = 0x1445F4u;
    SET_GPR_U32(ctx, 31, 0x1445FCu);
    ctx->pc = 0x133AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133AD0u, 0x1445F4u, 0x1445FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445FCu;
label_1445fc:
    // 0x1445fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1445fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144600:
    // 0x144600: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x144600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144604: 0xc04c558  jal         func_131560
    ctx->pc = 0x144604u;
    SET_GPR_U32(ctx, 31, 0x14460Cu);
    ctx->pc = 0x144608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144604u;
    // 0x144608: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x144604u, 0x14460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14460Cu;
label_14460c:
    // 0x14460c: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x14460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x144610: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x144610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x144614: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x144614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144618: 0xc04cee4  jal         func_133B90
    ctx->pc = 0x144618u;
    SET_GPR_U32(ctx, 31, 0x144620u);
    ctx->pc = 0x14461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144618u;
    // 0x14461c: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133B90u, 0x144618u, 0x144620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144620u;
label_144620:
    // 0x144620: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x144620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x144624: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x144624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_144628:
    // 0x144628: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x144628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14462c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14462cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x144630: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x144630u;
    {
        const bool branch_taken_0x144630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144630u;
        // 0x144634: 0x26640090  addiu       $a0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144630) {
            ctx->pc = 0x1445E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1445e0;
        }
    }
    ctx->pc = 0x144638u;
    // 0x144638: 0xc050910  jal         func_142440
    ctx->pc = 0x144638u;
    SET_GPR_U32(ctx, 31, 0x144640u);
    ctx->pc = 0x142440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142440u, 0x144638u, 0x144640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144640u;
label_144640:
    // 0x144640: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x144640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144644: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x144644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x144648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14464c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14464cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144658: 0x3e00008  jr          $ra
    ctx->pc = 0x144658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144658u;
        // 0x14465c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144660u;
}
