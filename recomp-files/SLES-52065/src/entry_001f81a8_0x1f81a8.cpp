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

// Function: entry_001f81a8
// Address: 0x1f81a8 - 0x1f81c4
void entry_001f81a8_0x1f81a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f81a8_0x1f81a8");
#endif

    ctx->pc = 0x1f81a8u;

label_1f81a8:
    // 0x1f81a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f81ac: 0x0  nop
    ctx->pc = 0x1f81acu;
    // NOP
    // 0x1f81b0: 0x0  nop
    ctx->pc = 0x1f81b0u;
    // NOP
    // 0x1f81b4: 0x0  nop
    ctx->pc = 0x1f81b4u;
    // NOP
    // 0x1f81b8: 0x0  nop
    ctx->pc = 0x1f81b8u;
    // NOP
    // 0x1f81bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F81BCu;
    {
        const bool branch_taken_0x1f81bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f81bc) {
            ctx->pc = 0x1F81A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f81a8;
        }
    }
    ctx->pc = 0x1F81C4u;
}
