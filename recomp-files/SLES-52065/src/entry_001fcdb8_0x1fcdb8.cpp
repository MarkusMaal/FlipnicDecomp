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

// Function: entry_001fcdb8
// Address: 0x1fcdb8 - 0x1fcdc8
void entry_001fcdb8_0x1fcdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcdb8_0x1fcdb8");
#endif

    switch (ctx->pc) {
        case 0x1fcdc4u: goto label_1fcdc4;
        default: break;
    }

    ctx->pc = 0x1fcdb8u;

    // 0x1fcdb8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcdbc: 0xc08005a  jal         func_200168
    ctx->pc = 0x1FCDBCu;
    SET_GPR_U32(ctx, 31, 0x1FCDC4u);
    ctx->pc = 0x1FCDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDBCu;
    // 0x1fcdc0: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200168u, 0x1FCDBCu, 0x1FCDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDC4u;
label_1fcdc4:
    // 0x1fcdc4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1fcdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x1fcdc8u;
}
