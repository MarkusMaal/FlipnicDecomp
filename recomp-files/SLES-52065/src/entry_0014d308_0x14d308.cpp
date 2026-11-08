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

// Function: entry_0014d308
// Address: 0x14d308 - 0x14d324
void entry_0014d308_0x14d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d308_0x14d308");
#endif

    ctx->pc = 0x14d308u;

    // 0x14d308: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x14d308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14d30c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14d310: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d314: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x14d314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x14d318: 0x213082b  sltu        $at, $s0, $s3
    ctx->pc = 0x14d318u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14d31c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x14D31Cu;
    {
        const bool branch_taken_0x14d31c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d31c) {
            ctx->pc = 0x14D350u;
            return;
        }
    }
    ctx->pc = 0x14D324u;
}
