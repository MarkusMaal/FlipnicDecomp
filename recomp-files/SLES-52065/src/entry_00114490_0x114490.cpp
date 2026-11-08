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

// Function: entry_00114490
// Address: 0x114490 - 0x11459c
void entry_00114490_0x114490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114490_0x114490");
#endif

    switch (ctx->pc) {
        case 0x1144b0u: goto label_1144b0;
        case 0x1144e8u: goto label_1144e8;
        case 0x1144fcu: goto label_1144fc;
        case 0x114568u: goto label_114568;
        case 0x11457cu: goto label_11457c;
        default: break;
    }

    ctx->pc = 0x114490u;

label_114490:
    // 0x114490: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x114490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_114494:
    // 0x114494: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x114494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_114498:
    // 0x114498: 0xc6410280  lwc1        $f1, 0x280($s2)
    ctx->pc = 0x114498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11449c:
    // 0x11449c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1144a0:
    // 0x1144a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1144a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1144a4:
    // 0x1144a4: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x1144a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_1144a8:
    // 0x1144a8: 0x320f809  jalr        $t9
label_1144ac:
    if (ctx->pc == 0x1144ACu) {
        ctx->pc = 0x1144ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144A8u;
        // 0x1144ac: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1144B0u;
        goto label_1144b0;
    }
    ctx->pc = 0x1144A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1144B0u);
        ctx->pc = 0x1144ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144A8u;
        // 0x1144ac: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144A8u, 0x1144B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1144B0u;
label_1144b0:
    // 0x1144b0: 0x8e420254  lw          $v0, 0x254($s2)
    ctx->pc = 0x1144b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_1144b4:
    // 0x1144b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1144b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1144b8:
    // 0x1144b8: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x1144b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
label_1144bc:
    // 0x1144bc: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_1144c0:
    if (ctx->pc == 0x1144C0u) {
        ctx->pc = 0x1144C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144BCu;
        // 0x1144c0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1144C4u;
        goto label_1144c4;
    }
    ctx->pc = 0x1144BCu;
    {
        const bool branch_taken_0x1144bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144BCu;
        // 0x1144c0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144bc) {
            ctx->pc = 0x114648u;
            return;
        }
    }
    ctx->pc = 0x1144C4u;
label_1144c4:
    // 0x1144c4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1144c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_1144c8:
    // 0x1144c8: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1144c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1144cc:
    // 0x1144cc: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1144ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_1144d0:
    // 0x1144d0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1144d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_1144d4:
    // 0x1144d4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1144d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1144d8:
    // 0x1144d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1144d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1144dc:
    // 0x1144dc: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1144dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1144e0:
    // 0x1144e0: 0x320f809  jalr        $t9
label_1144e4:
    if (ctx->pc == 0x1144E4u) {
        ctx->pc = 0x1144E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144E0u;
        // 0x1144e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1144E8u;
        goto label_1144e8;
    }
    ctx->pc = 0x1144E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1144E8u);
        ctx->pc = 0x1144E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144E0u;
        // 0x1144e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144E0u, 0x1144E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1144E8u;
label_1144e8:
    // 0x1144e8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1144e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1144ec:
    // 0x1144ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1144ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1144f0:
    // 0x1144f0: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x1144f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_1144f4:
    // 0x1144f4: 0x320f809  jalr        $t9
label_1144f8:
    if (ctx->pc == 0x1144F8u) {
        ctx->pc = 0x1144F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144F4u;
        // 0x1144f8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1144FCu;
        goto label_1144fc;
    }
    ctx->pc = 0x1144F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1144FCu);
        ctx->pc = 0x1144F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144F4u;
        // 0x1144f8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144F4u, 0x1144FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1144FCu;
label_1144fc:
    // 0x1144fc: 0x8e440254  lw          $a0, 0x254($s2)
    ctx->pc = 0x1144fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_114500:
    // 0x114500: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x114500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114504:
    // 0x114504: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x114504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_114508:
    // 0x114508: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x114508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_11450c:
    // 0x11450c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11450cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114510:
    // 0x114510: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x114510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_114514:
    // 0x114514: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x114514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_114518:
    // 0x114518: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x114518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
label_11451c:
    // 0x11451c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_114520:
    // 0x114520: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x114520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
label_114524:
    // 0x114524: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x114524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
label_114528:
    // 0x114528: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x114528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_11452c:
    // 0x11452c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11452cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114530:
    // 0x114530: 0xae420254  sw          $v0, 0x254($s2)
    ctx->pc = 0x114530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 2));
label_114534:
    // 0x114534: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x114534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_114538:
    // 0x114538: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x114538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
label_11453c:
    // 0x11453c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_114540:
    if (ctx->pc == 0x114540u) {
        ctx->pc = 0x114540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11453Cu;
        // 0x114540: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114544u;
        goto label_114544;
    }
    ctx->pc = 0x11453Cu;
    {
        const bool branch_taken_0x11453c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11453Cu;
        // 0x114540: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11453c) {
            ctx->pc = 0x11459Cu;
            return;
        }
    }
    ctx->pc = 0x114544u;
label_114544:
    // 0x114544: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x114544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_114548:
    // 0x114548: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x114548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_11454c:
    // 0x11454c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x11454cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_114550:
    // 0x114550: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x114550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_114554:
    // 0x114554: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x114554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_114558:
    // 0x114558: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x114558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11455c:
    // 0x11455c: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x11455cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_114560:
    // 0x114560: 0x320f809  jalr        $t9
label_114564:
    if (ctx->pc == 0x114564u) {
        ctx->pc = 0x114564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114560u;
        // 0x114564: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114568u;
        goto label_114568;
    }
    ctx->pc = 0x114560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114568u);
        ctx->pc = 0x114564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114560u;
        // 0x114564: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114560u, 0x114568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114568u;
label_114568:
    // 0x114568: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x114568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11456c:
    // 0x11456c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114570:
    // 0x114570: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x114570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_114574:
    // 0x114574: 0x320f809  jalr        $t9
label_114578:
    if (ctx->pc == 0x114578u) {
        ctx->pc = 0x114578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114574u;
        // 0x114578: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11457Cu;
        goto label_11457c;
    }
    ctx->pc = 0x114574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11457Cu);
        ctx->pc = 0x114578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114574u;
        // 0x114578: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114574u, 0x11457Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11457Cu;
label_11457c:
    // 0x11457c: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x11457cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114580:
    // 0x114580: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x114580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_114584:
    // 0x114584: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x114584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_114588:
    // 0x114588: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x114588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_11458c:
    // 0x11458c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x11458cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_114590:
    // 0x114590: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114594:
    // 0x114594: 0x1000002c  b           . + 4 + (0x2C << 2)
label_114598:
    if (ctx->pc == 0x114598u) {
        ctx->pc = 0x114598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114594u;
        // 0x114598: 0xa2420255  sb          $v0, 0x255($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11459Cu;
        goto label_fallthrough_0x114594;
    }
    ctx->pc = 0x114594u;
    {
        const bool branch_taken_0x114594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114594u;
        // 0x114598: 0xa2420255  sb          $v0, 0x255($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114594) {
            ctx->pc = 0x114648u;
            return;
        }
    }
label_fallthrough_0x114594:
    ctx->pc = 0x11459Cu;
}
