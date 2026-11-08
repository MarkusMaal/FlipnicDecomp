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

// Function: entry_0014edfc
// Address: 0x14edfc - 0x14ee20
void entry_0014edfc_0x14edfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014edfc_0x14edfc");
#endif

    switch (ctx->pc) {
        case 0x14ee18u: goto label_14ee18;
        default: break;
    }

    ctx->pc = 0x14edfcu;

    // 0x14edfc: 0x0  nop
    ctx->pc = 0x14edfcu;
    // NOP
    // 0x14ee00: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x14ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x14ee04: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x14ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14ee08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EE08u;
    {
        const bool branch_taken_0x14ee08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee08) {
            ctx->pc = 0x14EE20u;
            return;
        }
    }
    ctx->pc = 0x14EE10u;
    // 0x14ee10: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14EE10u;
    SET_GPR_U32(ctx, 31, 0x14EE18u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14EE10u, 0x14EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE18u;
label_14ee18:
    // 0x14ee18: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x14ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x14ee1c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x14ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x14ee20u;
}
