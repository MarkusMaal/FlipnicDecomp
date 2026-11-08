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

// Function: entry_00136314
// Address: 0x136314 - 0x136324
void entry_00136314_0x136314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136314_0x136314");
#endif

    ctx->pc = 0x136314u;

    // 0x136314: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x136314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x136318: 0x285082b  sltu        $at, $s4, $a1
    ctx->pc = 0x136318u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13631c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x13631Cu;
    {
        const bool branch_taken_0x13631c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13631c) {
            ctx->pc = 0x136340u;
            return;
        }
    }
    ctx->pc = 0x136324u;
}
