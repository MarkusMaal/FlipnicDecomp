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

// Function: entry_001306b4
// Address: 0x1306b4 - 0x130750
void entry_001306b4_0x1306b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001306b4_0x1306b4");
#endif

    switch (ctx->pc) {
        case 0x1306bcu: goto label_1306bc;
        case 0x1306e4u: goto label_1306e4;
        case 0x1306f0u: goto label_1306f0;
        case 0x1306fcu: goto label_1306fc;
        case 0x130704u: goto label_130704;
        case 0x13070cu: goto label_13070c;
        case 0x130718u: goto label_130718;
        case 0x13072cu: goto label_13072c;
        case 0x130748u: goto label_130748;
        default: break;
    }

    ctx->pc = 0x1306b4u;

label_1306b4:
    // 0x1306b4: 0xc0806b0  jal         func_201AC0
label_1306b8:
    if (ctx->pc == 0x1306B8u) {
        ctx->pc = 0x1306B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306B4u;
        // 0x1306b8: 0x26250128  addiu       $a1, $s1, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306BCu;
        goto label_1306bc;
    }
    ctx->pc = 0x1306B4u;
    SET_GPR_U32(ctx, 31, 0x1306BCu);
    ctx->pc = 0x1306B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306B4u;
    // 0x1306b8: 0x26250128  addiu       $a1, $s1, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1306B4u, 0x1306BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306BCu;
label_1306bc:
    // 0x1306bc: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_1306c0:
    if (ctx->pc == 0x1306C0u) {
        ctx->pc = 0x1306C4u;
        goto label_1306c4;
    }
    ctx->pc = 0x1306BCu;
    {
        const bool branch_taken_0x1306bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1306bc) {
            ctx->pc = 0x130774u;
            return;
        }
    }
    ctx->pc = 0x1306C4u;
label_1306c4:
    // 0x1306c4: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1306c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1306c8:
    // 0x1306c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1306c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1306cc:
    // 0x1306cc: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1306ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_1306d0:
    // 0x1306d0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1306d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1306d4:
    // 0x1306d4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_1306d8:
    if (ctx->pc == 0x1306D8u) {
        ctx->pc = 0x1306DCu;
        goto label_1306dc;
    }
    ctx->pc = 0x1306D4u;
    {
        const bool branch_taken_0x1306d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1306d4) {
            ctx->pc = 0x130750u;
            return;
        }
    }
    ctx->pc = 0x1306DCu;
label_1306dc:
    // 0x1306dc: 0xc04c254  jal         func_130950
label_1306e0:
    if (ctx->pc == 0x1306E0u) {
        ctx->pc = 0x1306E4u;
        goto label_1306e4;
    }
    ctx->pc = 0x1306DCu;
    SET_GPR_U32(ctx, 31, 0x1306E4u);
    ctx->pc = 0x130950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130950u, 0x1306DCu, 0x1306E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306E4u;
label_1306e4:
    // 0x1306e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1306e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1306e8:
    // 0x1306e8: 0xc080702  jal         func_201C08
label_1306ec:
    if (ctx->pc == 0x1306ECu) {
        ctx->pc = 0x1306ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306E8u;
        // 0x1306ec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306F0u;
        goto label_1306f0;
    }
    ctx->pc = 0x1306E8u;
    SET_GPR_U32(ctx, 31, 0x1306F0u);
    ctx->pc = 0x1306ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306E8u;
    // 0x1306ec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1306E8u, 0x1306F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306F0u;
label_1306f0:
    // 0x1306f0: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1306f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1306f4:
    // 0x1306f4: 0xc080664  jal         func_201990
label_1306f8:
    if (ctx->pc == 0x1306F8u) {
        ctx->pc = 0x1306F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306F4u;
        // 0x1306f8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306FCu;
        goto label_1306fc;
    }
    ctx->pc = 0x1306F4u;
    SET_GPR_U32(ctx, 31, 0x1306FCu);
    ctx->pc = 0x1306F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306F4u;
    // 0x1306f8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1306F4u, 0x1306FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306FCu;
label_1306fc:
    // 0x1306fc: 0xc080d98  jal         func_203660
label_130700:
    if (ctx->pc == 0x130700u) {
        ctx->pc = 0x130700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306FCu;
        // 0x130700: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130704u;
        goto label_130704;
    }
    ctx->pc = 0x1306FCu;
    SET_GPR_U32(ctx, 31, 0x130704u);
    ctx->pc = 0x130700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306FCu;
    // 0x130700: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x1306FCu, 0x130704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130704u;
label_130704:
    // 0x130704: 0xc047a3c  jal         func_11E8F0
label_130708:
    if (ctx->pc == 0x130708u) {
        ctx->pc = 0x13070Cu;
        goto label_13070c;
    }
    ctx->pc = 0x130704u;
    SET_GPR_U32(ctx, 31, 0x13070Cu);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x130704u, 0x13070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13070Cu;
label_13070c:
    // 0x13070c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13070cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_130710:
    // 0x130710: 0xc046c14  jal         func_11B050
label_130714:
    if (ctx->pc == 0x130714u) {
        ctx->pc = 0x130714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130710u;
        // 0x130714: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130718u;
        goto label_130718;
    }
    ctx->pc = 0x130710u;
    SET_GPR_U32(ctx, 31, 0x130718u);
    ctx->pc = 0x130714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130710u;
    // 0x130714: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x130710u, 0x130718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130718u;
label_130718:
    // 0x130718: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x130718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13071c:
    // 0x13071c: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x13071cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_130720:
    // 0x130720: 0x27a6045c  addiu       $a2, $sp, 0x45C
    ctx->pc = 0x130720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1116));
label_130724:
    // 0x130724: 0xc04c430  jal         func_1310C0
label_130728:
    if (ctx->pc == 0x130728u) {
        ctx->pc = 0x130728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130724u;
        // 0x130728: 0xafb0045c  sw          $s0, 0x45C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13072Cu;
        goto label_13072c;
    }
    ctx->pc = 0x130724u;
    SET_GPR_U32(ctx, 31, 0x13072Cu);
    ctx->pc = 0x130728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130724u;
    // 0x130728: 0xafb0045c  sw          $s0, 0x45C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1116), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1310C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1310C0u, 0x130724u, 0x13072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13072Cu;
label_13072c:
    // 0x13072c: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_130730:
    if (ctx->pc == 0x130730u) {
        ctx->pc = 0x130734u;
        goto label_130734;
    }
    ctx->pc = 0x13072Cu;
    {
        const bool branch_taken_0x13072c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13072c) {
            ctx->pc = 0x13079Cu;
            return;
        }
    }
    ctx->pc = 0x130734u;
label_130734:
    // 0x130734: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x130734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_130738:
    // 0x130738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13073c:
    // 0x13073c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x13073cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_130740:
    // 0x130740: 0x320f809  jalr        $t9
label_130744:
    if (ctx->pc == 0x130744u) {
        ctx->pc = 0x130744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130740u;
        // 0x130744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130748u;
        goto label_130748;
    }
    ctx->pc = 0x130740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x130748u);
        ctx->pc = 0x130744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130740u;
        // 0x130744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130740u, 0x130748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x130748u;
label_130748:
    // 0x130748: 0x10000015  b           . + 4 + (0x15 << 2)
label_13074c:
    if (ctx->pc == 0x13074Cu) {
        ctx->pc = 0x13074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130748u;
        // 0x13074c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130750u;
        goto label_fallthrough_0x130748;
    }
    ctx->pc = 0x130748u;
    {
        const bool branch_taken_0x130748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130748u;
        // 0x13074c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130748) {
            ctx->pc = 0x1307A0u;
            return;
        }
    }
label_fallthrough_0x130748:
    ctx->pc = 0x130750u;
}
