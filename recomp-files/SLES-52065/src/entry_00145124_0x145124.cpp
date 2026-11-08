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

// Function: entry_00145124
// Address: 0x145124 - 0x14515c
void entry_00145124_0x145124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145124_0x145124");
#endif

    switch (ctx->pc) {
        case 0x14512cu: goto label_14512c;
        case 0x145134u: goto label_145134;
        default: break;
    }

    ctx->pc = 0x145124u;

    // 0x145124: 0xc0401a4  jal         func_100690
    ctx->pc = 0x145124u;
    SET_GPR_U32(ctx, 31, 0x14512Cu);
    ctx->pc = 0x145128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145124u;
    // 0x145128: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x145124u, 0x14512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14512Cu;
label_14512c:
    // 0x14512c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14512Cu;
    SET_GPR_U32(ctx, 31, 0x145134u);
    ctx->pc = 0x145130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14512Cu;
    // 0x145130: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14512Cu, 0x145134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145134u;
label_145134:
    // 0x145134: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x145134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x145138: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x145138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
    // 0x14513c: 0xae2001a4  sw          $zero, 0x1A4($s1)
    ctx->pc = 0x14513cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 0));
    // 0x145140: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x145140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x145144: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x145144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x145148: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x145148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14514c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14514cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145154: 0x3e00008  jr          $ra
    ctx->pc = 0x145154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145154u;
        // 0x145158: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14515Cu;
}
