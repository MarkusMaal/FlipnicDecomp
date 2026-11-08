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

// Function: entry_001eea08
// Address: 0x1eea08 - 0x1eea28
void entry_001eea08_0x1eea08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eea08_0x1eea08");
#endif

    ctx->pc = 0x1eea08u;

label_1eea08:
    // 0x1eea08: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1eea08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea0c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1eea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1eea10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1eea10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea14: 0x0  nop
    ctx->pc = 0x1eea14u;
    // NOP
    // 0x1eea18: 0x0  nop
    ctx->pc = 0x1eea18u;
    // NOP
    // 0x1eea1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EEA1Cu;
    {
        const bool branch_taken_0x1eea1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eea1c) {
            ctx->pc = 0x1EEA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eea08;
        }
    }
    ctx->pc = 0x1EEA24u;
    // 0x1eea24: 0xac910014  sw          $s1, 0x14($a0)
    ctx->pc = 0x1eea24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 17));
    ctx->pc = 0x1eea28u;
}
