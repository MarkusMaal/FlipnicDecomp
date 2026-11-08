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

// Function: entry_0010d0ec
// Address: 0x10d0ec - 0x10d0f8
void entry_0010d0ec_0x10d0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d0ec_0x10d0ec");
#endif

    ctx->pc = 0x10d0ecu;

    // 0x10d0ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0f0: 0xc042118  jal         func_108460
    ctx->pc = 0x10D0F0u;
    SET_GPR_U32(ctx, 31, 0x10D0F8u);
    ctx->pc = 0x10D0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0F0u;
    // 0x10d0f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10D0F0u, 0x10D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0F8u;
}
