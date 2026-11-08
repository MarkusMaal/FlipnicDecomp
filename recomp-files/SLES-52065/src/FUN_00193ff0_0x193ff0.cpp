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

// Function: FUN_00193ff0
// Address: 0x193ff0 - 0x19404c
void FUN_00193ff0_0x193ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193ff0_0x193ff0");
#endif

    switch (ctx->pc) {
        case 0x194024u: goto label_194024;
        case 0x194030u: goto label_194030;
        default: break;
    }

    ctx->pc = 0x193ff0u;

    // 0x193ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193ff8: 0x8f8486fc  lw          $a0, -0x7904($gp)
    ctx->pc = 0x193ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x193ffc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x193FFCu;
    {
        const bool branch_taken_0x193ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FFCu;
        // 0x194000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ffc) {
            ctx->pc = 0x194040u;
            goto label_194040;
        }
    }
    ctx->pc = 0x194004u;
    // 0x194004: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x194004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x194008: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x194008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19400c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19400Cu;
    {
        const bool branch_taken_0x19400c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x194010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19400Cu;
        // 0x194010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19400c) {
            ctx->pc = 0x194040u;
            goto label_194040;
        }
    }
    ctx->pc = 0x194014u;
    // 0x194014: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x194014u;
    {
        const bool branch_taken_0x194014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194014u;
        // 0x194018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194014) {
            ctx->pc = 0x194038u;
            goto label_194038;
        }
    }
    ctx->pc = 0x19401Cu;
    // 0x19401c: 0xc047a50  jal         func_11E940
    ctx->pc = 0x19401Cu;
    SET_GPR_U32(ctx, 31, 0x194024u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x19401Cu, 0x194024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194024u;
label_194024:
    // 0x194024: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x194024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x194028: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x194028u;
    SET_GPR_U32(ctx, 31, 0x194030u);
    ctx->pc = 0x19402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194028u;
    // 0x19402c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x194028u, 0x194030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194030u;
label_194030:
    // 0x194030: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x194030u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    // 0x194034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194038:
    // 0x194038: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194038u;
    {
        const bool branch_taken_0x194038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194038u;
        // 0x19403c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194038) {
            ctx->pc = 0x194044u;
            goto label_194044;
        }
    }
    ctx->pc = 0x194040u;
label_194040:
    // 0x194040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_194044:
    // 0x194044: 0x3e00008  jr          $ra
    ctx->pc = 0x194044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194044u;
        // 0x194048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19404Cu;
}
