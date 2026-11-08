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

// Function: entry_001e9194
// Address: 0x1e9194 - 0x1e91a4
void entry_001e9194_0x1e9194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9194_0x1e9194");
#endif

    ctx->pc = 0x1e9194u;

    // 0x1e9194: 0x0  nop
    ctx->pc = 0x1e9194u;
    // NOP
    // 0x1e9198: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e919c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E919Cu;
    {
        const bool branch_taken_0x1e919c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e919c) {
            ctx->pc = 0x1E9170u;
            return;
        }
    }
    ctx->pc = 0x1E91A4u;
}
