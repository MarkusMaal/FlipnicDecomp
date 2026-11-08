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

// Function: entry_00114fdc
// Address: 0x114fdc - 0x115008
void entry_00114fdc_0x114fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114fdc_0x114fdc");
#endif

    ctx->pc = 0x114fdcu;

    // 0x114fdc: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x114fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x114fe0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x114fe4: 0xae420268  sw          $v0, 0x268($s2)
    ctx->pc = 0x114fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
    // 0x114fe8: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x114fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x114fec: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x114fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
    // 0x114ff0: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x114ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x114ff4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114FF4u;
    {
        const bool branch_taken_0x114ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114ff4) {
            ctx->pc = 0x115008u;
            return;
        }
    }
    ctx->pc = 0x114FFCu;
    // 0x114ffc: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x114ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x115000: 0x44102df  bgez        $v0, . + 4 + (0x2DF << 2)
    ctx->pc = 0x115000u;
    {
        const bool branch_taken_0x115000 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x115000) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x115008u;
}
