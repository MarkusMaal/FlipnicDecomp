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

// Function: entry_001351e4
// Address: 0x1351e4 - 0x1351f8
void entry_001351e4_0x1351e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001351e4_0x1351e4");
#endif

    switch (ctx->pc) {
        case 0x1351ecu: goto label_1351ec;
        default: break;
    }

    ctx->pc = 0x1351e4u;

    // 0x1351e4: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x1351E4u;
    SET_GPR_U32(ctx, 31, 0x1351ECu);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x1351E4u, 0x1351ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351ECu;
label_1351ec:
    // 0x1351ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1351ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1351f0: 0xc0513d0  jal         func_144F40
    ctx->pc = 0x1351F0u;
    SET_GPR_U32(ctx, 31, 0x1351F8u);
    ctx->pc = 0x1351F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351F0u;
    // 0x1351f4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144F40u, 0x1351F0u, 0x1351F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351F8u;
}
