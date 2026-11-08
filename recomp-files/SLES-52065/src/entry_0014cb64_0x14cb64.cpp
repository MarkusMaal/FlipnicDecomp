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

// Function: entry_0014cb64
// Address: 0x14cb64 - 0x14cb7c
void entry_0014cb64_0x14cb64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cb64_0x14cb64");
#endif

    ctx->pc = 0x14cb64u;

    // 0x14cb64: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x14cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x14cb68: 0x8c4402c0  lw          $a0, 0x2C0($v0)
    ctx->pc = 0x14cb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x14cb6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CB6Cu;
    {
        const bool branch_taken_0x14cb6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb6c) {
            ctx->pc = 0x14CB7Cu;
            return;
        }
    }
    ctx->pc = 0x14CB74u;
    // 0x14cb74: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x14CB74u;
    SET_GPR_U32(ctx, 31, 0x14CB7Cu);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x14CB74u, 0x14CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB7Cu;
}
