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

// Function: entry_001a527c
// Address: 0x1a527c - 0x1a52a4
void entry_001a527c_0x1a527c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a527c_0x1a527c");
#endif

    ctx->pc = 0x1a527cu;

label_1a527c:
    // 0x1a527c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a5280: 0x0  nop
    ctx->pc = 0x1a5280u;
    // NOP
    // 0x1a5284: 0x0  nop
    ctx->pc = 0x1a5284u;
    // NOP
    // 0x1a5288: 0x0  nop
    ctx->pc = 0x1a5288u;
    // NOP
    // 0x1a528c: 0x0  nop
    ctx->pc = 0x1a528cu;
    // NOP
    // 0x1a5290: 0x1860fffa  blez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A5290u;
    {
        const bool branch_taken_0x1a5290 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a5290) {
            ctx->pc = 0x1A527Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a527c;
        }
    }
    ctx->pc = 0x1A5298u;
    // 0x1a5298: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x1a5298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a529c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A529Cu;
    {
        const bool branch_taken_0x1a529c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a529c) {
            ctx->pc = 0x1A52C0u;
            return;
        }
    }
    ctx->pc = 0x1A52A4u;
}
