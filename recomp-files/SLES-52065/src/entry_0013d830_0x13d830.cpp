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

// Function: entry_0013d830
// Address: 0x13d830 - 0x13d840
void entry_0013d830_0x13d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d830_0x13d830");
#endif

    ctx->pc = 0x13d830u;

    // 0x13d830: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x13d830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13d834: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x13d834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x13d838: 0x1483ffe8  bne         $a0, $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x13D838u;
    {
        const bool branch_taken_0x13d838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13d838) {
            ctx->pc = 0x13D7DCu;
            return;
        }
    }
    ctx->pc = 0x13D840u;
}
