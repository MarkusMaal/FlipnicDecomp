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

// Function: entry_00100b40
// Address: 0x100b40 - 0x100ba0
void entry_00100b40_0x100b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100b40_0x100b40");
#endif

    switch (ctx->pc) {
        case 0x100b4cu: goto label_100b4c;
        case 0x100b60u: goto label_100b60;
        case 0x100b78u: goto label_100b78;
        case 0x100b84u: goto label_100b84;
        case 0x100b98u: goto label_100b98;
        default: break;
    }

    ctx->pc = 0x100b40u;

label_100b40:
    // 0x100b40: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x100b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_100b44:
    // 0x100b44: 0xc056200  jal         func_158800
label_100b48:
    if (ctx->pc == 0x100B48u) {
        ctx->pc = 0x100B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B44u;
        // 0x100b48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B4Cu;
        goto label_100b4c;
    }
    ctx->pc = 0x100B44u;
    SET_GPR_U32(ctx, 31, 0x100B4Cu);
    ctx->pc = 0x100B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B44u;
    // 0x100b48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158800u, 0x100B44u, 0x100B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B4Cu;
label_100b4c:
    // 0x100b4c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100b4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100b50:
    // 0x100b50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100b54:
    // 0x100b54: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x100b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_100b58:
    // 0x100b58: 0x320f809  jalr        $t9
label_100b5c:
    if (ctx->pc == 0x100B5Cu) {
        ctx->pc = 0x100B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B58u;
        // 0x100b5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B60u;
        goto label_100b60;
    }
    ctx->pc = 0x100B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100B60u);
        ctx->pc = 0x100B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B58u;
        // 0x100b5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B58u, 0x100B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100B60u;
label_100b60:
    // 0x100b60: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100b64:
    // 0x100b64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100b68:
    // 0x100b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100b6c:
    // 0x100b6c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x100b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_100b70:
    // 0x100b70: 0x320f809  jalr        $t9
label_100b74:
    if (ctx->pc == 0x100B74u) {
        ctx->pc = 0x100B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B70u;
        // 0x100b74: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B78u;
        goto label_100b78;
    }
    ctx->pc = 0x100B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100B78u);
        ctx->pc = 0x100B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B70u;
        // 0x100b74: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B70u, 0x100B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100B78u;
label_100b78:
    // 0x100b78: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x100b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_100b7c:
    // 0x100b7c: 0xc05622c  jal         func_1588B0
label_100b80:
    if (ctx->pc == 0x100B80u) {
        ctx->pc = 0x100B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B7Cu;
        // 0x100b80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B84u;
        goto label_100b84;
    }
    ctx->pc = 0x100B7Cu;
    SET_GPR_U32(ctx, 31, 0x100B84u);
    ctx->pc = 0x100B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B7Cu;
    // 0x100b80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1588B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588B0u, 0x100B7Cu, 0x100B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B84u;
label_100b84:
    // 0x100b84: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100b88:
    // 0x100b88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100b8c:
    // 0x100b8c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x100b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_100b90:
    // 0x100b90: 0x320f809  jalr        $t9
label_100b94:
    if (ctx->pc == 0x100B94u) {
        ctx->pc = 0x100B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B90u;
        // 0x100b94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B98u;
        goto label_100b98;
    }
    ctx->pc = 0x100B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100B98u);
        ctx->pc = 0x100B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B90u;
        // 0x100b94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B90u, 0x100B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100B98u;
label_100b98:
    // 0x100b98: 0x10000028  b           . + 4 + (0x28 << 2)
label_100b9c:
    if (ctx->pc == 0x100B9Cu) {
        ctx->pc = 0x100BA0u;
        goto label_fallthrough_0x100b98;
    }
    ctx->pc = 0x100B98u;
    {
        const bool branch_taken_0x100b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100b98) {
            ctx->pc = 0x100C3Cu;
            return;
        }
    }
label_fallthrough_0x100b98:
    ctx->pc = 0x100BA0u;
}
