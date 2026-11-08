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

// Function: entry_001481ac
// Address: 0x1481ac - 0x1481bc
void entry_001481ac_0x1481ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001481ac_0x1481ac");
#endif

    ctx->pc = 0x1481acu;

    // 0x1481ac: 0x0  nop
    ctx->pc = 0x1481acu;
    // NOP
    // 0x1481b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1481b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1481b4: 0x1454ffd4  bne         $v0, $s4, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1481B4u;
    {
        const bool branch_taken_0x1481b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1481b4) {
            ctx->pc = 0x148108u;
            return;
        }
    }
    ctx->pc = 0x1481BCu;
}
