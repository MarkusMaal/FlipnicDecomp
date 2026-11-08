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

// Function: entry_0013b824
// Address: 0x13b824 - 0x13b840
void entry_0013b824_0x13b824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b824_0x13b824");
#endif

    ctx->pc = 0x13b824u;

label_13b824:
    // 0x13b824: 0x2463ffa0  addiu       $v1, $v1, -0x60
    ctx->pc = 0x13b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
    // 0x13b828: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x13b828u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13b82c: 0x0  nop
    ctx->pc = 0x13b82cu;
    // NOP
    // 0x13b830: 0x0  nop
    ctx->pc = 0x13b830u;
    // NOP
    // 0x13b834: 0x0  nop
    ctx->pc = 0x13b834u;
    // NOP
    // 0x13b838: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13B838u;
    {
        const bool branch_taken_0x13b838 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b838) {
            ctx->pc = 0x13B824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b824;
        }
    }
    ctx->pc = 0x13B840u;
}
