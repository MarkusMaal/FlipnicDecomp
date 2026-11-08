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

// Function: entry_00142ec4
// Address: 0x142ec4 - 0x142edc
void entry_00142ec4_0x142ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142ec4_0x142ec4");
#endif

    ctx->pc = 0x142ec4u;

    // 0x142ec4: 0x0  nop
    ctx->pc = 0x142ec4u;
    // NOP
    // 0x142ec8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142ecc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x142eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x142ed0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x142ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x142ed4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x142ED4u;
    {
        const bool branch_taken_0x142ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142ed4) {
            ctx->pc = 0x142E58u;
            return;
        }
    }
    ctx->pc = 0x142EDCu;
}
