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

// Function: entry_001ef34c
// Address: 0x1ef34c - 0x1ef37c
void entry_001ef34c_0x1ef34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef34c_0x1ef34c");
#endif

    ctx->pc = 0x1ef34cu;

label_1ef34c:
    // 0x1ef34c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1ef34cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ef350: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EF350u;
    {
        const bool branch_taken_0x1ef350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF350u;
        // 0x1ef354: 0x24e2a3d8  addiu       $v0, $a3, -0x5C28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef350) {
            ctx->pc = 0x1EF384u;
            return;
        }
    }
    ctx->pc = 0x1EF358u;
    // 0x1ef358: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ef358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ef35c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ef35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ef360: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ef360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef364: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EF364u;
    {
        const bool branch_taken_0x1ef364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1EF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF364u;
        // 0x1ef368: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef364) {
            ctx->pc = 0x1EF34Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef34c;
        }
    }
    ctx->pc = 0x1EF36Cu;
    // 0x1ef36c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ef36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef370: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ef374: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF374u;
    {
        const bool branch_taken_0x1ef374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF374u;
        // 0x1ef378: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef374) {
            ctx->pc = 0x1EF388u;
            return;
        }
    }
    ctx->pc = 0x1EF37Cu;
}
