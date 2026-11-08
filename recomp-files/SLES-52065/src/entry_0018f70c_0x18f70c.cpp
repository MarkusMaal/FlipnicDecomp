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

// Function: entry_0018f70c
// Address: 0x18f70c - 0x18f734
void entry_0018f70c_0x18f70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f70c_0x18f70c");
#endif

    ctx->pc = 0x18f70cu;

label_18f70c:
    // 0x18f70c: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x18f70cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f710: 0x0  nop
    ctx->pc = 0x18f710u;
    // NOP
    // 0x18f714: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F714u;
    {
        const bool branch_taken_0x18f714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f714) {
            ctx->pc = 0x18F734u;
            return;
        }
    }
    ctx->pc = 0x18F71Cu;
    // 0x18f71c: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x18f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x18f720: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x18f720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x18f724: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18f724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18f728: 0x28e30010  slti        $v1, $a3, 0x10
    ctx->pc = 0x18f728u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18f72c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18F72Cu;
    {
        const bool branch_taken_0x18f72c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F72Cu;
        // 0x18f730: 0xa71821  addu        $v1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f72c) {
            ctx->pc = 0x18F70Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f70c;
        }
    }
    ctx->pc = 0x18F734u;
}
