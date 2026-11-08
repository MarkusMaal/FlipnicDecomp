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

// Function: entry_00131598
// Address: 0x131598 - 0x1315b0
void entry_00131598_0x131598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131598_0x131598");
#endif

    ctx->pc = 0x131598u;

    // 0x131598: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x131598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13159c: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x13159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1315a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1315A0u;
    {
        const bool branch_taken_0x1315a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1315a0) {
            ctx->pc = 0x1315B0u;
            return;
        }
    }
    ctx->pc = 0x1315A8u;
    // 0x1315a8: 0xc04c57c  jal         func_1315F0
    ctx->pc = 0x1315A8u;
    SET_GPR_U32(ctx, 31, 0x1315B0u);
    ctx->pc = 0x1315F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1315F0u, 0x1315A8u, 0x1315B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315B0u;
}
