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

// Function: entry_00177ae8
// Address: 0x177ae8 - 0x177b10
void entry_00177ae8_0x177ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177ae8_0x177ae8");
#endif

    switch (ctx->pc) {
        case 0x177af8u: goto label_177af8;
        case 0x177b08u: goto label_177b08;
        default: break;
    }

    ctx->pc = 0x177ae8u;

    // 0x177ae8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x177ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x177aec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x177aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177af0: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x177AF0u;
    SET_GPR_U32(ctx, 31, 0x177AF8u);
    ctx->pc = 0x177AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AF0u;
    // 0x177af4: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x177AF0u, 0x177AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AF8u;
label_177af8:
    // 0x177af8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x177af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x177afc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x177afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x177b00: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x177B00u;
    SET_GPR_U32(ctx, 31, 0x177B08u);
    ctx->pc = 0x177B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B00u;
    // 0x177b04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x177B00u, 0x177B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B08u;
label_177b08:
    // 0x177b08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x177B08u;
    {
        const bool branch_taken_0x177b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177b08) {
            ctx->pc = 0x177B30u;
            return;
        }
    }
    ctx->pc = 0x177B10u;
}
