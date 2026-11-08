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

// Function: entry_0013b16c
// Address: 0x13b16c - 0x13b188
void entry_0013b16c_0x13b16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b16c_0x13b16c");
#endif

    ctx->pc = 0x13b16cu;

label_13b16c:
    // 0x13b16c: 0x24e70060  addiu       $a3, $a3, 0x60
    ctx->pc = 0x13b16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x13b170: 0xe2182b  sltu        $v1, $a3, $v0
    ctx->pc = 0x13b170u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b174: 0x0  nop
    ctx->pc = 0x13b174u;
    // NOP
    // 0x13b178: 0x0  nop
    ctx->pc = 0x13b178u;
    // NOP
    // 0x13b17c: 0x0  nop
    ctx->pc = 0x13b17cu;
    // NOP
    // 0x13b180: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13B180u;
    {
        const bool branch_taken_0x13b180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b180) {
            ctx->pc = 0x13B16Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b16c;
        }
    }
    ctx->pc = 0x13B188u;
}
