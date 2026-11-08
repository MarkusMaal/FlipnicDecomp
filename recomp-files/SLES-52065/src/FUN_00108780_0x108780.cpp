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

// Function: FUN_00108780
// Address: 0x108780 - 0x1089b8
void FUN_00108780_0x108780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00108780_0x108780");
#endif

    switch (ctx->pc) {
        case 0x10879cu: goto label_10879c;
        case 0x1087a4u: goto label_1087a4;
        case 0x1087c4u: goto label_1087c4;
        case 0x1087ccu: goto label_1087cc;
        case 0x1087d4u: goto label_1087d4;
        case 0x1087e8u: goto label_1087e8;
        case 0x1087f0u: goto label_1087f0;
        case 0x108820u: goto label_108820;
        case 0x10882cu: goto label_10882c;
        case 0x108858u: goto label_108858;
        case 0x10886cu: goto label_10886c;
        case 0x108900u: goto label_108900;
        case 0x108908u: goto label_108908;
        case 0x10891cu: goto label_10891c;
        case 0x108928u: goto label_108928;
        case 0x108930u: goto label_108930;
        case 0x10893cu: goto label_10893c;
        case 0x108950u: goto label_108950;
        case 0x10895cu: goto label_10895c;
        case 0x10896cu: goto label_10896c;
        case 0x108974u: goto label_108974;
        case 0x108988u: goto label_108988;
        case 0x108998u: goto label_108998;
        case 0x1089a4u: goto label_1089a4;
        default: break;
    }

    ctx->pc = 0x108780u;

    // 0x108780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x108784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x108788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x108788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10878c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10878cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x108790: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x108790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x108794: 0xc05ae78  jal         func_16B9E0
    ctx->pc = 0x108794u;
    SET_GPR_U32(ctx, 31, 0x10879Cu);
    ctx->pc = 0x108798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108794u;
    // 0x108798: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9E0u, 0x108794u, 0x10879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10879Cu;
label_10879c:
    // 0x10879c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x10879Cu;
    SET_GPR_U32(ctx, 31, 0x1087A4u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x10879Cu, 0x1087A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087A4u;
label_1087a4:
    // 0x1087a4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1087a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1087a8: 0xc42c7500  lwc1        $f12, 0x7500($at)
    ctx->pc = 0x1087a8u;
    { uint32_t bits = FAST_READ32(0x367500u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1087ac: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1087acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1087b0: 0xc42d7504  lwc1        $f13, 0x7504($at)
    ctx->pc = 0x1087b0u;
    { uint32_t bits = FAST_READ32(0x367504u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1087b4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1087b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1087b8: 0xc42e7508  lwc1        $f14, 0x7508($at)
    ctx->pc = 0x1087b8u;
    { uint32_t bits = FAST_READ32(0x367508u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1087bc: 0xc04a00c  jal         func_128030
    ctx->pc = 0x1087BCu;
    SET_GPR_U32(ctx, 31, 0x1087C4u);
    ctx->pc = 0x1087C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087BCu;
    // 0x1087c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128030u, 0x1087BCu, 0x1087C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087C4u;
label_1087c4:
    // 0x1087c4: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1087C4u;
    SET_GPR_U32(ctx, 31, 0x1087CCu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1087C4u, 0x1087CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087CCu;
label_1087cc:
    // 0x1087cc: 0xc049f08  jal         func_127C20
    ctx->pc = 0x1087CCu;
    SET_GPR_U32(ctx, 31, 0x1087D4u);
    ctx->pc = 0x1087D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087CCu;
    // 0x1087d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C20u, 0x1087CCu, 0x1087D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087D4u;
label_1087d4:
    // 0x1087d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1087d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1087d8: 0x10430072  beq         $v0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x1087D8u;
    {
        const bool branch_taken_0x1087d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1087d8) {
            ctx->pc = 0x1089A4u;
            goto label_1089a4;
        }
    }
    ctx->pc = 0x1087E0u;
    // 0x1087e0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1087E0u;
    SET_GPR_U32(ctx, 31, 0x1087E8u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1087E0u, 0x1087E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087E8u;
label_1087e8:
    // 0x1087e8: 0xc049f08  jal         func_127C20
    ctx->pc = 0x1087E8u;
    SET_GPR_U32(ctx, 31, 0x1087F0u);
    ctx->pc = 0x1087ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087E8u;
    // 0x1087ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C20u, 0x1087E8u, 0x1087F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087F0u;
label_1087f0:
    // 0x1087f0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1087f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1087f4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1087F4u;
    {
        const bool branch_taken_0x1087f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1087f4) {
            ctx->pc = 0x108804u;
            goto label_108804;
        }
    }
    ctx->pc = 0x1087FCu;
    // 0x1087fc: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1087FCu;
    {
        const bool branch_taken_0x1087fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087FCu;
        // 0x108800: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087fc) {
            ctx->pc = 0x1089A8u;
            goto label_1089a8;
        }
    }
    ctx->pc = 0x108804u;
label_108804:
    // 0x108804: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x108804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x108808: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x108808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10880c: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x10880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x108810: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x108810u;
    {
        const bool branch_taken_0x108810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x108814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108810u;
        // 0x108814: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108810) {
            ctx->pc = 0x108838u;
            goto label_108838;
        }
    }
    ctx->pc = 0x108818u;
    // 0x108818: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108818u;
    SET_GPR_U32(ctx, 31, 0x108820u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108818u, 0x108820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108820u;
label_108820:
    // 0x108820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108824: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x108824u;
    SET_GPR_U32(ctx, 31, 0x10882Cu);
    ctx->pc = 0x108828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108824u;
    // 0x108828: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x108824u, 0x10882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10882Cu;
label_10882c:
    // 0x10882c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x10882Cu;
    {
        const bool branch_taken_0x10882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10882c) {
            ctx->pc = 0x1089A4u;
            goto label_1089a4;
        }
    }
    ctx->pc = 0x108834u;
    // 0x108834: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x108834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108838:
    // 0x108838: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x108838u;
    {
        const bool branch_taken_0x108838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x108838) {
            ctx->pc = 0x1089A4u;
            goto label_1089a4;
        }
    }
    ctx->pc = 0x108840u;
    // 0x108840: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x108840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x108844: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x108844u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x108848: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x108848u;
    {
        const bool branch_taken_0x108848 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x10884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108848u;
        // 0x10884c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108848) {
            ctx->pc = 0x108864u;
            goto label_108864;
        }
    }
    ctx->pc = 0x108850u;
    // 0x108850: 0xc057f8c  jal         func_15FE30
    ctx->pc = 0x108850u;
    SET_GPR_U32(ctx, 31, 0x108858u);
    ctx->pc = 0x108854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108850u;
    // 0x108854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FE30u, 0x108850u, 0x108858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108858u;
label_108858:
    // 0x108858: 0x4400052  bltz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x108858u;
    {
        const bool branch_taken_0x108858 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x108858) {
            ctx->pc = 0x1089A4u;
            goto label_1089a4;
        }
    }
    ctx->pc = 0x108860u;
    // 0x108860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108864:
    // 0x108864: 0xc0423bc  jal         func_108EF0
    ctx->pc = 0x108864u;
    SET_GPR_U32(ctx, 31, 0x10886Cu);
    ctx->pc = 0x108EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108EF0u, 0x108864u, 0x10886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10886Cu;
label_10886c:
    // 0x10886c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x10886cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x108870: 0x1420004c  bnez        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x108870u;
    {
        const bool branch_taken_0x108870 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x108870) {
            ctx->pc = 0x1089A4u;
            goto label_1089a4;
        }
    }
    ctx->pc = 0x108878u;
    // 0x108878: 0x8e242cd0  lw          $a0, 0x2CD0($s1)
    ctx->pc = 0x108878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11472)));
    // 0x10887c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10887Cu;
    {
        const bool branch_taken_0x10887c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x108880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10887Cu;
        // 0x108880: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10887c) {
            ctx->pc = 0x108890u;
            goto label_108890;
        }
    }
    ctx->pc = 0x108884u;
    // 0x108884: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x108884u;
    {
        const bool branch_taken_0x108884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108884u;
        // 0x108888: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108884) {
            ctx->pc = 0x1088A8u;
            goto label_1088a8;
        }
    }
    ctx->pc = 0x10888Cu;
    // 0x10888c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x10888cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_108890:
    // 0x108890: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x108890u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x108894: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x108894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x108898: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x108898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10889c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10889cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1088a0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1088a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1088a4: 0x24700040  addiu       $s0, $v1, 0x40
    ctx->pc = 0x1088a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1088a8:
    // 0x1088a8: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1088A8u;
    {
        const bool branch_taken_0x1088a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1088a8) {
            ctx->pc = 0x1089A4u;
            goto label_1089a4;
        }
    }
    ctx->pc = 0x1088B0u;
    // 0x1088b0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1088B0u;
    {
        const bool branch_taken_0x1088b0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1088B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088B0u;
        // 0x1088b4: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088b0) {
            ctx->pc = 0x1088C4u;
            goto label_1088c4;
        }
    }
    ctx->pc = 0x1088B8u;
    // 0x1088b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1088B8u;
    {
        const bool branch_taken_0x1088b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1088BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088B8u;
        // 0x1088bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088b8) {
            ctx->pc = 0x1088DCu;
            goto label_1088dc;
        }
    }
    ctx->pc = 0x1088C0u;
    // 0x1088c0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1088c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1088c4:
    // 0x1088c4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1088c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1088c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1088c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1088cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1088ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1088d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1088d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1088d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1088d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1088d8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1088d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1088dc:
    // 0x1088dc: 0x844301e8  lh          $v1, 0x1E8($v0)
    ctx->pc = 0x1088dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x1088e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1088e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1088e4: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1088E4u;
    {
        const bool branch_taken_0x1088e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1088e4) {
            ctx->pc = 0x108990u;
            goto label_108990;
        }
    }
    ctx->pc = 0x1088ECu;
    // 0x1088ec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1088ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1088f0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1088F0u;
    {
        const bool branch_taken_0x1088f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1088f0) {
            ctx->pc = 0x108964u;
            goto label_108964;
        }
    }
    ctx->pc = 0x1088F8u;
    // 0x1088f8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1088F8u;
    SET_GPR_U32(ctx, 31, 0x108900u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1088F8u, 0x108900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108900u;
label_108900:
    // 0x108900: 0xc049f08  jal         func_127C20
    ctx->pc = 0x108900u;
    SET_GPR_U32(ctx, 31, 0x108908u);
    ctx->pc = 0x108904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108900u;
    // 0x108904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C20u, 0x108900u, 0x108908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108908u;
label_108908:
    // 0x108908: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x108908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10890c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10890Cu;
    {
        const bool branch_taken_0x10890c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10890c) {
            ctx->pc = 0x108928u;
            goto label_108928;
        }
    }
    ctx->pc = 0x108914u;
    // 0x108914: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108914u;
    SET_GPR_U32(ctx, 31, 0x10891Cu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108914u, 0x10891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10891Cu;
label_10891c:
    // 0x10891c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10891cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108920: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x108920u;
    SET_GPR_U32(ctx, 31, 0x108928u);
    ctx->pc = 0x108924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108920u;
    // 0x108924: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x108920u, 0x108928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108928u;
label_108928:
    // 0x108928: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108928u;
    SET_GPR_U32(ctx, 31, 0x108930u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108928u, 0x108930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108930u;
label_108930:
    // 0x108930: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108934: 0xc04a018  jal         func_128060
    ctx->pc = 0x108934u;
    SET_GPR_U32(ctx, 31, 0x10893Cu);
    ctx->pc = 0x108938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108934u;
    // 0x108938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128060u, 0x108934u, 0x10893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10893Cu;
label_10893c:
    // 0x10893c: 0x8f908604  lw          $s0, -0x79FC($gp)
    ctx->pc = 0x10893cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936068)));
    // 0x108940: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x108940u;
    {
        const bool branch_taken_0x108940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x108940) {
            ctx->pc = 0x1089A4u;
            goto label_1089a4;
        }
    }
    ctx->pc = 0x108948u;
    // 0x108948: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108948u;
    SET_GPR_U32(ctx, 31, 0x108950u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108948u, 0x108950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108950u;
label_108950:
    // 0x108950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108954: 0xc04a094  jal         func_128250
    ctx->pc = 0x108954u;
    SET_GPR_U32(ctx, 31, 0x10895Cu);
    ctx->pc = 0x108958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108954u;
    // 0x108958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128250u, 0x108954u, 0x10895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10895Cu;
label_10895c:
    // 0x10895c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10895Cu;
    {
        const bool branch_taken_0x10895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10895c) {
            ctx->pc = 0x1089A4u;
            goto label_1089a4;
        }
    }
    ctx->pc = 0x108964u;
label_108964:
    // 0x108964: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108964u;
    SET_GPR_U32(ctx, 31, 0x10896Cu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108964u, 0x10896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10896Cu;
label_10896c:
    // 0x10896c: 0xc049f08  jal         func_127C20
    ctx->pc = 0x10896Cu;
    SET_GPR_U32(ctx, 31, 0x108974u);
    ctx->pc = 0x108970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10896Cu;
    // 0x108970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C20u, 0x10896Cu, 0x108974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108974u;
label_108974:
    // 0x108974: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x108974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x108978: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x108978u;
    {
        const bool branch_taken_0x108978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x108978) {
            ctx->pc = 0x1089A4u;
            goto label_1089a4;
        }
    }
    ctx->pc = 0x108980u;
    // 0x108980: 0xc042524  jal         func_109490
    ctx->pc = 0x108980u;
    SET_GPR_U32(ctx, 31, 0x108988u);
    ctx->pc = 0x108984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108980u;
    // 0x108984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109490u, 0x108980u, 0x108988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108988u;
label_108988:
    // 0x108988: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x108988u;
    {
        const bool branch_taken_0x108988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108988) {
            ctx->pc = 0x1089A4u;
            goto label_1089a4;
        }
    }
    ctx->pc = 0x108990u;
label_108990:
    // 0x108990: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108990u;
    SET_GPR_U32(ctx, 31, 0x108998u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108990u, 0x108998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108998u;
label_108998:
    // 0x108998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10899c: 0xc04a018  jal         func_128060
    ctx->pc = 0x10899Cu;
    SET_GPR_U32(ctx, 31, 0x1089A4u);
    ctx->pc = 0x1089A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10899Cu;
    // 0x1089a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128060u, 0x10899Cu, 0x1089A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1089A4u;
label_1089a4:
    // 0x1089a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1089a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1089a8:
    // 0x1089a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1089a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1089ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1089acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1089b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1089B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1089B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089B0u;
        // 0x1089b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1089B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1089B8u;
}
