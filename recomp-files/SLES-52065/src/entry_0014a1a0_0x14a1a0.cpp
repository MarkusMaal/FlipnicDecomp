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

// Function: entry_0014a1a0
// Address: 0x14a1a0 - 0x14a1f4
void entry_0014a1a0_0x14a1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a1a0_0x14a1a0");
#endif

    ctx->pc = 0x14a1a0u;

    // 0x14a1a0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a1a4: 0x8fa3052c  lw          $v1, 0x52C($sp)
    ctx->pc = 0x14a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1324)));
    // 0x14a1a8: 0x1483ffe0  bne         $a0, $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x14A1A8u;
    {
        const bool branch_taken_0x14a1a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a1a8) {
            ctx->pc = 0x14A12Cu;
            return;
        }
    }
    ctx->pc = 0x14A1B0u;
    // 0x14a1b0: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x14a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14a1b4: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x14a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x14a1b8: 0x27a300f4  addiu       $v1, $sp, 0xF4
    ctx->pc = 0x14a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x14a1bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a1c0: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x14a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x14a1c4: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x14a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x14a1c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a1cc: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x14a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x14a1d0: 0x27a300fc  addiu       $v1, $sp, 0xFC
    ctx->pc = 0x14a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x14a1d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a1d8: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x14a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x14a1dc: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x14a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14a1e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a1e4: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x14a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x14a1e8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x14a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14a1ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14A1ECu;
    {
        const bool branch_taken_0x14a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1ECu;
        // 0x14a1f0: 0xafa30164  sw          $v1, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1ec) {
            ctx->pc = 0x14A234u;
            return;
        }
    }
    ctx->pc = 0x14A1F4u;
}
