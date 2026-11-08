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

// Function: entry_00119884
// Address: 0x119884 - 0x1198ec
void entry_00119884_0x119884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119884_0x119884");
#endif

    switch (ctx->pc) {
        case 0x1198a8u: goto label_1198a8;
        case 0x1198c4u: goto label_1198c4;
        default: break;
    }

    ctx->pc = 0x119884u;

label_119884:
    // 0x119884: 0x86900000  lh          $s0, 0x0($s4)
    ctx->pc = 0x119884u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_119888:
    // 0x119888: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x119888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_11988c:
    // 0x11988c: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x11988cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_119890:
    // 0x119890: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_119894:
    // 0x119894: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119898:
    // 0x119898: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11989c:
    // 0x11989c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x11989cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1198a0:
    // 0x1198a0: 0x320f809  jalr        $t9
label_1198a4:
    if (ctx->pc == 0x1198A4u) {
        ctx->pc = 0x1198A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198A0u;
        // 0x1198a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1198A8u;
        goto label_1198a8;
    }
    ctx->pc = 0x1198A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1198A8u);
        ctx->pc = 0x1198A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198A0u;
        // 0x1198a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1198A0u, 0x1198A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1198A8u;
label_1198a8:
    // 0x1198a8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1198a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1198ac:
    // 0x1198ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1198acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1198b0:
    // 0x1198b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1198b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1198b4:
    // 0x1198b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1198b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1198b8:
    // 0x1198b8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1198b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1198bc:
    // 0x1198bc: 0x320f809  jalr        $t9
label_1198c0:
    if (ctx->pc == 0x1198C0u) {
        ctx->pc = 0x1198C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198BCu;
        // 0x1198c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1198C4u;
        goto label_1198c4;
    }
    ctx->pc = 0x1198BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1198C4u);
        ctx->pc = 0x1198C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198BCu;
        // 0x1198c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1198BCu, 0x1198C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1198C4u;
label_1198c4:
    // 0x1198c4: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
label_1198c8:
    if (ctx->pc == 0x1198C8u) {
        ctx->pc = 0x1198CCu;
        goto label_1198cc;
    }
    ctx->pc = 0x1198C4u;
    {
        const bool branch_taken_0x1198c4 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1198c4) {
            ctx->pc = 0x1198ECu;
            return;
        }
    }
    ctx->pc = 0x1198CCu;
label_1198cc:
    // 0x1198cc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1198ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1198d0:
    // 0x1198d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1198d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1198d4:
    // 0x1198d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1198d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1198d8:
    // 0x1198d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1198d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1198dc:
    // 0x1198dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1198dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1198e0:
    // 0x1198e0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1198e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1198e4:
    // 0x1198e4: 0x320f809  jalr        $t9
label_1198e8:
    if (ctx->pc == 0x1198E8u) {
        ctx->pc = 0x1198E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198E4u;
        // 0x1198e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1198ECu;
        goto label_fallthrough_0x1198e4;
    }
    ctx->pc = 0x1198E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1198ECu);
        ctx->pc = 0x1198E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198E4u;
        // 0x1198e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1198E4u, 0x1198ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1198e4:
    ctx->pc = 0x1198ECu;
}
