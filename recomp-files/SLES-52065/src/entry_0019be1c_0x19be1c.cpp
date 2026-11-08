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

// Function: entry_0019be1c
// Address: 0x19be1c - 0x19be34
void entry_0019be1c_0x19be1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019be1c_0x19be1c");
#endif

    switch (ctx->pc) {
        case 0x19be28u: goto label_19be28;
        default: break;
    }

    ctx->pc = 0x19be1cu;

    // 0x19be1c: 0x8e850828  lw          $a1, 0x828($s4)
    ctx->pc = 0x19be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2088)));
    // 0x19be20: 0xc064c0c  jal         func_193030
    ctx->pc = 0x19BE20u;
    SET_GPR_U32(ctx, 31, 0x19BE28u);
    ctx->pc = 0x19BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE20u;
    // 0x19be24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x19BE20u, 0x19BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE28u;
label_19be28:
    // 0x19be28: 0xae80082c  sw          $zero, 0x82C($s4)
    ctx->pc = 0x19be28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2092), GPR_U32(ctx, 0));
    // 0x19be2c: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x19be2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x19be30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19be30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x19be34u;
}
