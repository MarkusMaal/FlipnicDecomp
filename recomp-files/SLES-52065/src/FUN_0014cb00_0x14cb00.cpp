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

// Function: FUN_0014cb00
// Address: 0x14cb00 - 0x14cbb8
void FUN_0014cb00_0x14cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014cb00_0x14cb00");
#endif

    switch (ctx->pc) {
        case 0x14cb48u: goto label_14cb48;
        case 0x14cb58u: goto label_14cb58;
        case 0x14cb7cu: goto label_14cb7c;
        case 0x14cb8cu: goto label_14cb8c;
        default: break;
    }

    ctx->pc = 0x14cb00u;

    // 0x14cb00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14cb04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cb08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14cb0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14cb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14cb10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14cb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14cb14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14cb14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb18: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14CB18u;
    {
        const bool branch_taken_0x14cb18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x14CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB18u;
        // 0x14cb1c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb18) {
            ctx->pc = 0x14CB64u;
            goto label_14cb64;
        }
    }
    ctx->pc = 0x14CB20u;
    // 0x14cb20: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CB20u;
    {
        const bool branch_taken_0x14cb20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb20) {
            ctx->pc = 0x14CB30u;
            goto label_14cb30;
        }
    }
    ctx->pc = 0x14CB28u;
    // 0x14cb28: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14CB28u;
    {
        const bool branch_taken_0x14cb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB28u;
        // 0x14cb2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb28) {
            ctx->pc = 0x14CB98u;
            goto label_14cb98;
        }
    }
    ctx->pc = 0x14CB30u;
label_14cb30:
    // 0x14cb30: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x14cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x14cb34: 0x8c4402bc  lw          $a0, 0x2BC($v0)
    ctx->pc = 0x14cb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 700)));
    // 0x14cb38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CB38u;
    {
        const bool branch_taken_0x14cb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb38) {
            ctx->pc = 0x14CB48u;
            goto label_14cb48;
        }
    }
    ctx->pc = 0x14CB40u;
    // 0x14cb40: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x14CB40u;
    SET_GPR_U32(ctx, 31, 0x14CB48u);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x14CB40u, 0x14CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB48u;
label_14cb48:
    // 0x14cb48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14cb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb50: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x14CB50u;
    SET_GPR_U32(ctx, 31, 0x14CB58u);
    ctx->pc = 0x14CB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB50u;
    // 0x14cb54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x14CB50u, 0x14CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB58u;
label_14cb58:
    // 0x14cb58: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x14cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x14cb5c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14CB5Cu;
    {
        const bool branch_taken_0x14cb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB5Cu;
        // 0x14cb60: 0xac6202bc  sw          $v0, 0x2BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb5c) {
            ctx->pc = 0x14CBA0u;
            goto label_14cba0;
        }
    }
    ctx->pc = 0x14CB64u;
label_14cb64:
    // 0x14cb64: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x14cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x14cb68: 0x8c4402c0  lw          $a0, 0x2C0($v0)
    ctx->pc = 0x14cb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x14cb6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CB6Cu;
    {
        const bool branch_taken_0x14cb6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb6c) {
            ctx->pc = 0x14CB7Cu;
            goto label_14cb7c;
        }
    }
    ctx->pc = 0x14CB74u;
    // 0x14cb74: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x14CB74u;
    SET_GPR_U32(ctx, 31, 0x14CB7Cu);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x14CB74u, 0x14CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB7Cu;
label_14cb7c:
    // 0x14cb7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14cb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb84: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x14CB84u;
    SET_GPR_U32(ctx, 31, 0x14CB8Cu);
    ctx->pc = 0x14CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB84u;
    // 0x14cb88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x14CB84u, 0x14CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB8Cu;
label_14cb8c:
    // 0x14cb8c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x14cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x14cb90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14CB90u;
    {
        const bool branch_taken_0x14cb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB90u;
        // 0x14cb94: 0xac6202c0  sw          $v0, 0x2C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb90) {
            ctx->pc = 0x14CBA0u;
            goto label_14cba0;
        }
    }
    ctx->pc = 0x14CB98u;
label_14cb98:
    // 0x14cb98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14CB98u;
    {
        const bool branch_taken_0x14cb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB98u;
        // 0x14cb9c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb98) {
            ctx->pc = 0x14CBA8u;
            goto label_14cba8;
        }
    }
    ctx->pc = 0x14CBA0u;
label_14cba0:
    // 0x14cba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cba4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14cba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14cba8:
    // 0x14cba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14cba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cbac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14cbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x14CBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CBB0u;
        // 0x14cbb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CBB8u;
}
