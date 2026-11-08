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

// Function: entry_0013dd50
// Address: 0x13dd50 - 0x13dd60
void entry_0013dd50_0x13dd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dd50_0x13dd50");
#endif

    ctx->pc = 0x13dd50u;

    // 0x13dd50: 0x8c820194  lw          $v0, 0x194($a0)
    ctx->pc = 0x13dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x13dd54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13DD54u;
    {
        const bool branch_taken_0x13dd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dd54) {
            ctx->pc = 0x13DD60u;
            return;
        }
    }
    ctx->pc = 0x13DD5Cu;
    // 0x13dd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x13dd60u;
}
