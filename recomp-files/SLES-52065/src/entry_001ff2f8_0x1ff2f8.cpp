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

// Function: entry_001ff2f8
// Address: 0x1ff2f8 - 0x1ff314
void entry_001ff2f8_0x1ff2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff2f8_0x1ff2f8");
#endif

    ctx->pc = 0x1ff2f8u;

label_1ff2f8:
    // 0x1ff2f8: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x1ff2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x1ff2fc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1ff2fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1ff300: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1ff300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ff304: 0x0  nop
    ctx->pc = 0x1ff304u;
    // NOP
    // 0x1ff308: 0x0  nop
    ctx->pc = 0x1ff308u;
    // NOP
    // 0x1ff30c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF30Cu;
    {
        const bool branch_taken_0x1ff30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff30c) {
            ctx->pc = 0x1FF2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff2f8;
        }
    }
    ctx->pc = 0x1FF314u;
}
