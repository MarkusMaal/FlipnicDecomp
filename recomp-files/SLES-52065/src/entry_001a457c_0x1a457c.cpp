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

// Function: entry_001a457c
// Address: 0x1a457c - 0x1a45a4
void entry_001a457c_0x1a457c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a457c_0x1a457c");
#endif

    ctx->pc = 0x1a457cu;

    // 0x1a457c: 0x12420014  beq         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A457Cu;
    {
        const bool branch_taken_0x1a457c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a457c) {
            ctx->pc = 0x1A45D0u;
            return;
        }
    }
    ctx->pc = 0x1A4584u;
    // 0x1a4584: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a4584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a4588: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4588u;
    {
        const bool branch_taken_0x1a4588 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4588) {
            ctx->pc = 0x1A45A4u;
            return;
        }
    }
    ctx->pc = 0x1A4590u;
    // 0x1a4590: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a4594: 0x124200b5  beq         $s2, $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1A4594u;
    {
        const bool branch_taken_0x1a4594 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4594) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A459Cu;
    // 0x1a459c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A459Cu;
    {
        const bool branch_taken_0x1a459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a459c) {
            ctx->pc = 0x1A45F0u;
            return;
        }
    }
    ctx->pc = 0x1A45A4u;
}
