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

// Function: entry_001fc9f8
// Address: 0x1fc9f8 - 0x1fca10
void entry_001fc9f8_0x1fc9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc9f8_0x1fc9f8");
#endif

    switch (ctx->pc) {
        case 0x1fca0cu: goto label_1fca0c;
        default: break;
    }

    ctx->pc = 0x1fc9f8u;

    // 0x1fc9f8: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1fc9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1fc9fc: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1fc9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1fca00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fca00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca04: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FCA04u;
    SET_GPR_U32(ctx, 31, 0x1FCA0Cu);
    ctx->pc = 0x1FCA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA04u;
    // 0x1fca08: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FCA04u, 0x1FCA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA0Cu;
label_1fca0c:
    // 0x1fca0c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fca0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fca10u;
}
