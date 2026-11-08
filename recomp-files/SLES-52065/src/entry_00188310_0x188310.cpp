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

// Function: entry_00188310
// Address: 0x188310 - 0x188320
void entry_00188310_0x188310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188310_0x188310");
#endif

    ctx->pc = 0x188310u;

    // 0x188310: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x188310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x188314: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x188314u;
    {
        const bool branch_taken_0x188314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188314) {
            ctx->pc = 0x188320u;
            return;
        }
    }
    ctx->pc = 0x18831Cu;
    // 0x18831c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x18831cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x188320u;
}
