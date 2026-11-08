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

// Function: entry_001086ac
// Address: 0x1086ac - 0x1086bc
void entry_001086ac_0x1086ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001086ac_0x1086ac");
#endif

    ctx->pc = 0x1086acu;

    // 0x1086ac: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x1086acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1086b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1086b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086b4: 0xc062b74  jal         func_18ADD0
    ctx->pc = 0x1086B4u;
    SET_GPR_U32(ctx, 31, 0x1086BCu);
    ctx->pc = 0x1086B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086B4u;
    // 0x1086b8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x1086B4u, 0x1086BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086BCu;
}
