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

// Function: entry_001c6ba4
// Address: 0x1c6ba4 - 0x1c6bc0
void entry_001c6ba4_0x1c6ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6ba4_0x1c6ba4");
#endif

    switch (ctx->pc) {
        case 0x1c6bacu: goto label_1c6bac;
        case 0x1c6bb8u: goto label_1c6bb8;
        default: break;
    }

    ctx->pc = 0x1c6ba4u;

    // 0x1c6ba4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BA4u;
    SET_GPR_U32(ctx, 31, 0x1C6BACu);
    ctx->pc = 0x1C6BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BA4u;
    // 0x1c6ba8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BA4u, 0x1C6BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BACu;
label_1c6bac:
    // 0x1c6bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BB0u;
    SET_GPR_U32(ctx, 31, 0x1C6BB8u);
    ctx->pc = 0x1C6BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BB0u;
    // 0x1c6bb4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BB0u, 0x1C6BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BB8u;
label_1c6bb8:
    // 0x1c6bb8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C6BB8u;
    {
        const bool branch_taken_0x1c6bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6bb8) {
            ctx->pc = 0x1C6C2Cu;
            return;
        }
    }
    ctx->pc = 0x1C6BC0u;
}
