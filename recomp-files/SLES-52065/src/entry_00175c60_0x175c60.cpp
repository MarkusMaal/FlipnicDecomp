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

// Function: entry_00175c60
// Address: 0x175c60 - 0x175c84
void entry_00175c60_0x175c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175c60_0x175c60");
#endif

    ctx->pc = 0x175c60u;

    // 0x175c60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175c64: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175c68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175c6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175c70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x175c70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175c74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175c78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x175c7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175c80: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x175c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
    ctx->pc = 0x175c84u;
}
