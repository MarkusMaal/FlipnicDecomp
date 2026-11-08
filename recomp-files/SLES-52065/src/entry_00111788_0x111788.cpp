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

// Function: entry_00111788
// Address: 0x111788 - 0x1117b0
void entry_00111788_0x111788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111788_0x111788");
#endif

    ctx->pc = 0x111788u;

    // 0x111788: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x111788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11178c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11178cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x111790: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111794: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x111794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x111798: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11179c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x11179cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1117a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1117a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1117a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1117a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1117a8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1117a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1117ac: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x1117acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
    ctx->pc = 0x1117b0u;
}
