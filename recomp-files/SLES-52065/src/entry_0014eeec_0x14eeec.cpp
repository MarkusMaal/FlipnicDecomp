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

// Function: entry_0014eeec
// Address: 0x14eeec - 0x14ef08
void entry_0014eeec_0x14eeec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eeec_0x14eeec");
#endif

    ctx->pc = 0x14eeecu;

label_14eeec:
    // 0x14eeec: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x14eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x14eef0: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14eef0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14eef4: 0x0  nop
    ctx->pc = 0x14eef4u;
    // NOP
    // 0x14eef8: 0x0  nop
    ctx->pc = 0x14eef8u;
    // NOP
    // 0x14eefc: 0x0  nop
    ctx->pc = 0x14eefcu;
    // NOP
    // 0x14ef00: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14EF00u;
    {
        const bool branch_taken_0x14ef00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ef00) {
            ctx->pc = 0x14EEECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14eeec;
        }
    }
    ctx->pc = 0x14EF08u;
}
