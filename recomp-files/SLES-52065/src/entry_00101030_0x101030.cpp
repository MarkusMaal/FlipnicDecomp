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

// Function: entry_00101030
// Address: 0x101030 - 0x101058
void entry_00101030_0x101030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101030_0x101030");
#endif

    ctx->pc = 0x101030u;

    // 0x101030: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x101030u;
    {
        const bool branch_taken_0x101030 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x101030) {
            ctx->pc = 0x101058u;
            return;
        }
    }
    ctx->pc = 0x101038u;
    // 0x101038: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x101038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10103c: 0x8c442c10  lw          $a0, 0x2C10($v0)
    ctx->pc = 0x10103cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
    // 0x101040: 0x8c432c1c  lw          $v1, 0x2C1C($v0)
    ctx->pc = 0x101040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
    // 0x101044: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x101044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101048: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x101048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10104c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10104cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x101050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101054: 0xa0400042  sb          $zero, 0x42($v0)
    ctx->pc = 0x101054u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 66), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x101058u;
}
