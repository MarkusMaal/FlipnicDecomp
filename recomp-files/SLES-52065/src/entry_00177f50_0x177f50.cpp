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

// Function: entry_00177f50
// Address: 0x177f50 - 0x177f6c
void entry_00177f50_0x177f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177f50_0x177f50");
#endif

    ctx->pc = 0x177f50u;

    // 0x177f50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x177f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x177f54: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x177f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x177f58: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x177f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x177f5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x177f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x177f60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x177f60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x177f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177f68: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x177f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x177f6cu;
}
