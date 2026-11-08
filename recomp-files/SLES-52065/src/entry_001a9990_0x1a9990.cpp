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

// Function: entry_001a9990
// Address: 0x1a9990 - 0x1a9a00
void entry_001a9990_0x1a9990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9990_0x1a9990");
#endif

    switch (ctx->pc) {
        case 0x1a99b8u: goto label_1a99b8;
        case 0x1a99dcu: goto label_1a99dc;
        case 0x1a99f8u: goto label_1a99f8;
        default: break;
    }

    ctx->pc = 0x1a9990u;

label_1a9990:
    // 0x1a9990: 0x2b3a021  addu        $s4, $s5, $s3
    ctx->pc = 0x1a9990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1a9994:
    // 0x1a9994: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9998:
    // 0x1a9998: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1a9998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a999c:
    // 0x1a999c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a999cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a99a0:
    // 0x1a99a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a99a4:
    // 0x1a99a4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a99a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a99a8:
    // 0x1a99a8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a99a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a99ac:
    // 0x1a99ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a99acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a99b0:
    // 0x1a99b0: 0x320f809  jalr        $t9
label_1a99b4:
    if (ctx->pc == 0x1A99B4u) {
        ctx->pc = 0x1A99B8u;
        goto label_1a99b8;
    }
    ctx->pc = 0x1A99B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A99B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A99B0u, 0x1A99B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A99B8u;
label_1a99b8:
    // 0x1a99b8: 0x8e83067c  lw          $v1, 0x67C($s4)
    ctx->pc = 0x1a99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1660)));
label_1a99bc:
    // 0x1a99bc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a99c0:
    // 0x1a99c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a99c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a99c4:
    // 0x1a99c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a99c8:
    // 0x1a99c8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a99c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a99cc:
    // 0x1a99cc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a99ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a99d0:
    // 0x1a99d0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a99d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a99d4:
    // 0x1a99d4: 0x320f809  jalr        $t9
label_1a99d8:
    if (ctx->pc == 0x1A99D8u) {
        ctx->pc = 0x1A99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99D4u;
        // 0x1a99d8: 0x2691067c  addiu       $s1, $s4, 0x67C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1660));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99DCu;
        goto label_1a99dc;
    }
    ctx->pc = 0x1A99D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A99DCu);
        ctx->pc = 0x1A99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99D4u;
        // 0x1a99d8: 0x2691067c  addiu       $s1, $s4, 0x67C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1660));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A99D4u, 0x1A99DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A99DCu;
label_1a99dc:
    // 0x1a99dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a99e0:
    // 0x1a99e0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a99e4:
    // 0x1a99e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a99e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a99e8:
    // 0x1a99e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a99ec:
    // 0x1a99ec: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a99ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a99f0:
    // 0x1a99f0: 0xc042570  jal         func_1095C0
label_1a99f4:
    if (ctx->pc == 0x1A99F4u) {
        ctx->pc = 0x1A99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99F0u;
        // 0x1a99f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99F8u;
        goto label_1a99f8;
    }
    ctx->pc = 0x1A99F0u;
    SET_GPR_U32(ctx, 31, 0x1A99F8u);
    ctx->pc = 0x1A99F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A99F0u;
    // 0x1a99f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A99F0u, 0x1A99F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A99F8u;
label_1a99f8:
    // 0x1a99f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a99f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a99fc:
    // 0x1a99fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a99fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a9a00u;
}
