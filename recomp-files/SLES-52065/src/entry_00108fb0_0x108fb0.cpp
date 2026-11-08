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

// Function: entry_00108fb0
// Address: 0x108fb0 - 0x108fe4
void entry_00108fb0_0x108fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108fb0_0x108fb0");
#endif

    ctx->pc = 0x108fb0u;

    // 0x108fb0: 0x844301e8  lh          $v1, 0x1E8($v0)
    ctx->pc = 0x108fb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x108fb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108fb8: 0x146200da  bne         $v1, $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x108FB8u;
    {
        const bool branch_taken_0x108fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108fb8) {
            ctx->pc = 0x109324u;
            return;
        }
    }
    ctx->pc = 0x108FC0u;
    // 0x108fc0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x108fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x108fc4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x108fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108fc8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x108fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x108fcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x108fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108fd0: 0x80500024  lb          $s0, 0x24($v0)
    ctx->pc = 0x108fd0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x108fd4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108FD4u;
    {
        const bool branch_taken_0x108fd4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x108fd4) {
            ctx->pc = 0x108FE4u;
            return;
        }
    }
    ctx->pc = 0x108FDCu;
    // 0x108fdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108FDCu;
    {
        const bool branch_taken_0x108fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108fdc) {
            ctx->pc = 0x108FF0u;
            return;
        }
    }
    ctx->pc = 0x108FE4u;
}
