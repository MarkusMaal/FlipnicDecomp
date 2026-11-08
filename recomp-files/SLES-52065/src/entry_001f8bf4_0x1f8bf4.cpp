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

// Function: entry_001f8bf4
// Address: 0x1f8bf4 - 0x1f8c04
void entry_001f8bf4_0x1f8bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8bf4_0x1f8bf4");
#endif

    switch (ctx->pc) {
        case 0x1f8c00u: goto label_1f8c00;
        default: break;
    }

    ctx->pc = 0x1f8bf4u;

    // 0x1f8bf4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f8bf8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F8BF8u;
    SET_GPR_U32(ctx, 31, 0x1F8C00u);
    ctx->pc = 0x1F8BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8BF8u;
    // 0x1f8bfc: 0x8c44d6bc  lw          $a0, -0x2944($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F8BF8u, 0x1F8C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C00u;
label_1f8c00:
    // 0x1f8c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f8c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f8c04u;
}
