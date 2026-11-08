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

// Function: entry_0012ef9c
// Address: 0x12ef9c - 0x12efb8
void entry_0012ef9c_0x12ef9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ef9c_0x12ef9c");
#endif

    ctx->pc = 0x12ef9cu;

label_12ef9c:
    // 0x12ef9c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x12ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x12efa0: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x12efa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12efa4: 0x0  nop
    ctx->pc = 0x12efa4u;
    // NOP
    // 0x12efa8: 0x0  nop
    ctx->pc = 0x12efa8u;
    // NOP
    // 0x12efac: 0x0  nop
    ctx->pc = 0x12efacu;
    // NOP
    // 0x12efb0: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12EFB0u;
    {
        const bool branch_taken_0x12efb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12efb0) {
            ctx->pc = 0x12EF9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ef9c;
        }
    }
    ctx->pc = 0x12EFB8u;
}
