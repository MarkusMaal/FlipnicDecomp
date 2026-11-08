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

// Function: entry_001d54d8
// Address: 0x1d54d8 - 0x1d54e8
void entry_001d54d8_0x1d54d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d54d8_0x1d54d8");
#endif

    switch (ctx->pc) {
        case 0x1d54e4u: goto label_1d54e4;
        default: break;
    }

    ctx->pc = 0x1d54d8u;

label_1d54d8:
    // 0x1d54d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d54d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d54dc:
    // 0x1d54dc: 0x60f809  jalr        $v1
label_1d54e0:
    if (ctx->pc == 0x1D54E0u) {
        ctx->pc = 0x1D54E4u;
        goto label_1d54e4;
    }
    ctx->pc = 0x1D54DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D54E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D54DCu, 0x1D54E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D54E4u;
label_1d54e4:
    // 0x1d54e4: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1d54e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    ctx->pc = 0x1d54e8u;
}
