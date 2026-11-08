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

// Function: entry_0018d31c
// Address: 0x18d31c - 0x18d338
void entry_0018d31c_0x18d31c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d31c_0x18d31c");
#endif

    ctx->pc = 0x18d31cu;

    // 0x18d31c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d324: 0xae4204cc  sw          $v0, 0x4CC($s2)
    ctx->pc = 0x18d324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1228), GPR_U32(ctx, 2));
    // 0x18d328: 0x8e420454  lw          $v0, 0x454($s2)
    ctx->pc = 0x18d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1108)));
    // 0x18d32c: 0xae420450  sw          $v0, 0x450($s2)
    ctx->pc = 0x18d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1104), GPR_U32(ctx, 2));
    // 0x18d330: 0xc063e34  jal         func_18F8D0
    ctx->pc = 0x18D330u;
    SET_GPR_U32(ctx, 31, 0x18D338u);
    ctx->pc = 0x18D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D330u;
    // 0x18d334: 0xae402710  sw          $zero, 0x2710($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F8D0u, 0x18D330u, 0x18D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D338u;
}
