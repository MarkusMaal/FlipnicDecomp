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

// Function: entry_001df118
// Address: 0x1df118 - 0x1df13c
void entry_001df118_0x1df118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df118_0x1df118");
#endif

    ctx->pc = 0x1df118u;

label_1df118:
    // 0x1df118: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1df118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1df11c: 0x30480007  andi        $t0, $v0, 0x7
    ctx->pc = 0x1df11cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1df120: 0x811c0  sll         $v0, $t0, 7
    ctx->pc = 0x1df120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x1df124: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x1df124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1df128: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1df128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df12c: 0x1060ffea  beqz        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1DF12Cu;
    {
        const bool branch_taken_0x1df12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF12Cu;
        // 0x1df130: 0x28e60008  slti        $a2, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df12c) {
            ctx->pc = 0x1DF0D8u;
            return;
        }
    }
    ctx->pc = 0x1DF134u;
    // 0x1df134: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DF134u;
    {
        const bool branch_taken_0x1df134 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF134u;
        // 0x1df138: 0x1271021  addu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df134) {
            ctx->pc = 0x1DF118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df118;
        }
    }
    ctx->pc = 0x1DF13Cu;
}
