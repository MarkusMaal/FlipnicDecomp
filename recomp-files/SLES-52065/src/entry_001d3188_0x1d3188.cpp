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

// Function: entry_001d3188
// Address: 0x1d3188 - 0x1d31bc
void entry_001d3188_0x1d3188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3188_0x1d3188");
#endif

    switch (ctx->pc) {
        case 0x1d31acu: goto label_1d31ac;
        default: break;
    }

    ctx->pc = 0x1d3188u;

label_1d3188:
    // 0x1d3188: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d3188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d318c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d318cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d3190: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d3190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d3194: 0x0  nop
    ctx->pc = 0x1d3194u;
    // NOP
    // 0x1d3198: 0x0  nop
    ctx->pc = 0x1d3198u;
    // NOP
    // 0x1d319c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D319Cu;
    {
        const bool branch_taken_0x1d319c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D319Cu;
        // 0x1d31a0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d319c) {
            ctx->pc = 0x1D3188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3188;
        }
    }
    ctx->pc = 0x1D31A4u;
    // 0x1d31a4: 0xc074c50  jal         func_1D3140
    ctx->pc = 0x1D31A4u;
    SET_GPR_U32(ctx, 31, 0x1D31ACu);
    ctx->pc = 0x1D31A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D31A4u;
    // 0x1d31a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3140u, 0x1D31A4u, 0x1D31ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D31ACu;
label_1d31ac:
    // 0x1d31ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d31acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d31b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d31b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d31b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D31B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D31B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31B4u;
        // 0x1d31b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D31B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D31BCu;
}
