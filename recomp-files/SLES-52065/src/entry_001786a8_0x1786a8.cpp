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

// Function: entry_001786a8
// Address: 0x1786a8 - 0x1786c4
void entry_001786a8_0x1786a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001786a8_0x1786a8");
#endif

    ctx->pc = 0x1786a8u;

    // 0x1786a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1786a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1786ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1786acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1786b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1786b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1786b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1786b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1786b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1786b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1786bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1786bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1786c0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1786c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x1786c4u;
}
