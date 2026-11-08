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

// Function: caseD_1f
// Address: 0x1c7770 - 0x1c7784
void caseD_1f_0x1c7770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1f_0x1c7770");
#endif

    ctx->pc = 0x1c7770u;

    // 0x1c7770: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c7774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7778: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c777c: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C777Cu;
    SET_GPR_U32(ctx, 31, 0x1C7784u);
    ctx->pc = 0x1C7780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C777Cu;
    // 0x1c7780: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C777Cu, 0x1C7784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7784u;
}
