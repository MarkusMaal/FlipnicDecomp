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

// Function: FUN_00182260
// Address: 0x182260 - 0x1822ac
void FUN_00182260_0x182260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00182260_0x182260");
#endif

    switch (ctx->pc) {
        case 0x182290u: goto label_182290;
        case 0x1822a0u: goto label_1822a0;
        default: break;
    }

    ctx->pc = 0x182260u;

    // 0x182260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18226c: 0x8f83866c  lw          $v1, -0x7994($gp)
    ctx->pc = 0x18226cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936172)));
    // 0x182270: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x182270u;
    {
        const bool branch_taken_0x182270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x182270) {
            ctx->pc = 0x182298u;
            goto label_182298;
        }
    }
    ctx->pc = 0x182278u;
    // 0x182278: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x182278u;
    {
        const bool branch_taken_0x182278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182278) {
            ctx->pc = 0x182288u;
            goto label_182288;
        }
    }
    ctx->pc = 0x182280u;
    // 0x182280: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x182280u;
    {
        const bool branch_taken_0x182280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182280u;
        // 0x182284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182280) {
            ctx->pc = 0x1822A0u;
            goto label_1822a0;
        }
    }
    ctx->pc = 0x182288u;
label_182288:
    // 0x182288: 0xc047a50  jal         func_11E940
    ctx->pc = 0x182288u;
    SET_GPR_U32(ctx, 31, 0x182290u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x182288u, 0x182290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182290u;
label_182290:
    // 0x182290: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x182290u;
    {
        const bool branch_taken_0x182290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182290u;
        // 0x182294: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182290) {
            ctx->pc = 0x1822A4u;
            goto label_1822a4;
        }
    }
    ctx->pc = 0x182298u;
label_182298:
    // 0x182298: 0xc047a64  jal         func_11E990
    ctx->pc = 0x182298u;
    SET_GPR_U32(ctx, 31, 0x1822A0u);
    ctx->pc = 0x11E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E990u, 0x182298u, 0x1822A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1822A0u;
label_1822a0:
    // 0x1822a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1822a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1822a4:
    // 0x1822a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1822A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1822A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822A4u;
        // 0x1822a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1822A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1822ACu;
}
