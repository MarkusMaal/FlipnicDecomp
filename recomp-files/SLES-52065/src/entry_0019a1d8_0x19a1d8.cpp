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

// Function: entry_0019a1d8
// Address: 0x19a1d8 - 0x19a1ec
void entry_0019a1d8_0x19a1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a1d8_0x19a1d8");
#endif

    ctx->pc = 0x19a1d8u;

    // 0x19a1d8: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
    // 0x19a1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a1e4: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19A1E4u;
    SET_GPR_U32(ctx, 31, 0x19A1ECu);
    ctx->pc = 0x19A1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A1E4u;
    // 0x19a1e8: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19A1E4u, 0x19A1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1ECu;
}
