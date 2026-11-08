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

// Function: entry_00177b10
// Address: 0x177b10 - 0x177b30
void entry_00177b10_0x177b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177b10_0x177b10");
#endif

    switch (ctx->pc) {
        case 0x177b20u: goto label_177b20;
        default: break;
    }

    ctx->pc = 0x177b10u;

    // 0x177b10: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x177b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x177b14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x177b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b18: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x177B18u;
    SET_GPR_U32(ctx, 31, 0x177B20u);
    ctx->pc = 0x177B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B18u;
    // 0x177b1c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x177B18u, 0x177B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B20u;
label_177b20:
    // 0x177b20: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x177b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x177b24: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x177b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x177b28: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x177B28u;
    SET_GPR_U32(ctx, 31, 0x177B30u);
    ctx->pc = 0x177B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B28u;
    // 0x177b2c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x177B28u, 0x177B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B30u;
}
