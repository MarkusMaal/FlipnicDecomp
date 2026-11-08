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

// Function: entry_001e9044
// Address: 0x1e9044 - 0x1e9054
void entry_001e9044_0x1e9044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9044_0x1e9044");
#endif

    ctx->pc = 0x1e9044u;

    // 0x1e9044: 0x0  nop
    ctx->pc = 0x1e9044u;
    // NOP
    // 0x1e9048: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e9048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e904c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E904Cu;
    {
        const bool branch_taken_0x1e904c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e904c) {
            ctx->pc = 0x1E9020u;
            return;
        }
    }
    ctx->pc = 0x1E9054u;
}
