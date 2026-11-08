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

// Function: entry_001f4468
// Address: 0x1f4468 - 0x1f4484
void entry_001f4468_0x1f4468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4468_0x1f4468");
#endif

    ctx->pc = 0x1f4468u;

label_1f4468:
    // 0x1f4468: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f4468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f446c: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F446Cu;
    {
        const bool branch_taken_0x1f446c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1F4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F446Cu;
        // 0x1f4470: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f446c) {
            ctx->pc = 0x1F4484u;
            return;
        }
    }
    ctx->pc = 0x1F4474u;
    // 0x1f4474: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1F4474u;
    {
        const bool branch_taken_0x1f4474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4474) {
            ctx->pc = 0x1F4478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4474u;
            // 0x1f4478: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4468;
        }
    }
    ctx->pc = 0x1F447Cu;
    // 0x1f447c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F447Cu;
    {
        const bool branch_taken_0x1f447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F447Cu;
        // 0x1f4480: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f447c) {
            ctx->pc = 0x1F4488u;
            return;
        }
    }
    ctx->pc = 0x1F4484u;
}
