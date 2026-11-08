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

// Function: FUN_0018be60
// Address: 0x18be60 - 0x18be94
void FUN_0018be60_0x18be60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018be60_0x18be60");
#endif

    switch (ctx->pc) {
        case 0x18be60u: goto label_18be60;
        case 0x18be64u: goto label_18be64;
        case 0x18be68u: goto label_18be68;
        case 0x18be6cu: goto label_18be6c;
        case 0x18be70u: goto label_18be70;
        case 0x18be74u: goto label_18be74;
        case 0x18be78u: goto label_18be78;
        case 0x18be7cu: goto label_18be7c;
        case 0x18be80u: goto label_18be80;
        case 0x18be84u: goto label_18be84;
        case 0x18be88u: goto label_18be88;
        case 0x18be8cu: goto label_18be8c;
        case 0x18be90u: goto label_18be90;
        default: break;
    }

    ctx->pc = 0x18be60u;

label_18be60:
    // 0x18be60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18be60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18be64:
    // 0x18be64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18be64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18be68:
    // 0x18be68: 0xc063d1c  jal         func_18F470
label_18be6c:
    if (ctx->pc == 0x18BE6Cu) {
        ctx->pc = 0x18BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE68u;
        // 0x18be6c: 0x24840610  addiu       $a0, $a0, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE70u;
        goto label_18be70;
    }
    ctx->pc = 0x18BE68u;
    SET_GPR_U32(ctx, 31, 0x18BE70u);
    ctx->pc = 0x18BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BE68u;
    // 0x18be6c: 0x24840610  addiu       $a0, $a0, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F470u, 0x18BE68u, 0x18BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE70u;
label_18be70:
    // 0x18be70: 0xc04d988  jal         func_136620
label_18be74:
    if (ctx->pc == 0x18BE74u) {
        ctx->pc = 0x18BE78u;
        goto label_18be78;
    }
    ctx->pc = 0x18BE70u;
    SET_GPR_U32(ctx, 31, 0x18BE78u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x18BE70u, 0x18BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE78u;
label_18be78:
    // 0x18be78: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18be78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18be7c:
    // 0x18be7c: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x18be7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_18be80:
    // 0x18be80: 0x320f809  jalr        $t9
label_18be84:
    if (ctx->pc == 0x18BE84u) {
        ctx->pc = 0x18BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE80u;
        // 0x18be84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE88u;
        goto label_18be88;
    }
    ctx->pc = 0x18BE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18BE88u);
        ctx->pc = 0x18BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE80u;
        // 0x18be84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BE80u, 0x18BE88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18BE88u;
label_18be88:
    // 0x18be88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18be88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18be8c:
    // 0x18be8c: 0x3e00008  jr          $ra
label_18be90:
    if (ctx->pc == 0x18BE90u) {
        ctx->pc = 0x18BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE8Cu;
        // 0x18be90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE94u;
        goto label_fallthrough_0x18be8c;
    }
    ctx->pc = 0x18BE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE8Cu;
        // 0x18be90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18be8c:
    ctx->pc = 0x18BE94u;
}
