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

// Function: entry_00200fe4
// Address: 0x200fe4 - 0x200ff0
void entry_00200fe4_0x200fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200fe4_0x200fe4");
#endif

    ctx->pc = 0x200fe4u;

    // 0x200fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fe8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x200FE8u;
    SET_GPR_U32(ctx, 31, 0x200FF0u);
    ctx->pc = 0x200FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FE8u;
    // 0x200fec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x200FE8u, 0x200FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FF0u;
}
