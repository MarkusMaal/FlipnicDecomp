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

// Function: entry_001a64b4
// Address: 0x1a64b4 - 0x1a655c
void entry_001a64b4_0x1a64b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a64b4_0x1a64b4");
#endif

    switch (ctx->pc) {
        case 0x1a64dcu: goto label_1a64dc;
        case 0x1a64e8u: goto label_1a64e8;
        case 0x1a6504u: goto label_1a6504;
        case 0x1a650cu: goto label_1a650c;
        case 0x1a652cu: goto label_1a652c;
        default: break;
    }

    ctx->pc = 0x1a64b4u;

label_1a64b4:
    // 0x1a64b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a64b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a64b8:
    // 0x1a64b8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a64bc:
    // 0x1a64bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a64c0:
    // 0x1a64c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a64c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a64c4:
    // 0x1a64c4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a64c8:
    // 0x1a64c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a64c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a64cc:
    // 0x1a64cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a64ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a64d0:
    // 0x1a64d0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a64d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a64d4:
    // 0x1a64d4: 0x320f809  jalr        $t9
label_1a64d8:
    if (ctx->pc == 0x1A64D8u) {
        ctx->pc = 0x1A64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64D4u;
        // 0x1a64d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A64DCu;
        goto label_1a64dc;
    }
    ctx->pc = 0x1A64D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A64DCu);
        ctx->pc = 0x1A64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64D4u;
        // 0x1a64d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A64D4u, 0x1A64DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A64DCu;
label_1a64dc:
    // 0x1a64dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a64dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a64e0:
    // 0x1a64e0: 0xc04c6d8  jal         func_131B60
label_1a64e4:
    if (ctx->pc == 0x1A64E4u) {
        ctx->pc = 0x1A64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64E0u;
        // 0x1a64e4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A64E8u;
        goto label_1a64e8;
    }
    ctx->pc = 0x1A64E0u;
    SET_GPR_U32(ctx, 31, 0x1A64E8u);
    ctx->pc = 0x1A64E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A64E0u;
    // 0x1a64e4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x1A64E0u, 0x1A64E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A64E8u;
label_1a64e8:
    // 0x1a64e8: 0x3c02c060  lui         $v0, 0xC060
    ctx->pc = 0x1a64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49248 << 16));
label_1a64ec:
    // 0x1a64ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a64ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a64f0:
    // 0x1a64f0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1a64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_1a64f4:
    // 0x1a64f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a64f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a64f8:
    // 0x1a64f8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1a64f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1a64fc:
    // 0x1a64fc: 0x320f809  jalr        $t9
label_1a6500:
    if (ctx->pc == 0x1A6500u) {
        ctx->pc = 0x1A6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64FCu;
        // 0x1a6500: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6504u;
        goto label_1a6504;
    }
    ctx->pc = 0x1A64FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6504u);
        ctx->pc = 0x1A6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64FCu;
        // 0x1a6500: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A64FCu, 0x1A6504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6504u;
label_1a6504:
    // 0x1a6504: 0xc062114  jal         func_188450
label_1a6508:
    if (ctx->pc == 0x1A6508u) {
        ctx->pc = 0x1A6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6504u;
        // 0x1a6508: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A650Cu;
        goto label_1a650c;
    }
    ctx->pc = 0x1A6504u;
    SET_GPR_U32(ctx, 31, 0x1A650Cu);
    ctx->pc = 0x1A6508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6504u;
    // 0x1a6508: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6504u, 0x1A650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A650Cu;
label_1a650c:
    // 0x1a650c: 0x8f8580f0  lw          $a1, -0x7F10($gp)
    ctx->pc = 0x1a650cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1a6510:
    // 0x1a6510: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a6510u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_1a6514:
    // 0x1a6514: 0xde8800c0  ld          $t0, 0xC0($s4)
    ctx->pc = 0x1a6514u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 192)));
label_1a6518:
    // 0x1a6518: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a6518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a651c:
    // 0x1a651c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1a651cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a6520:
    // 0x1a6520: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a6520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1a6524:
    // 0x1a6524: 0xc0627bc  jal         func_189EF0
label_1a6528:
    if (ctx->pc == 0x1A6528u) {
        ctx->pc = 0x1A6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6524u;
        // 0x1a6528: 0x24c606b0  addiu       $a2, $a2, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A652Cu;
        goto label_1a652c;
    }
    ctx->pc = 0x1A6524u;
    SET_GPR_U32(ctx, 31, 0x1A652Cu);
    ctx->pc = 0x1A6528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6524u;
    // 0x1a6528: 0x24c606b0  addiu       $a2, $a2, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A6524u, 0x1A652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A652Cu;
label_1a652c:
    // 0x1a652c: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x1a652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1a6530:
    // 0x1a6530: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a6530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a6534:
    // 0x1a6534: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1a6538:
    if (ctx->pc == 0x1A6538u) {
        ctx->pc = 0x1A6538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6534u;
        // 0x1a6538: 0x3c023fd9  lui         $v0, 0x3FD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A653Cu;
        goto label_1a653c;
    }
    ctx->pc = 0x1A6534u;
    {
        const bool branch_taken_0x1a6534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6534u;
        // 0x1a6538: 0x3c023fd9  lui         $v0, 0x3FD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6534) {
            ctx->pc = 0x1A659Cu;
            return;
        }
    }
    ctx->pc = 0x1A653Cu;
label_1a653c:
    // 0x1a653c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a6540:
    // 0x1a6540: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1a6544:
    if (ctx->pc == 0x1A6544u) {
        ctx->pc = 0x1A6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6540u;
        // 0x1a6544: 0x3c02c0b0  lui         $v0, 0xC0B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49328 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6548u;
        goto label_1a6548;
    }
    ctx->pc = 0x1A6540u;
    {
        const bool branch_taken_0x1a6540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6540u;
        // 0x1a6544: 0x3c02c0b0  lui         $v0, 0xC0B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49328 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6540) {
            ctx->pc = 0x1A6578u;
            return;
        }
    }
    ctx->pc = 0x1A6548u;
label_1a6548:
    // 0x1a6548: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a654c:
    // 0x1a654c: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
label_1a6550:
    if (ctx->pc == 0x1A6550u) {
        ctx->pc = 0x1A6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A654Cu;
        // 0x1a6550: 0x3c02c100  lui         $v0, 0xC100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6554u;
        goto label_1a6554;
    }
    ctx->pc = 0x1A654Cu;
    {
        const bool branch_taken_0x1a654c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A654Cu;
        // 0x1a6550: 0x3c02c100  lui         $v0, 0xC100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a654c) {
            ctx->pc = 0x1A655Cu;
            return;
        }
    }
    ctx->pc = 0x1A6554u;
label_1a6554:
    // 0x1a6554: 0x10000033  b           . + 4 + (0x33 << 2)
label_1a6558:
    if (ctx->pc == 0x1A6558u) {
        ctx->pc = 0x1A655Cu;
        goto label_fallthrough_0x1a6554;
    }
    ctx->pc = 0x1A6554u;
    {
        const bool branch_taken_0x1a6554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6554) {
            ctx->pc = 0x1A6624u;
            return;
        }
    }
label_fallthrough_0x1a6554:
    ctx->pc = 0x1A655Cu;
}
