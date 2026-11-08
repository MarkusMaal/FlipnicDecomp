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

// Function: entry_0014bbf0
// Address: 0x14bbf0 - 0x14bc18
void entry_0014bbf0_0x14bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bbf0_0x14bbf0");
#endif

    ctx->pc = 0x14bbf0u;

    // 0x14bbf0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14bbf4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14bbf8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x14bbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14bbfc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14bc00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14bc04: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x14bc04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x14bc08: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14bc0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14bc10: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x14BC10u;
    {
        const bool branch_taken_0x14bc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC10u;
        // 0x14bc14: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc10) {
            ctx->pc = 0x14BDCCu;
            return;
        }
    }
    ctx->pc = 0x14BC18u;
}
