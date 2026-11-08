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

// Function: entry_0019f590
// Address: 0x19f590 - 0x19f5a8
void entry_0019f590_0x19f590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f590_0x19f590");
#endif

    ctx->pc = 0x19f590u;

    // 0x19f590: 0x1060010c  beqz        $v1, . + 4 + (0x10C << 2)
    ctx->pc = 0x19F590u;
    {
        const bool branch_taken_0x19f590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f590) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F598u;
    // 0x19f598: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
    // 0x19f59c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F59Cu;
    {
        const bool branch_taken_0x19f59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f59c) {
            ctx->pc = 0x19F5A8u;
            return;
        }
    }
    ctx->pc = 0x19F5A4u;
    // 0x19f5a4: 0xae800694  sw          $zero, 0x694($s4)
    ctx->pc = 0x19f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 0));
    ctx->pc = 0x19f5a8u;
}
