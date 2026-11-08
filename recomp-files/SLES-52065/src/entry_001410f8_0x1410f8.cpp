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

// Function: entry_001410f8
// Address: 0x1410f8 - 0x141118
void entry_001410f8_0x1410f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001410f8_0x1410f8");
#endif

    ctx->pc = 0x1410f8u;

    // 0x1410f8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1410f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1410fc: 0x1272823  subu        $a1, $t1, $a3
    ctx->pc = 0x1410fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x141100: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x141100u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x141104: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x141104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x141108: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x141108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14110c: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x14110cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x141110: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x141110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x141114: 0xafb200f0  sw          $s2, 0xF0($sp)
    ctx->pc = 0x141114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 18));
    ctx->pc = 0x141118u;
}
