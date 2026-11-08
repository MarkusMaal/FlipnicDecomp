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

// Function: entry_00127a50
// Address: 0x127a50 - 0x127a90
void entry_00127a50_0x127a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127a50_0x127a50");
#endif

    switch (ctx->pc) {
        case 0x127a64u: goto label_127a64;
        default: break;
    }

    ctx->pc = 0x127a50u;

label_127a50:
    // 0x127a50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x127a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_127a54:
    // 0x127a54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127a58:
    // 0x127a58: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x127a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_127a5c:
    // 0x127a5c: 0x320f809  jalr        $t9
label_127a60:
    if (ctx->pc == 0x127A60u) {
        ctx->pc = 0x127A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A5Cu;
        // 0x127a60: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A64u;
        goto label_127a64;
    }
    ctx->pc = 0x127A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127A64u);
        ctx->pc = 0x127A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A5Cu;
        // 0x127a60: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127A5Cu, 0x127A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127A64u;
label_127a64:
    // 0x127a64: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x127a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_127a68:
    // 0x127a68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x127a68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_127a6c:
    // 0x127a6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x127a6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_127a70:
    // 0x127a70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x127a70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_127a74:
    // 0x127a74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x127a74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_127a78:
    // 0x127a78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x127a78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_127a7c:
    // 0x127a7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x127a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_127a80:
    // 0x127a80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x127a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_127a84:
    // 0x127a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_127a88:
    // 0x127a88: 0x3e00008  jr          $ra
label_127a8c:
    if (ctx->pc == 0x127A8Cu) {
        ctx->pc = 0x127A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A88u;
        // 0x127a8c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A90u;
        goto label_fallthrough_0x127a88;
    }
    ctx->pc = 0x127A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A88u;
        // 0x127a8c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x127a88:
    ctx->pc = 0x127A90u;
}
