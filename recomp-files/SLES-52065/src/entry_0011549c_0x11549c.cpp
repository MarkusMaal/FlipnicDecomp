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

// Function: entry_0011549c
// Address: 0x11549c - 0x1154c8
void entry_0011549c_0x11549c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011549c_0x11549c");
#endif

    ctx->pc = 0x11549cu;

    // 0x11549c: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x11549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x1154a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1154a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1154a4: 0xae420268  sw          $v0, 0x268($s2)
    ctx->pc = 0x1154a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
    // 0x1154a8: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x1154a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x1154ac: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x1154acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
    // 0x1154b0: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1154b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1154b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1154B4u;
    {
        const bool branch_taken_0x1154b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1154b4) {
            ctx->pc = 0x1154C8u;
            return;
        }
    }
    ctx->pc = 0x1154BCu;
    // 0x1154bc: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x1154bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x1154c0: 0x44101af  bgez        $v0, . + 4 + (0x1AF << 2)
    ctx->pc = 0x1154C0u;
    {
        const bool branch_taken_0x1154c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1154c0) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x1154C8u;
}
