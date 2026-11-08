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

// Function: entry_001571ec
// Address: 0x1571ec - 0x157204
void entry_001571ec_0x1571ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001571ec_0x1571ec");
#endif

    ctx->pc = 0x1571ecu;

    // 0x1571ec: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x1571ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1571f0: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1571f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1571f4: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x1571f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1571f8: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1571F8u;
    {
        const bool branch_taken_0x1571f8 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1571f8) {
            ctx->pc = 0x157204u;
            return;
        }
    }
    ctx->pc = 0x157200u;
    // 0x157200: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x157200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x157204u;
}
