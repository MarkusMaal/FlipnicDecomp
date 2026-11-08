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

// Function: entry_00160a44
// Address: 0x160a44 - 0x160a64
void entry_00160a44_0x160a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160a44_0x160a44");
#endif

    ctx->pc = 0x160a44u;

label_160a44:
    // 0x160a44: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160a48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160a4c: 0x54182a  slt         $v1, $v0, $s4
    ctx->pc = 0x160a4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160a50: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x160a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x160a54: 0x90c40041  lbu         $a0, 0x41($a2)
    ctx->pc = 0x160a54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 65)));
    // 0x160a58: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x160a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x160a5c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x160A5Cu;
    {
        const bool branch_taken_0x160a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A5Cu;
        // 0x160a60: 0xa0c40042  sb          $a0, 0x42($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 66), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a5c) {
            ctx->pc = 0x160A44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160a44;
        }
    }
    ctx->pc = 0x160A64u;
}
