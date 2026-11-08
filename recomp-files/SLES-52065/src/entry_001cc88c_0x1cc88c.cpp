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

// Function: entry_001cc88c
// Address: 0x1cc88c - 0x1cc8a8
void entry_001cc88c_0x1cc88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc88c_0x1cc88c");
#endif

    switch (ctx->pc) {
        case 0x1cc894u: goto label_1cc894;
        default: break;
    }

    ctx->pc = 0x1cc88cu;

    // 0x1cc88c: 0xc060014  jal         func_180050
    ctx->pc = 0x1CC88Cu;
    SET_GPR_U32(ctx, 31, 0x1CC894u);
    ctx->pc = 0x180050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180050u, 0x1CC88Cu, 0x1CC894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC894u;
label_1cc894:
    // 0x1cc894: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cc894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cc898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cc898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc89c: 0x24a580d0  addiu       $a1, $a1, -0x7F30
    ctx->pc = 0x1cc89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934736));
    // 0x1cc8a0: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CC8A0u;
    SET_GPR_U32(ctx, 31, 0x1CC8A8u);
    ctx->pc = 0x1CC8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8A0u;
    // 0x1cc8a4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CC8A0u, 0x1CC8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8A8u;
}
