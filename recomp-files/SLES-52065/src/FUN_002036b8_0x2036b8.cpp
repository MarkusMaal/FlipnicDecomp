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

// Function: FUN_002036b8
// Address: 0x2036b8 - 0x2037a8
void FUN_002036b8_0x2036b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002036b8_0x2036b8");
#endif

    switch (ctx->pc) {
        case 0x2036f4u: goto label_2036f4;
        case 0x203718u: goto label_203718;
        case 0x203754u: goto label_203754;
        case 0x203778u: goto label_203778;
        default: break;
    }

    ctx->pc = 0x2036b8u;

    // 0x2036b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2036b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2036bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2036bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2036c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2036c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2036c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2036c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2036c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2036cc: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x2036ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x2036d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2036d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2036d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2036d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2036d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2036d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2036dc: 0x8e700030  lw          $s0, 0x30($s3)
    ctx->pc = 0x2036dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2036e0: 0x56020017  bnel        $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2036E0u;
    {
        const bool branch_taken_0x2036e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2036e0) {
            ctx->pc = 0x2036E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2036E0u;
            // 0x2036e4: 0x8e720034  lw          $s2, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203740u;
            goto label_203740;
        }
    }
    ctx->pc = 0x2036E8u;
    // 0x2036e8: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x2036e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2036ec: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x2036ECu;
    SET_GPR_U32(ctx, 31, 0x2036F4u);
    ctx->pc = 0x2036F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036ECu;
    // 0x2036f0: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x2036ECu, 0x2036F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036F4u;
label_2036f4:
    // 0x2036f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2036f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036f8: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2036F8u;
    {
        const bool branch_taken_0x2036f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036F8u;
        // 0x2036fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036f8) {
            ctx->pc = 0x203788u;
            goto label_203788;
        }
    }
    ctx->pc = 0x203700u;
    // 0x203700: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x203700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x203704: 0xae710030  sw          $s1, 0x30($s3)
    ctx->pc = 0x203704u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 17));
    // 0x203708: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x203708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
    // 0x20370c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20370cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203710: 0x263103fd  addiu       $s1, $s1, 0x3FD
    ctx->pc = 0x203710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1021));
    // 0x203714: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x203714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_203718:
    // 0x203718: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x203718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x20371c: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x20371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x203720: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x203720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203724: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x203724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x203728: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x203728u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x20372c: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20372Cu;
    {
        const bool branch_taken_0x20372c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x20372c) {
            ctx->pc = 0x203718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203718;
        }
    }
    ctx->pc = 0x203734u;
    // 0x203734: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x203734u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x203738: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x203738u;
    {
        const bool branch_taken_0x203738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203738u;
        // 0x20373c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203738) {
            ctx->pc = 0x203788u;
            goto label_203788;
        }
    }
    ctx->pc = 0x203740u;
label_203740:
    // 0x203740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203744: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x203744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x203748: 0x12a040  sll         $s4, $s2, 1
    ctx->pc = 0x203748u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x20374c: 0xc0802ce  jal         func_200B38
    ctx->pc = 0x20374Cu;
    SET_GPR_U32(ctx, 31, 0x203754u);
    ctx->pc = 0x203750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20374Cu;
    // 0x203750: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200B38u, 0x20374Cu, 0x203754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203754u;
label_203754:
    // 0x203754: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x203754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203758: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203758u;
    {
        const bool branch_taken_0x203758 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203758u;
        // 0x20375c: 0x2328021  addu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203758) {
            ctx->pc = 0x203768u;
            goto label_203768;
        }
    }
    ctx->pc = 0x203760u;
    // 0x203760: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x203760u;
    {
        const bool branch_taken_0x203760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203760u;
        // 0x203764: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203760) {
            ctx->pc = 0x203788u;
            goto label_203788;
        }
    }
    ctx->pc = 0x203768u;
label_203768:
    // 0x203768: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x203768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20376c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20376cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203770: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x203770u;
    SET_GPR_U32(ctx, 31, 0x203778u);
    ctx->pc = 0x203774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203770u;
    // 0x203774: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x203770u, 0x203778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203778u;
label_203778:
    // 0x203778: 0xae740034  sw          $s4, 0x34($s3)
    ctx->pc = 0x203778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 20));
    // 0x20377c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20377cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203780: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x203780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x203784: 0xae710030  sw          $s1, 0x30($s3)
    ctx->pc = 0x203784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 17));
label_203788:
    // 0x203788: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x203788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20378c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x20378cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203790: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x203790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203794: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x203794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203798: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x203798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20379c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20379cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2037a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2037A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2037A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037A0u;
        // 0x2037a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2037A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2037A8u;
}
