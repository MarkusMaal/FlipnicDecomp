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

// Function: entry_00110d10
// Address: 0x110d10 - 0x110d1c
void entry_00110d10_0x110d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110d10_0x110d10");
#endif

    ctx->pc = 0x110d10u;

    // 0x110d10: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x110d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110d14: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x110D14u;
    SET_GPR_U32(ctx, 31, 0x110D1Cu);
    ctx->pc = 0x110D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D14u;
    // 0x110d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x110D14u, 0x110D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D1Cu;
}
