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

// Function: entry_001bbe2c
// Address: 0x1bbe2c - 0x1bbe4c
void entry_001bbe2c_0x1bbe2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbe2c_0x1bbe2c");
#endif

    switch (ctx->pc) {
        case 0x1bbe44u: goto label_1bbe44;
        default: break;
    }

    ctx->pc = 0x1bbe2cu;

    // 0x1bbe2c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bbe2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bbe30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bbe30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bbe34: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bbe38: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bbe38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bbe3c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BBE3Cu;
    SET_GPR_U32(ctx, 31, 0x1BBE44u);
    ctx->pc = 0x1BBE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE3Cu;
    // 0x1bbe40: 0x24a51140  addiu       $a1, $a1, 0x1140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BBE3Cu, 0x1BBE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE44u;
label_1bbe44:
    // 0x1bbe44: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BBE44u;
    SET_GPR_U32(ctx, 31, 0x1BBE4Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BBE44u, 0x1BBE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE4Cu;
}
