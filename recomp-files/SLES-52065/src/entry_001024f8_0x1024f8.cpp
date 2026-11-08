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

// Function: entry_001024f8
// Address: 0x1024f8 - 0x102514
void entry_001024f8_0x1024f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001024f8_0x1024f8");
#endif

    ctx->pc = 0x1024f8u;

    // 0x1024f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1024f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1024fc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1024fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102500: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x102500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x102504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102508: 0x84530008  lh          $s3, 0x8($v0)
    ctx->pc = 0x102508u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10250c: 0x0  nop
    ctx->pc = 0x10250cu;
    // NOP
    // 0x102510: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x102510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    ctx->pc = 0x102514u;
}
