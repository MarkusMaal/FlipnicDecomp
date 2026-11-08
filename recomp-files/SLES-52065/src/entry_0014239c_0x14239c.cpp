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

// Function: entry_0014239c
// Address: 0x14239c - 0x1423b4
void entry_0014239c_0x14239c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014239c_0x14239c");
#endif

    ctx->pc = 0x14239cu;

    // 0x14239c: 0x0  nop
    ctx->pc = 0x14239cu;
    // NOP
    // 0x1423a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1423a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1423a4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1423a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1423a8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1423a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1423ac: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1423ACu;
    {
        const bool branch_taken_0x1423ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1423ac) {
            ctx->pc = 0x142330u;
            return;
        }
    }
    ctx->pc = 0x1423B4u;
}
