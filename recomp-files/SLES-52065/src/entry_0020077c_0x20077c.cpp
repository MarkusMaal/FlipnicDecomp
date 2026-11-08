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

// Function: entry_0020077c
// Address: 0x20077c - 0x20079c
void entry_0020077c_0x20077c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020077c_0x20077c");
#endif

    ctx->pc = 0x20077cu;

    // 0x20077c: 0x61023  negu        $v0, $a2
    ctx->pc = 0x20077cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x200780: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x200784: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x200784u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x200788: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x200788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20078c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20078cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x200790: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x200790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x200794: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x200794u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x200798: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x200798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    ctx->pc = 0x20079cu;
}
