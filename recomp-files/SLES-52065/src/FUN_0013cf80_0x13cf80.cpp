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

// Function: FUN_0013cf80
// Address: 0x13cf80 - 0x13cfcc
void FUN_0013cf80_0x13cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013cf80_0x13cf80");
#endif

    switch (ctx->pc) {
        case 0x13cfb0u: goto label_13cfb0;
        case 0x13cfc0u: goto label_13cfc0;
        default: break;
    }

    ctx->pc = 0x13cf80u;

    // 0x13cf80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13cf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13cf84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cf88: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x13cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x13cf8c: 0xa2082b  sltu        $at, $a1, $v0
    ctx->pc = 0x13cf8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13cf90: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13CF90u;
    {
        const bool branch_taken_0x13cf90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cf90) {
            ctx->pc = 0x13CFB8u;
            goto label_13cfb8;
        }
    }
    ctx->pc = 0x13CF98u;
    // 0x13cf98: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x13cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x13cf9c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13cfa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cfa4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cfa8: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x13CFA8u;
    SET_GPR_U32(ctx, 31, 0x13CFB0u);
    ctx->pc = 0x13CFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFA8u;
    // 0x13cfac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x13CFA8u, 0x13CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFB0u;
label_13cfb0:
    // 0x13cfb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13CFB0u;
    {
        const bool branch_taken_0x13cfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFB0u;
        // 0x13cfb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cfb0) {
            ctx->pc = 0x13CFC4u;
            goto label_13cfc4;
        }
    }
    ctx->pc = 0x13CFB8u;
label_13cfb8:
    // 0x13cfb8: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x13CFB8u;
    SET_GPR_U32(ctx, 31, 0x13CFC0u);
    ctx->pc = 0x13CFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFB8u;
    // 0x13cfbc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x13CFB8u, 0x13CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFC0u;
label_13cfc0:
    // 0x13cfc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13cfc4:
    // 0x13cfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x13CFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFC4u;
        // 0x13cfc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CFCCu;
}
