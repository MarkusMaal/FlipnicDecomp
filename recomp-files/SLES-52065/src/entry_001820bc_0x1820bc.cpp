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

// Function: entry_001820bc
// Address: 0x1820bc - 0x1820c4
void entry_001820bc_0x1820bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001820bc_0x1820bc");
#endif

    ctx->pc = 0x1820bcu;

    // 0x1820bc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1820BCu;
    SET_GPR_U32(ctx, 31, 0x1820C4u);
    ctx->pc = 0x1820C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1820BCu;
    // 0x1820c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1820BCu, 0x1820C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1820C4u;
}
