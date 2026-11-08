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

// Function: entry_00131c1c
// Address: 0x131c1c - 0x131c30
void entry_00131c1c_0x131c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131c1c_0x131c1c");
#endif

    switch (ctx->pc) {
        case 0x131c28u: goto label_131c28;
        default: break;
    }

    ctx->pc = 0x131c1cu;

    // 0x131c1c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x131c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x131c20: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x131C20u;
    SET_GPR_U32(ctx, 31, 0x131C28u);
    ctx->pc = 0x131C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C20u;
    // 0x131c24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x131C20u, 0x131C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C28u;
label_131c28:
    // 0x131c28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131C28u;
    {
        const bool branch_taken_0x131c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C28u;
        // 0x131c2c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c28) {
            ctx->pc = 0x131C3Cu;
            return;
        }
    }
    ctx->pc = 0x131C30u;
}
