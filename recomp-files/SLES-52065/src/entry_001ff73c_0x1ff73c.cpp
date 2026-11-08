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

// Function: entry_001ff73c
// Address: 0x1ff73c - 0x1ff750
void entry_001ff73c_0x1ff73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff73c_0x1ff73c");
#endif

    ctx->pc = 0x1ff73cu;

label_1ff73c:
    // 0x1ff73c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1ff73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff740: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF740u;
    {
        const bool branch_taken_0x1ff740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF740u;
        // 0x1ff744: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff740) {
            ctx->pc = 0x1FF758u;
            return;
        }
    }
    ctx->pc = 0x1FF748u;
    // 0x1ff748: 0x14c3fffc  bne         $a2, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1FF748u;
    {
        const bool branch_taken_0x1ff748 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF748u;
        // 0x1ff74c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff748) {
            ctx->pc = 0x1FF73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff73c;
        }
    }
    ctx->pc = 0x1FF750u;
}
