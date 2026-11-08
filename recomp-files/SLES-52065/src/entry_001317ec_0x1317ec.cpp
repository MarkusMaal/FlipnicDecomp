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

// Function: entry_001317ec
// Address: 0x1317ec - 0x131800
void entry_001317ec_0x1317ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001317ec_0x1317ec");
#endif

    ctx->pc = 0x1317ecu;

    // 0x1317ec: 0x0  nop
    ctx->pc = 0x1317ecu;
    // NOP
    // 0x1317f0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1317f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1317f4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1317f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1317f8: 0x1483ffe7  bne         $a0, $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1317F8u;
    {
        const bool branch_taken_0x1317f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1317f8) {
            ctx->pc = 0x131798u;
            return;
        }
    }
    ctx->pc = 0x131800u;
}
