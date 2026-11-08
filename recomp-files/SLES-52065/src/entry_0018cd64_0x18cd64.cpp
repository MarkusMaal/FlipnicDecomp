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

// Function: entry_0018cd64
// Address: 0x18cd64 - 0x18cd88
void entry_0018cd64_0x18cd64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cd64_0x18cd64");
#endif

    ctx->pc = 0x18cd64u;

    // 0x18cd64: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CD64u;
    {
        const bool branch_taken_0x18cd64 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x18cd64) {
            ctx->pc = 0x18CD88u;
            return;
        }
    }
    ctx->pc = 0x18CD6Cu;
    // 0x18cd6c: 0x8e02046c  lw          $v0, 0x46C($s0)
    ctx->pc = 0x18cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x18cd70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cd74: 0xae02046c  sw          $v0, 0x46C($s0)
    ctx->pc = 0x18cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1132), GPR_U32(ctx, 2));
    // 0x18cd78: 0x8e02046c  lw          $v0, 0x46C($s0)
    ctx->pc = 0x18cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x18cd7c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18CD7Cu;
    {
        const bool branch_taken_0x18cd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cd7c) {
            ctx->pc = 0x18CD88u;
            return;
        }
    }
    ctx->pc = 0x18CD84u;
    // 0x18cd84: 0xae002714  sw          $zero, 0x2714($s0)
    ctx->pc = 0x18cd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10004), GPR_U32(ctx, 0));
    ctx->pc = 0x18cd88u;
}
