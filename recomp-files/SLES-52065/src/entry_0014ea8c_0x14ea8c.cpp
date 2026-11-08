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

// Function: entry_0014ea8c
// Address: 0x14ea8c - 0x14eaac
void entry_0014ea8c_0x14ea8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ea8c_0x14ea8c");
#endif

    switch (ctx->pc) {
        case 0x14eaa4u: goto label_14eaa4;
        default: break;
    }

    ctx->pc = 0x14ea8cu;

    // 0x14ea8c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x14ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x14ea90: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x14ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14ea94: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EA94u;
    {
        const bool branch_taken_0x14ea94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea94) {
            ctx->pc = 0x14EAACu;
            return;
        }
    }
    ctx->pc = 0x14EA9Cu;
    // 0x14ea9c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14EA9Cu;
    SET_GPR_U32(ctx, 31, 0x14EAA4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14EA9Cu, 0x14EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAA4u;
label_14eaa4:
    // 0x14eaa4: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x14eaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x14eaa8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x14eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x14eaacu;
}
