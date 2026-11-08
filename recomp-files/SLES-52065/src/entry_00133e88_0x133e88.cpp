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

// Function: entry_00133e88
// Address: 0x133e88 - 0x133e94
void entry_00133e88_0x133e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133e88_0x133e88");
#endif

    ctx->pc = 0x133e88u;

    // 0x133e88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x133e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e8c: 0xc04c558  jal         func_131560
    ctx->pc = 0x133E8Cu;
    SET_GPR_U32(ctx, 31, 0x133E94u);
    ctx->pc = 0x133E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E8Cu;
    // 0x133e90: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x133E8Cu, 0x133E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E94u;
}
