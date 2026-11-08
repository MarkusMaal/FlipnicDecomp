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

// Function: FUN_001d77d0
// Address: 0x1d77d0 - 0x1d7874
void FUN_001d77d0_0x1d77d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d77d0_0x1d77d0");
#endif

    switch (ctx->pc) {
        case 0x1d782cu: goto label_1d782c;
        case 0x1d7840u: goto label_1d7840;
        case 0x1d7854u: goto label_1d7854;
        default: break;
    }

    ctx->pc = 0x1d77d0u;

    // 0x1d77d0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d77d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d77d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d77d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d77d8: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1d77d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1d77dc: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1d77dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x1d77e0: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1d77e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1d77e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d77e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d77e8: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1d77e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1d77ec: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1d77ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1d77f0: 0x8e42054c  lw          $v0, 0x54C($s2)
    ctx->pc = 0x1d77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d77f4: 0x8ca70550  lw          $a3, 0x550($a1)
    ctx->pc = 0x1d77f4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x370550u));
    // 0x1d77f8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1d77f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d77fc: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x1d77fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1d7800: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1d7800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1d7804: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d7804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d7808: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1d7808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d780c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d780cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7810: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7818: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d781c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d7820: 0xac4502f8  sw          $a1, 0x2F8($v0)
    ctx->pc = 0x1d7820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 760), GPR_U32(ctx, 5));
    // 0x1d7824: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1D7824u;
    SET_GPR_U32(ctx, 31, 0x1D782Cu);
    ctx->pc = 0x1D7828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7824u;
    // 0x1d7828: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1D7824u, 0x1D782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D782Cu;
label_1d782c:
    // 0x1d782c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d782cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d7830: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7830u;
    {
        const bool branch_taken_0x1d7830 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7830u;
        // 0x1d7834: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7830) {
            ctx->pc = 0x1D785Cu;
            goto label_1d785c;
        }
    }
    ctx->pc = 0x1D7838u;
    // 0x1d7838: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d7838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d783c: 0x8e42054c  lw          $v0, 0x54C($s2)
    ctx->pc = 0x1d783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
label_1d7840:
    // 0x1d7840: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d7840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d7844: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d7844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7848: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d7848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d784c: 0xc07758e  jal         func_1DD638
    ctx->pc = 0x1D784Cu;
    SET_GPR_U32(ctx, 31, 0x1D7854u);
    ctx->pc = 0x1D7850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D784Cu;
    // 0x1d7850: 0x90450002  lbu         $a1, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD638u, 0x1D784Cu, 0x1D7854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7854u;
label_1d7854:
    // 0x1d7854: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7854u;
    {
        const bool branch_taken_0x1d7854 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7854u;
        // 0x1d7858: 0x8e42054c  lw          $v0, 0x54C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7854) {
            ctx->pc = 0x1D7840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7840;
        }
    }
    ctx->pc = 0x1D785Cu;
label_1d785c:
    // 0x1d785c: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d785cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d7860: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d7860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d7864: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1d7864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d7868: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1d7868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d786c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D786Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D786Cu;
        // 0x1d7870: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D786Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7874u;
}
