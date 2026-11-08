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

// Function: entry_001488d0
// Address: 0x1488d0 - 0x1488dc
void entry_001488d0_0x1488d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001488d0_0x1488d0");
#endif

    ctx->pc = 0x1488d0u;

    // 0x1488d0: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x1488d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1488d4: 0x1478ffcd  bne         $v1, $t8, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1488D4u;
    {
        const bool branch_taken_0x1488d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        if (branch_taken_0x1488d4) {
            ctx->pc = 0x14880Cu;
            return;
        }
    }
    ctx->pc = 0x1488DCu;
}
