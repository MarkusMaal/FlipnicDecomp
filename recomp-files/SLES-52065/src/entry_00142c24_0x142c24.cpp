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

// Function: entry_00142c24
// Address: 0x142c24 - 0x142c4c
void entry_00142c24_0x142c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142c24_0x142c24");
#endif

    ctx->pc = 0x142c24u;

    // 0x142c24: 0x0  nop
    ctx->pc = 0x142c24u;
    // NOP
    // 0x142c28: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142c2c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x142c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x142c30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142C30u;
    {
        const bool branch_taken_0x142c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142c30) {
            ctx->pc = 0x142C4Cu;
            return;
        }
    }
    ctx->pc = 0x142C38u;
    // 0x142c38: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x142c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142c3c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x142c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x142c40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x142c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142c44: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x142c44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x142c48: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x142c48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x142c4cu;
}
