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

// Function: entry_00114b2c
// Address: 0x114b2c - 0x114b58
void entry_00114b2c_0x114b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114b2c_0x114b2c");
#endif

    ctx->pc = 0x114b2cu;

    // 0x114b2c: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x114b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x114b30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x114b34: 0xae420268  sw          $v0, 0x268($s2)
    ctx->pc = 0x114b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
    // 0x114b38: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x114b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x114b3c: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x114b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
    // 0x114b40: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x114b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x114b44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114B44u;
    {
        const bool branch_taken_0x114b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114b44) {
            ctx->pc = 0x114B58u;
            return;
        }
    }
    ctx->pc = 0x114B4Cu;
    // 0x114b4c: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x114b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x114b50: 0x441040b  bgez        $v0, . + 4 + (0x40B << 2)
    ctx->pc = 0x114B50u;
    {
        const bool branch_taken_0x114b50 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x114b50) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x114B58u;
}
