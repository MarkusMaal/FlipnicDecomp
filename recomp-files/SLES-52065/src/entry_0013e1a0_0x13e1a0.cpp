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

// Function: entry_0013e1a0
// Address: 0x13e1a0 - 0x13e210
void entry_0013e1a0_0x13e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e1a0_0x13e1a0");
#endif

    ctx->pc = 0x13e1a0u;

label_13e1a0:
    // 0x13e1a0: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1a4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x13e1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x13e1a8: 0x2ca30020  sltiu       $v1, $a1, 0x20
    ctx->pc = 0x13e1a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x13e1ac: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x13e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x13e1b4: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1b8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1bc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x13e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13e1c0: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1c4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1c8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x13e1cc: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1d0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1d4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x13e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x13e1d8: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1dc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1e0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x13e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x13e1e4: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1e8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1ec: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x13e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x13e1f0: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1f4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1f8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x13e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x13e1fc: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e200: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e204: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x13e204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x13e208: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x13E208u;
    {
        const bool branch_taken_0x13e208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E208u;
        // 0x13e20c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e208) {
            ctx->pc = 0x13E1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e1a0;
        }
    }
    ctx->pc = 0x13E210u;
}
