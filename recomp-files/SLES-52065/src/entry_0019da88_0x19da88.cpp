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

// Function: entry_0019da88
// Address: 0x19da88 - 0x19da9c
void entry_0019da88_0x19da88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019da88_0x19da88");
#endif

    ctx->pc = 0x19da88u;

    // 0x19da88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19da8c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DA8Cu;
    {
        const bool branch_taken_0x19da8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19da8c) {
            ctx->pc = 0x19DA9Cu;
            return;
        }
    }
    ctx->pc = 0x19DA94u;
    // 0x19da94: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x19da94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x19da98: 0xac510674  sw          $s1, 0x674($v0)
    ctx->pc = 0x19da98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1652), GPR_U32(ctx, 17));
    ctx->pc = 0x19da9cu;
}
