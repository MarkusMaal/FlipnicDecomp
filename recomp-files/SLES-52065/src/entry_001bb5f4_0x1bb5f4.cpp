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

// Function: entry_001bb5f4
// Address: 0x1bb5f4 - 0x1bb5fc
void entry_001bb5f4_0x1bb5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb5f4_0x1bb5f4");
#endif

    ctx->pc = 0x1bb5f4u;

    // 0x1bb5f4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB5F4u;
    SET_GPR_U32(ctx, 31, 0x1BB5FCu);
    ctx->pc = 0x1BB5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5F4u;
    // 0x1bb5f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB5F4u, 0x1BB5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5FCu;
}
