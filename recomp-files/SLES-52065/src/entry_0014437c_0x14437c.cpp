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

// Function: entry_0014437c
// Address: 0x14437c - 0x144398
void entry_0014437c_0x14437c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014437c_0x14437c");
#endif

    ctx->pc = 0x14437cu;

label_14437c:
    // 0x14437c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x14437cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x144380: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x144380u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x144384: 0x0  nop
    ctx->pc = 0x144384u;
    // NOP
    // 0x144388: 0x0  nop
    ctx->pc = 0x144388u;
    // NOP
    // 0x14438c: 0x0  nop
    ctx->pc = 0x14438cu;
    // NOP
    // 0x144390: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x144390u;
    {
        const bool branch_taken_0x144390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x144390) {
            ctx->pc = 0x14437Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14437c;
        }
    }
    ctx->pc = 0x144398u;
}
