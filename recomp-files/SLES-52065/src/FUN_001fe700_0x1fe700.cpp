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

// Function: FUN_001fe700
// Address: 0x1fe700 - 0x1fe794
void FUN_001fe700_0x1fe700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fe700_0x1fe700");
#endif

    switch (ctx->pc) {
        case 0x1fe700u: goto label_1fe700;
        case 0x1fe704u: goto label_1fe704;
        case 0x1fe708u: goto label_1fe708;
        case 0x1fe70cu: goto label_1fe70c;
        case 0x1fe710u: goto label_1fe710;
        case 0x1fe714u: goto label_1fe714;
        case 0x1fe718u: goto label_1fe718;
        case 0x1fe71cu: goto label_1fe71c;
        case 0x1fe720u: goto label_1fe720;
        case 0x1fe724u: goto label_1fe724;
        case 0x1fe728u: goto label_1fe728;
        case 0x1fe72cu: goto label_1fe72c;
        case 0x1fe730u: goto label_1fe730;
        case 0x1fe734u: goto label_1fe734;
        case 0x1fe738u: goto label_1fe738;
        case 0x1fe73cu: goto label_1fe73c;
        case 0x1fe740u: goto label_1fe740;
        case 0x1fe744u: goto label_1fe744;
        case 0x1fe748u: goto label_1fe748;
        case 0x1fe74cu: goto label_1fe74c;
        case 0x1fe750u: goto label_1fe750;
        case 0x1fe754u: goto label_1fe754;
        case 0x1fe758u: goto label_1fe758;
        case 0x1fe75cu: goto label_1fe75c;
        case 0x1fe760u: goto label_1fe760;
        case 0x1fe764u: goto label_1fe764;
        case 0x1fe768u: goto label_1fe768;
        case 0x1fe76cu: goto label_1fe76c;
        case 0x1fe770u: goto label_1fe770;
        case 0x1fe774u: goto label_1fe774;
        case 0x1fe778u: goto label_1fe778;
        case 0x1fe77cu: goto label_1fe77c;
        case 0x1fe780u: goto label_1fe780;
        case 0x1fe784u: goto label_1fe784;
        case 0x1fe788u: goto label_1fe788;
        case 0x1fe78cu: goto label_1fe78c;
        case 0x1fe790u: goto label_1fe790;
        default: break;
    }

    ctx->pc = 0x1fe700u;

label_1fe700:
    // 0x1fe700: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fe700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1fe704:
    // 0x1fe704: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1fe704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1fe708:
    // 0x1fe708: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1fe708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1fe70c:
    // 0x1fe70c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fe70cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe710:
    // 0x1fe710: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fe710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1fe714:
    // 0x1fe714: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fe714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe718:
    // 0x1fe718: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fe718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1fe71c:
    // 0x1fe71c: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x1fe71cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_1fe720:
    // 0x1fe720: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fe720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1fe724:
    // 0x1fe724: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_1fe728:
    if (ctx->pc == 0x1FE728u) {
        ctx->pc = 0x1FE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE724u;
        // 0x1fe728: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE72Cu;
        goto label_1fe72c;
    }
    ctx->pc = 0x1FE724u;
    {
        const bool branch_taken_0x1fe724 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE724u;
        // 0x1fe728: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe724) {
            ctx->pc = 0x1FE770u;
            goto label_1fe770;
        }
    }
    ctx->pc = 0x1FE72Cu;
label_1fe72c:
    // 0x1fe72c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1fe72cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1fe730:
    // 0x1fe730: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fe730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1fe734:
    // 0x1fe734: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_1fe738:
    if (ctx->pc == 0x1FE738u) {
        ctx->pc = 0x1FE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE734u;
        // 0x1fe738: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE73Cu;
        goto label_1fe73c;
    }
    ctx->pc = 0x1FE734u;
    {
        const bool branch_taken_0x1fe734 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1FE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE734u;
        // 0x1fe738: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe734) {
            ctx->pc = 0x1FE764u;
            goto label_1fe764;
        }
    }
    ctx->pc = 0x1FE73Cu;
label_1fe73c:
    // 0x1fe73c: 0x0  nop
    ctx->pc = 0x1fe73cu;
    // NOP
label_1fe740:
    // 0x1fe740: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x1fe740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1fe744:
    // 0x1fe744: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1fe748:
    if (ctx->pc == 0x1FE748u) {
        ctx->pc = 0x1FE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE744u;
        // 0x1fe748: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE74Cu;
        goto label_1fe74c;
    }
    ctx->pc = 0x1FE744u;
    {
        const bool branch_taken_0x1fe744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe744) {
            ctx->pc = 0x1FE748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE744u;
            // 0x1fe748: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE75Cu;
            goto label_1fe75c;
        }
    }
    ctx->pc = 0x1FE74Cu;
label_1fe74c:
    // 0x1fe74c: 0x280f809  jalr        $s4
label_1fe750:
    if (ctx->pc == 0x1FE750u) {
        ctx->pc = 0x1FE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE74Cu;
        // 0x1fe750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE754u;
        goto label_1fe754;
    }
    ctx->pc = 0x1FE74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x1FE754u);
        ctx->pc = 0x1FE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE74Cu;
        // 0x1fe750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE74Cu, 0x1FE754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE754u;
label_1fe754:
    // 0x1fe754: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1fe754u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_1fe758:
    // 0x1fe758: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fe758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1fe75c:
    // 0x1fe75c: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_1fe760:
    if (ctx->pc == 0x1FE760u) {
        ctx->pc = 0x1FE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE75Cu;
        // 0x1fe760: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE764u;
        goto label_1fe764;
    }
    ctx->pc = 0x1FE75Cu;
    {
        const bool branch_taken_0x1fe75c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1FE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE75Cu;
        // 0x1fe760: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe75c) {
            ctx->pc = 0x1FE740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe740;
        }
    }
    ctx->pc = 0x1FE764u;
label_1fe764:
    // 0x1fe764: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1fe764u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fe768:
    // 0x1fe768: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_1fe76c:
    if (ctx->pc == 0x1FE76Cu) {
        ctx->pc = 0x1FE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE768u;
        // 0x1fe76c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE770u;
        goto label_1fe770;
    }
    ctx->pc = 0x1FE768u;
    {
        const bool branch_taken_0x1fe768 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe768) {
            ctx->pc = 0x1FE76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE768u;
            // 0x1fe76c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe730;
        }
    }
    ctx->pc = 0x1FE770u;
label_1fe770:
    // 0x1fe770: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1fe770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe774:
    // 0x1fe774: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fe774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fe778:
    // 0x1fe778: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1fe778u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fe77c:
    // 0x1fe77c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1fe77cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fe780:
    // 0x1fe780: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fe780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe784:
    // 0x1fe784: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fe784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe788:
    // 0x1fe788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe78c:
    // 0x1fe78c: 0x3e00008  jr          $ra
label_1fe790:
    if (ctx->pc == 0x1FE790u) {
        ctx->pc = 0x1FE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE78Cu;
        // 0x1fe790: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE794u;
        goto label_fallthrough_0x1fe78c;
    }
    ctx->pc = 0x1FE78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE78Cu;
        // 0x1fe790: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fe78c:
    ctx->pc = 0x1FE794u;
}
