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

// Function: entry_001d0438
// Address: 0x1d0438 - 0x1d04b4
void entry_001d0438_0x1d0438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0438_0x1d0438");
#endif

    ctx->pc = 0x1d0438u;

label_1d0438:
    // 0x1d0438: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d043c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d0440: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x1d0440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d0444: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d0444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d0448: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1d0448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1d044c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d044cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0450: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d0450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d0454: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1d0454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1d0458: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d045c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d0460: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1d0460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1d0464: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0468: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d0468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d046c: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x1d046cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x1d0470: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0474: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d0474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d0478: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d0478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1d047c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0480: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d0480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d0484: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1d0484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1d0488: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d048c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d0490: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1d0490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1d0494: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0498: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d0498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d049c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x1d049cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x1d04a0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D04A0u;
    {
        const bool branch_taken_0x1d04a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04A0u;
        // 0x1d04a4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04a0) {
            ctx->pc = 0x1D0438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0438;
        }
    }
    ctx->pc = 0x1D04A8u;
    // 0x1d04a8: 0x2881000b  slti        $at, $a0, 0xB
    ctx->pc = 0x1d04a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d04ac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D04ACu;
    {
        const bool branch_taken_0x1d04ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04ACu;
        // 0x1d04b0: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04ac) {
            ctx->pc = 0x1D04D0u;
            return;
        }
    }
    ctx->pc = 0x1D04B4u;
}
