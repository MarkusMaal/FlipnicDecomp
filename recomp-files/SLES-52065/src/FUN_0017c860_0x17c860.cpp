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

// Function: FUN_0017c860
// Address: 0x17c860 - 0x17c8d8
void FUN_0017c860_0x17c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c860_0x17c860");
#endif

    switch (ctx->pc) {
        case 0x17c860u: goto label_17c860;
        case 0x17c864u: goto label_17c864;
        case 0x17c868u: goto label_17c868;
        case 0x17c86cu: goto label_17c86c;
        case 0x17c870u: goto label_17c870;
        case 0x17c874u: goto label_17c874;
        case 0x17c878u: goto label_17c878;
        case 0x17c87cu: goto label_17c87c;
        case 0x17c880u: goto label_17c880;
        case 0x17c884u: goto label_17c884;
        case 0x17c888u: goto label_17c888;
        case 0x17c88cu: goto label_17c88c;
        case 0x17c890u: goto label_17c890;
        case 0x17c894u: goto label_17c894;
        case 0x17c898u: goto label_17c898;
        case 0x17c89cu: goto label_17c89c;
        case 0x17c8a0u: goto label_17c8a0;
        case 0x17c8a4u: goto label_17c8a4;
        case 0x17c8a8u: goto label_17c8a8;
        case 0x17c8acu: goto label_17c8ac;
        case 0x17c8b0u: goto label_17c8b0;
        case 0x17c8b4u: goto label_17c8b4;
        case 0x17c8b8u: goto label_17c8b8;
        case 0x17c8bcu: goto label_17c8bc;
        case 0x17c8c0u: goto label_17c8c0;
        case 0x17c8c4u: goto label_17c8c4;
        case 0x17c8c8u: goto label_17c8c8;
        case 0x17c8ccu: goto label_17c8cc;
        case 0x17c8d0u: goto label_17c8d0;
        case 0x17c8d4u: goto label_17c8d4;
        default: break;
    }

    ctx->pc = 0x17c860u;

label_17c860:
    // 0x17c860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17c864:
    // 0x17c864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17c868:
    // 0x17c868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17c86c:
    // 0x17c86c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17c870:
    // 0x17c870: 0xc05f16c  jal         func_17C5B0
label_17c874:
    if (ctx->pc == 0x17C874u) {
        ctx->pc = 0x17C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C870u;
        // 0x17c874: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C878u;
        goto label_17c878;
    }
    ctx->pc = 0x17C870u;
    SET_GPR_U32(ctx, 31, 0x17C878u);
    ctx->pc = 0x17C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C870u;
    // 0x17c874: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C5B0u, 0x17C870u, 0x17C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C878u;
label_17c878:
    // 0x17c878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17c878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c87c:
    // 0x17c87c: 0x2a010000  slti        $at, $s0, 0x0
    ctx->pc = 0x17c87cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_17c880:
    // 0x17c880: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
label_17c884:
    if (ctx->pc == 0x17C884u) {
        ctx->pc = 0x17C888u;
        goto label_17c888;
    }
    ctx->pc = 0x17C880u;
    {
        const bool branch_taken_0x17c880 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c880) {
            ctx->pc = 0x17C8C0u;
            goto label_17c8c0;
        }
    }
    ctx->pc = 0x17C888u;
label_17c888:
    // 0x17c888: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x17c888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_17c88c:
    // 0x17c88c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c890:
    // 0x17c890: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x17c890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_17c894:
    // 0x17c894: 0x320f809  jalr        $t9
label_17c898:
    if (ctx->pc == 0x17C898u) {
        ctx->pc = 0x17C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C894u;
        // 0x17c898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C89Cu;
        goto label_17c89c;
    }
    ctx->pc = 0x17C894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17C89Cu);
        ctx->pc = 0x17C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C894u;
        // 0x17c898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C894u, 0x17C89Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C89Cu;
label_17c89c:
    // 0x17c89c: 0x86230222  lh          $v1, 0x222($s1)
    ctx->pc = 0x17c89cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
label_17c8a0:
    // 0x17c8a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c8a4:
    // 0x17c8a4: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_17c8a8:
    if (ctx->pc == 0x17C8A8u) {
        ctx->pc = 0x17C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8A4u;
        // 0x17c8a8: 0xa6230220  sh          $v1, 0x220($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C8ACu;
        goto label_17c8ac;
    }
    ctx->pc = 0x17C8A4u;
    {
        const bool branch_taken_0x17c8a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x17C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8A4u;
        // 0x17c8a8: 0xa6230220  sh          $v1, 0x220($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8a4) {
            ctx->pc = 0x17C8B8u;
            goto label_17c8b8;
        }
    }
    ctx->pc = 0x17C8ACu;
label_17c8ac:
    // 0x17c8ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c8b0:
    // 0x17c8b0: 0xc042118  jal         func_108460
label_17c8b4:
    if (ctx->pc == 0x17C8B4u) {
        ctx->pc = 0x17C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8B0u;
        // 0x17c8b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C8B8u;
        goto label_17c8b8;
    }
    ctx->pc = 0x17C8B0u;
    SET_GPR_U32(ctx, 31, 0x17C8B8u);
    ctx->pc = 0x17C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8B0u;
    // 0x17c8b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17C8B0u, 0x17C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C8B8u;
label_17c8b8:
    // 0x17c8b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_17c8bc:
    if (ctx->pc == 0x17C8BCu) {
        ctx->pc = 0x17C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8B8u;
        // 0x17c8bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C8C0u;
        goto label_17c8c0;
    }
    ctx->pc = 0x17C8B8u;
    {
        const bool branch_taken_0x17c8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8B8u;
        // 0x17c8bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8b8) {
            ctx->pc = 0x17C8C4u;
            goto label_17c8c4;
        }
    }
    ctx->pc = 0x17C8C0u;
label_17c8c0:
    // 0x17c8c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17c8c4:
    // 0x17c8c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17c8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17c8c8:
    // 0x17c8c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17c8c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17c8cc:
    // 0x17c8cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17c8d0:
    // 0x17c8d0: 0x3e00008  jr          $ra
label_17c8d4:
    if (ctx->pc == 0x17C8D4u) {
        ctx->pc = 0x17C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8D0u;
        // 0x17c8d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C8D8u;
        goto label_fallthrough_0x17c8d0;
    }
    ctx->pc = 0x17C8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8D0u;
        // 0x17c8d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17c8d0:
    ctx->pc = 0x17C8D8u;
}
