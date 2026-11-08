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

// Function: entry_00108a0c
// Address: 0x108a0c - 0x108a24
void entry_00108a0c_0x108a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108a0c_0x108a0c");
#endif

    ctx->pc = 0x108a0cu;

    // 0x108a0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x108a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108a10: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x108a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x108a14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x108a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x108a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108a1c: 0x84530008  lh          $s3, 0x8($v0)
    ctx->pc = 0x108a1cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x108a20: 0x0  nop
    ctx->pc = 0x108a20u;
    // NOP
    ctx->pc = 0x108a24u;
}
