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

// Function: entry_00177acc
// Address: 0x177acc - 0x177ae8
void entry_00177acc_0x177acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177acc_0x177acc");
#endif

    switch (ctx->pc) {
        case 0x177ae0u: goto label_177ae0;
        default: break;
    }

    ctx->pc = 0x177accu;

    // 0x177acc: 0x0  nop
    ctx->pc = 0x177accu;
    // NOP
    // 0x177ad0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x177ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x177ad4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x177ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x177ad8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x177AD8u;
    SET_GPR_U32(ctx, 31, 0x177AE0u);
    ctx->pc = 0x177ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AD8u;
    // 0x177adc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x177AD8u, 0x177AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AE0u;
label_177ae0:
    // 0x177ae0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x177AE0u;
    {
        const bool branch_taken_0x177ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177ae0) {
            ctx->pc = 0x177B30u;
            return;
        }
    }
    ctx->pc = 0x177AE8u;
}
