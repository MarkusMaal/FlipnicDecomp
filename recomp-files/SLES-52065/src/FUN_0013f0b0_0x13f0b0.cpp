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

// Function: FUN_0013f0b0
// Address: 0x13f0b0 - 0x13f104
void FUN_0013f0b0_0x13f0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f0b0_0x13f0b0");
#endif

    switch (ctx->pc) {
        case 0x13f0b0u: goto label_13f0b0;
        case 0x13f0b4u: goto label_13f0b4;
        case 0x13f0b8u: goto label_13f0b8;
        case 0x13f0bcu: goto label_13f0bc;
        case 0x13f0c0u: goto label_13f0c0;
        case 0x13f0c4u: goto label_13f0c4;
        case 0x13f0c8u: goto label_13f0c8;
        case 0x13f0ccu: goto label_13f0cc;
        case 0x13f0d0u: goto label_13f0d0;
        case 0x13f0d4u: goto label_13f0d4;
        case 0x13f0d8u: goto label_13f0d8;
        case 0x13f0dcu: goto label_13f0dc;
        case 0x13f0e0u: goto label_13f0e0;
        case 0x13f0e4u: goto label_13f0e4;
        case 0x13f0e8u: goto label_13f0e8;
        case 0x13f0ecu: goto label_13f0ec;
        case 0x13f0f0u: goto label_13f0f0;
        case 0x13f0f4u: goto label_13f0f4;
        case 0x13f0f8u: goto label_13f0f8;
        case 0x13f0fcu: goto label_13f0fc;
        case 0x13f100u: goto label_13f100;
        default: break;
    }

    ctx->pc = 0x13f0b0u;

label_13f0b0:
    // 0x13f0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_13f0b4:
    // 0x13f0b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f0b8:
    // 0x13f0b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13f0bc:
    // 0x13f0bc: 0x9083018a  lbu         $v1, 0x18A($a0)
    ctx->pc = 0x13f0bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 394)));
label_13f0c0:
    // 0x13f0c0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_13f0c4:
    if (ctx->pc == 0x13F0C4u) {
        ctx->pc = 0x13F0C8u;
        goto label_13f0c8;
    }
    ctx->pc = 0x13F0C0u;
    {
        const bool branch_taken_0x13f0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f0c0) {
            ctx->pc = 0x13F0F0u;
            goto label_13f0f0;
        }
    }
    ctx->pc = 0x13F0C8u;
label_13f0c8:
    // 0x13f0c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13f0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13f0cc:
    // 0x13f0cc: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13f0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13f0d0:
    // 0x13f0d0: 0x320f809  jalr        $t9
label_13f0d4:
    if (ctx->pc == 0x13F0D4u) {
        ctx->pc = 0x13F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0D0u;
        // 0x13f0d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F0D8u;
        goto label_13f0d8;
    }
    ctx->pc = 0x13F0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F0D8u);
        ctx->pc = 0x13F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0D0u;
        // 0x13f0d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F0D0u, 0x13F0D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F0D8u;
label_13f0d8:
    // 0x13f0d8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x13f0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13f0dc:
    // 0x13f0dc: 0x8f390114  lw          $t9, 0x114($t9)
    ctx->pc = 0x13f0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 276)));
label_13f0e0:
    // 0x13f0e0: 0x320f809  jalr        $t9
label_13f0e4:
    if (ctx->pc == 0x13F0E4u) {
        ctx->pc = 0x13F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0E0u;
        // 0x13f0e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F0E8u;
        goto label_13f0e8;
    }
    ctx->pc = 0x13F0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F0E8u);
        ctx->pc = 0x13F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0E0u;
        // 0x13f0e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F0E0u, 0x13F0E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F0E8u;
label_13f0e8:
    // 0x13f0e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_13f0ec:
    if (ctx->pc == 0x13F0ECu) {
        ctx->pc = 0x13F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0E8u;
        // 0x13f0ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F0F0u;
        goto label_13f0f0;
    }
    ctx->pc = 0x13F0E8u;
    {
        const bool branch_taken_0x13f0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0E8u;
        // 0x13f0ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0e8) {
            ctx->pc = 0x13F0FCu;
            goto label_13f0fc;
        }
    }
    ctx->pc = 0x13F0F0u;
label_13f0f0:
    // 0x13f0f0: 0xc050cf4  jal         func_1433D0
label_13f0f4:
    if (ctx->pc == 0x13F0F4u) {
        ctx->pc = 0x13F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0F0u;
        // 0x13f0f4: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F0F8u;
        goto label_13f0f8;
    }
    ctx->pc = 0x13F0F0u;
    SET_GPR_U32(ctx, 31, 0x13F0F8u);
    ctx->pc = 0x13F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0F0u;
    // 0x13f0f4: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1433D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1433D0u, 0x13F0F0u, 0x13F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0F8u;
label_13f0f8:
    // 0x13f0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f0fc:
    // 0x13f0fc: 0x3e00008  jr          $ra
label_13f100:
    if (ctx->pc == 0x13F100u) {
        ctx->pc = 0x13F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0FCu;
        // 0x13f100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F104u;
        goto label_fallthrough_0x13f0fc;
    }
    ctx->pc = 0x13F0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0FCu;
        // 0x13f100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13f0fc:
    ctx->pc = 0x13F104u;
}
