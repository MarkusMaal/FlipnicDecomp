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

// Function: FUN_001d9660
// Address: 0x1d9660 - 0x1d96a0
void FUN_001d9660_0x1d9660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d9660_0x1d9660");
#endif

    switch (ctx->pc) {
        case 0x1d9678u: goto label_1d9678;
        case 0x1d9680u: goto label_1d9680;
        default: break;
    }

    ctx->pc = 0x1d9660u;

    // 0x1d9660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9664: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d966c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d966cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9674: 0x0  nop
    ctx->pc = 0x1d9674u;
    // NOP
label_1d9678:
    // 0x1d9678: 0xc0764ea  jal         func_1D93A8
    ctx->pc = 0x1D9678u;
    SET_GPR_U32(ctx, 31, 0x1D9680u);
    ctx->pc = 0x1D967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9678u;
    // 0x1d967c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D93A8u, 0x1D9678u, 0x1D9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9680u;
label_1d9680:
    // 0x1d9680: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x1d9680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d9684: 0x1460fffc  bnez        $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1D9684u;
    {
        const bool branch_taken_0x1d9684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9684u;
        // 0x1d9688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9684) {
            ctx->pc = 0x1D9678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9678;
        }
    }
    ctx->pc = 0x1D968Cu;
    // 0x1d968c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d968cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9690: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9694: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9698: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9698u;
        // 0x1d969c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D96A0u;
}
