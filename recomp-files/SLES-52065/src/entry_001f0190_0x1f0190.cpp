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

// Function: entry_001f0190
// Address: 0x1f0190 - 0x1f01c4
void entry_001f0190_0x1f0190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0190_0x1f0190");
#endif

    ctx->pc = 0x1f0190u;

label_1f0190:
    // 0x1f0190: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1f0190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f0194: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F0194u;
    {
        const bool branch_taken_0x1f0194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0194u;
        // 0x1f0198: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0194) {
            ctx->pc = 0x1F01C4u;
            return;
        }
    }
    ctx->pc = 0x1F019Cu;
    // 0x1f019c: 0x24e3a3d8  addiu       $v1, $a3, -0x5C28
    ctx->pc = 0x1f019cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943704));
    // 0x1f01a0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f01a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f01a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f01a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f01a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f01ac: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F01ACu;
    {
        const bool branch_taken_0x1f01ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01ACu;
        // 0x1f01b0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01ac) {
            ctx->pc = 0x1F0190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0190;
        }
    }
    ctx->pc = 0x1F01B4u;
    // 0x1f01b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f01b8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1f01b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1f01bc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f01bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1f01c0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1f01c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1f01c4u;
}
