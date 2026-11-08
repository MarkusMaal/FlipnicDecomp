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

// Function: entry_0017eb1c
// Address: 0x17eb1c - 0x17eb28
void entry_0017eb1c_0x17eb1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eb1c_0x17eb1c");
#endif

    ctx->pc = 0x17eb1cu;

    // 0x17eb1c: 0x0  nop
    ctx->pc = 0x17eb1cu;
    // NOP
    // 0x17eb20: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17EB20u;
    SET_GPR_U32(ctx, 31, 0x17EB28u);
    ctx->pc = 0x17EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB20u;
    // 0x17eb24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17EB20u, 0x17EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB28u;
}
