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

// Function: entry_001ffd68
// Address: 0x1ffd68 - 0x1ffd8c
void entry_001ffd68_0x1ffd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffd68_0x1ffd68");
#endif

    switch (ctx->pc) {
        case 0x1ffd84u: goto label_1ffd84;
        default: break;
    }

    ctx->pc = 0x1ffd68u;

label_1ffd68:
    // 0x1ffd68: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1ffd68u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ffd6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ffd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd70: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ffd70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ffd74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ffd74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ffd78: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x1ffd78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1ffd7c: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FFD7Cu;
    SET_GPR_U32(ctx, 31, 0x1FFD84u);
    ctx->pc = 0x1FFD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD7Cu;
    // 0x1ffd80: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FFD7Cu, 0x1FFD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD84u;
label_1ffd84:
    // 0x1ffd84: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FFD84u;
    {
        const bool branch_taken_0x1ffd84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD84u;
        // 0x1ffd88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd84) {
            ctx->pc = 0x1FFD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffd68;
        }
    }
    ctx->pc = 0x1FFD8Cu;
}
