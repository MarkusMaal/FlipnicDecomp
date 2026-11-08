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

// Function: entry_002095f0
// Address: 0x2095f0 - 0x20960c
void entry_002095f0_0x2095f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002095f0_0x2095f0");
#endif

    ctx->pc = 0x2095f0u;

label_2095f0:
    // 0x2095f0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2095f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2095f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2095f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2095f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2095f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2095fc: 0x0  nop
    ctx->pc = 0x2095fcu;
    // NOP
    // 0x209600: 0x0  nop
    ctx->pc = 0x209600u;
    // NOP
    // 0x209604: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x209604u;
    {
        const bool branch_taken_0x209604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x209604) {
            ctx->pc = 0x2095F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2095f0;
        }
    }
    ctx->pc = 0x20960Cu;
}
