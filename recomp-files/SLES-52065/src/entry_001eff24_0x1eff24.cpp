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

// Function: entry_001eff24
// Address: 0x1eff24 - 0x1eff58
void entry_001eff24_0x1eff24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eff24_0x1eff24");
#endif

    ctx->pc = 0x1eff24u;

label_1eff24:
    // 0x1eff24: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1eff24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1eff28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EFF28u;
    {
        const bool branch_taken_0x1eff28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF28u;
        // 0x1eff2c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff28) {
            ctx->pc = 0x1EFF58u;
            return;
        }
    }
    ctx->pc = 0x1EFF30u;
    // 0x1eff30: 0x24e3a3d8  addiu       $v1, $a3, -0x5C28
    ctx->pc = 0x1eff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943704));
    // 0x1eff34: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1eff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eff38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1eff38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eff3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1eff40: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EFF40u;
    {
        const bool branch_taken_0x1eff40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1EFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF40u;
        // 0x1eff44: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff40) {
            ctx->pc = 0x1EFF24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eff24;
        }
    }
    ctx->pc = 0x1EFF48u;
    // 0x1eff48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1eff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1eff4c: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1eff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1eff50: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1eff50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1eff54: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1eff54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1eff58u;
}
