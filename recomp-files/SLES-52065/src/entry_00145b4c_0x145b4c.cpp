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

// Function: entry_00145b4c
// Address: 0x145b4c - 0x145b74
void entry_00145b4c_0x145b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145b4c_0x145b4c");
#endif

    ctx->pc = 0x145b4cu;

    // 0x145b4c: 0x0  nop
    ctx->pc = 0x145b4cu;
    // NOP
    // 0x145b50: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x145b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x145b54: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x145b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x145b58: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x145b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x145b5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x145b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x145b60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x145b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145b64: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x145b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x145b68: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x145B68u;
    {
        const bool branch_taken_0x145b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145b68) {
            ctx->pc = 0x145B74u;
            return;
        }
    }
    ctx->pc = 0x145B70u;
    // 0x145b70: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x145b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x145b74u;
}
