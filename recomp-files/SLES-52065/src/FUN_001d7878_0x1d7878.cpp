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

// Function: FUN_001d7878
// Address: 0x1d7878 - 0x1d7924
void FUN_001d7878_0x1d7878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d7878_0x1d7878");
#endif

    switch (ctx->pc) {
        case 0x1d78d8u: goto label_1d78d8;
        case 0x1d78f0u: goto label_1d78f0;
        case 0x1d7904u: goto label_1d7904;
        default: break;
    }

    ctx->pc = 0x1d7878u;

    // 0x1d7878: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d7878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d787c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d787cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d7880: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1d7880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1d7884: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1d7884u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x1d7888: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1d7888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1d788c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d788cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7890: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1d7890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1d7894: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1d7894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1d7898: 0x8e45054c  lw          $a1, 0x54C($s2)
    ctx->pc = 0x1d7898u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d789c: 0x8c470550  lw          $a3, 0x550($v0)
    ctx->pc = 0x1d789cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x370550u));
    // 0x1d78a0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1d78a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d78a4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d78a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d78a8: 0x90a80002  lbu         $t0, 0x2($a1)
    ctx->pc = 0x1d78a8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1d78ac: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1d78acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1d78b0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d78b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d78b4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1d78b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d78bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d78c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d78c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d78c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d78cc: 0xac4802f0  sw          $t0, 0x2F0($v0)
    ctx->pc = 0x1d78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 752), GPR_U32(ctx, 8));
    // 0x1d78d0: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1D78D0u;
    SET_GPR_U32(ctx, 31, 0x1D78D8u);
    ctx->pc = 0x1D78D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78D0u;
    // 0x1d78d4: 0x8ce50000  lw          $a1, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1D78D0u, 0x1D78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78D8u;
label_1d78d8:
    // 0x1d78d8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d78d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d78dc: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D78DCu;
    {
        const bool branch_taken_0x1d78dc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78DCu;
        // 0x1d78e0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78dc) {
            ctx->pc = 0x1D790Cu;
            goto label_1d790c;
        }
    }
    ctx->pc = 0x1D78E4u;
    // 0x1d78e4: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d78e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d78e8: 0x8e42054c  lw          $v0, 0x54C($s2)
    ctx->pc = 0x1d78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
    // 0x1d78ec: 0x0  nop
    ctx->pc = 0x1d78ecu;
    // NOP
label_1d78f0:
    // 0x1d78f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d78f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d78f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d78f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d78f8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d78f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d78fc: 0xc07755a  jal         func_1DD568
    ctx->pc = 0x1D78FCu;
    SET_GPR_U32(ctx, 31, 0x1D7904u);
    ctx->pc = 0x1D7900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78FCu;
    // 0x1d7900: 0x90450002  lbu         $a1, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD568u, 0x1D78FCu, 0x1D7904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7904u;
label_1d7904:
    // 0x1d7904: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7904u;
    {
        const bool branch_taken_0x1d7904 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7904u;
        // 0x1d7908: 0x8e42054c  lw          $v0, 0x54C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7904) {
            ctx->pc = 0x1D78F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d78f0;
        }
    }
    ctx->pc = 0x1D790Cu;
label_1d790c:
    // 0x1d790c: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d790cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d7910: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d7910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d7914: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1d7914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d7918: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1d7918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d791c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D791Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D791Cu;
        // 0x1d7920: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D791Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7924u;
}
