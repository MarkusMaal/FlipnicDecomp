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

// Function: entry_00186bd0
// Address: 0x186bd0 - 0x186be0
void entry_00186bd0_0x186bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186bd0_0x186bd0");
#endif

    switch (ctx->pc) {
        case 0x186bdcu: goto label_186bdc;
        default: break;
    }

    ctx->pc = 0x186bd0u;

    // 0x186bd0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x186bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186bd4: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x186BD4u;
    SET_GPR_U32(ctx, 31, 0x186BDCu);
    ctx->pc = 0x186BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186BD4u;
    // 0x186bd8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x186BD4u, 0x186BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186BDCu;
label_186bdc:
    // 0x186bdc: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x186bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    ctx->pc = 0x186be0u;
}
