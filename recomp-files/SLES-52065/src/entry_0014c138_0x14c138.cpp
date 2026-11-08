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

// Function: entry_0014c138
// Address: 0x14c138 - 0x14c14c
void entry_0014c138_0x14c138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c138_0x14c138");
#endif

    ctx->pc = 0x14c138u;

    // 0x14c138: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14c13c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x14c13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14c140: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14C140u;
    {
        const bool branch_taken_0x14c140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c140) {
            ctx->pc = 0x14C120u;
            return;
        }
    }
    ctx->pc = 0x14C148u;
    // 0x14c148: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14c148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x14c14cu;
}
