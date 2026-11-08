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

// Function: entry_0019f40c
// Address: 0x19f40c - 0x19f41c
void entry_0019f40c_0x19f40c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f40c_0x19f40c");
#endif

    ctx->pc = 0x19f40cu;

    // 0x19f40c: 0x8e820670  lw          $v0, 0x670($s4)
    ctx->pc = 0x19f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x19f410: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F410u;
    {
        const bool branch_taken_0x19f410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f410) {
            ctx->pc = 0x19F41Cu;
            return;
        }
    }
    ctx->pc = 0x19F418u;
    // 0x19f418: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x19f418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
    ctx->pc = 0x19f41cu;
}
