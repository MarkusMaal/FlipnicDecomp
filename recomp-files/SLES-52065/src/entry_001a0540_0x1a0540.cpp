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

// Function: entry_001a0540
// Address: 0x1a0540 - 0x1a05b0
void entry_001a0540_0x1a0540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0540_0x1a0540");
#endif

    switch (ctx->pc) {
        case 0x1a0560u: goto label_1a0560;
        case 0x1a0568u: goto label_1a0568;
        case 0x1a0580u: goto label_1a0580;
        case 0x1a059cu: goto label_1a059c;
        case 0x1a05a8u: goto label_1a05a8;
        default: break;
    }

    ctx->pc = 0x1a0540u;

label_1a0540:
    // 0x1a0540: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x1a0540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a0544:
    // 0x1a0544: 0x26500664  addiu       $s0, $s2, 0x664
    ctx->pc = 0x1a0544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1636));
label_1a0548:
    // 0x1a0548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a054c:
    // 0x1a054c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a054cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a0550:
    // 0x1a0550: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1a0550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0554:
    // 0x1a0554: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a0554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a0558:
    // 0x1a0558: 0xc064f7c  jal         func_193DF0
label_1a055c:
    if (ctx->pc == 0x1A055Cu) {
        ctx->pc = 0x1A055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0558u;
        // 0x1a055c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0560u;
        goto label_1a0560;
    }
    ctx->pc = 0x1A0558u;
    SET_GPR_U32(ctx, 31, 0x1A0560u);
    ctx->pc = 0x1A055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0558u;
    // 0x1a055c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1A0558u, 0x1A0560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0560u;
label_1a0560:
    // 0x1a0560: 0xc04bf44  jal         func_12FD10
label_1a0564:
    if (ctx->pc == 0x1A0564u) {
        ctx->pc = 0x1A0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0560u;
        // 0x1a0564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0568u;
        goto label_1a0568;
    }
    ctx->pc = 0x1A0560u;
    SET_GPR_U32(ctx, 31, 0x1A0568u);
    ctx->pc = 0x1A0564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0560u;
    // 0x1a0564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x1A0560u, 0x1A0568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0568u;
label_1a0568:
    // 0x1a0568: 0xae420670  sw          $v0, 0x670($s2)
    ctx->pc = 0x1a0568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1648), GPR_U32(ctx, 2));
label_1a056c:
    // 0x1a056c: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x1a056cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a0570:
    // 0x1a0570: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a0570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a0574:
    // 0x1a0574: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a0574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a0578:
    // 0x1a0578: 0x320f809  jalr        $t9
label_1a057c:
    if (ctx->pc == 0x1A057Cu) {
        ctx->pc = 0x1A057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0578u;
        // 0x1a057c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0580u;
        goto label_1a0580;
    }
    ctx->pc = 0x1A0578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0580u);
        ctx->pc = 0x1A057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0578u;
        // 0x1a057c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0578u, 0x1A0580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0580u;
label_1a0580:
    // 0x1a0580: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x1a0580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a0584:
    // 0x1a0584: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x1a0584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a0588:
    // 0x1a0588: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a0588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a058c:
    // 0x1a058c: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1a058cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a0590:
    // 0x1a0590: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a0590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a0594:
    // 0x1a0594: 0x320f809  jalr        $t9
label_1a0598:
    if (ctx->pc == 0x1A0598u) {
        ctx->pc = 0x1A0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0594u;
        // 0x1a0598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A059Cu;
        goto label_1a059c;
    }
    ctx->pc = 0x1A0594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A059Cu);
        ctx->pc = 0x1A0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0594u;
        // 0x1a0598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0594u, 0x1A059Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A059Cu;
label_1a059c:
    // 0x1a059c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a059cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a05a0:
    // 0x1a05a0: 0xc063e14  jal         func_18F850
label_1a05a4:
    if (ctx->pc == 0x1A05A4u) {
        ctx->pc = 0x1A05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05A0u;
        // 0x1a05a4: 0xae400328  sw          $zero, 0x328($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05A8u;
        goto label_1a05a8;
    }
    ctx->pc = 0x1A05A0u;
    SET_GPR_U32(ctx, 31, 0x1A05A8u);
    ctx->pc = 0x1A05A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A05A0u;
    // 0x1a05a4: 0xae400328  sw          $zero, 0x328($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A05A0u, 0x1A05A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A05A8u;
label_1a05a8:
    // 0x1a05a8: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_1a05ac:
    if (ctx->pc == 0x1A05ACu) {
        ctx->pc = 0x1A05B0u;
        goto label_fallthrough_0x1a05a8;
    }
    ctx->pc = 0x1A05A8u;
    {
        const bool branch_taken_0x1a05a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a05a8) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
label_fallthrough_0x1a05a8:
    ctx->pc = 0x1A05B0u;
}
