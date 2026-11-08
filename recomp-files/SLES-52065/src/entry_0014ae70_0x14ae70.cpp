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

// Function: entry_0014ae70
// Address: 0x14ae70 - 0x14aeb0
void entry_0014ae70_0x14ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ae70_0x14ae70");
#endif

    ctx->pc = 0x14ae70u;

    // 0x14ae70: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x14ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x14ae74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14ae78: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x14ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
    // 0x14ae7c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14ae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ae80: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x14ae80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x14ae84: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x14ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x14ae88: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x14ae88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14ae8c: 0x14a6001c  bne         $a1, $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x14AE8Cu;
    {
        const bool branch_taken_0x14ae8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x14ae8c) {
            ctx->pc = 0x14AF00u;
            return;
        }
    }
    ctx->pc = 0x14AE94u;
    // 0x14ae94: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x14ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14ae98: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14ae98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14ae9c: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x14ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14aea0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AEA0u;
    {
        const bool branch_taken_0x14aea0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x14AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AEA0u;
        // 0x14aea4: 0x56883  sra         $t5, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aea0) {
            ctx->pc = 0x14AEB0u;
            return;
        }
    }
    ctx->pc = 0x14AEA8u;
    // 0x14aea8: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x14aea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x14aeac: 0x56883  sra         $t5, $a1, 2
    ctx->pc = 0x14aeacu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 5), 2));
    ctx->pc = 0x14aeb0u;
}
