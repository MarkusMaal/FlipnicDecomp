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

// Function: entry_001f1e88
// Address: 0x1f1e88 - 0x1f1ebc
void entry_001f1e88_0x1f1e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1e88_0x1f1e88");
#endif

    ctx->pc = 0x1f1e88u;

label_1f1e88:
    // 0x1f1e88: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1f1e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f1e8c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F1E8Cu;
    {
        const bool branch_taken_0x1f1e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E8Cu;
        // 0x1f1e90: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e8c) {
            ctx->pc = 0x1F1EBCu;
            return;
        }
    }
    ctx->pc = 0x1F1E94u;
    // 0x1f1e94: 0x24e3a3d8  addiu       $v1, $a3, -0x5C28
    ctx->pc = 0x1f1e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943704));
    // 0x1f1e98: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f1e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f1e9c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f1e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1ea0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f1ea4: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F1EA4u;
    {
        const bool branch_taken_0x1f1ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EA4u;
        // 0x1f1ea8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ea4) {
            ctx->pc = 0x1F1E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1e88;
        }
    }
    ctx->pc = 0x1F1EACu;
    // 0x1f1eac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f1eb0: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1f1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1f1eb4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f1eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1f1eb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1f1eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1f1ebcu;
}
