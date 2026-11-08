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

// Function: entry_0011e068
// Address: 0x11e068 - 0x11e080
void entry_0011e068_0x11e068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e068_0x11e068");
#endif

    switch (ctx->pc) {
        case 0x11e078u: goto label_11e078;
        default: break;
    }

    ctx->pc = 0x11e068u;

    // 0x11e068: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11e068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11e06c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x11e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x11e070: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11E070u;
    SET_GPR_U32(ctx, 31, 0x11E078u);
    ctx->pc = 0x11E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E070u;
    // 0x11e074: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11E070u, 0x11E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E078u;
label_11e078:
    // 0x11e078: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x11e078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x11e07c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11e07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11e080u;
}
