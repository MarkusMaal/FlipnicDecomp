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

// Function: entry_001bd6d4
// Address: 0x1bd6d4 - 0x1bd6fc
void entry_001bd6d4_0x1bd6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd6d4_0x1bd6d4");
#endif

    switch (ctx->pc) {
        case 0x1bd6f4u: goto label_1bd6f4;
        default: break;
    }

    ctx->pc = 0x1bd6d4u;

    // 0x1bd6d4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1bd6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1bd6d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bd6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bd6dc: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1bd6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x1bd6e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bd6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd6e4: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BD6E4u;
    {
        const bool branch_taken_0x1bd6e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd6e4) {
            ctx->pc = 0x1BD72Cu;
            return;
        }
    }
    ctx->pc = 0x1BD6ECu;
    // 0x1bd6ec: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BD6ECu;
    SET_GPR_U32(ctx, 31, 0x1BD6F4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BD6ECu, 0x1BD6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD6F4u;
label_1bd6f4:
    // 0x1bd6f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BD6F4u;
    {
        const bool branch_taken_0x1bd6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd6f4) {
            ctx->pc = 0x1BD72Cu;
            return;
        }
    }
    ctx->pc = 0x1BD6FCu;
}
