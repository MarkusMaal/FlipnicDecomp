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

// Function: entry_001c6bdc
// Address: 0x1c6bdc - 0x1c6bf8
void entry_001c6bdc_0x1c6bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6bdc_0x1c6bdc");
#endif

    switch (ctx->pc) {
        case 0x1c6be4u: goto label_1c6be4;
        case 0x1c6bf0u: goto label_1c6bf0;
        default: break;
    }

    ctx->pc = 0x1c6bdcu;

    // 0x1c6bdc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BDCu;
    SET_GPR_U32(ctx, 31, 0x1C6BE4u);
    ctx->pc = 0x1C6BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BDCu;
    // 0x1c6be0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BDCu, 0x1C6BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BE4u;
label_1c6be4:
    // 0x1c6be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6be8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BE8u;
    SET_GPR_U32(ctx, 31, 0x1C6BF0u);
    ctx->pc = 0x1C6BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BE8u;
    // 0x1c6bec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BE8u, 0x1C6BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BF0u;
label_1c6bf0:
    // 0x1c6bf0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C6BF0u;
    {
        const bool branch_taken_0x1c6bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6bf0) {
            ctx->pc = 0x1C6C2Cu;
            return;
        }
    }
    ctx->pc = 0x1C6BF8u;
}
