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

// Function: entry_001ebd48
// Address: 0x1ebd48 - 0x1ebd6c
void entry_001ebd48_0x1ebd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebd48_0x1ebd48");
#endif

    ctx->pc = 0x1ebd48u;

label_1ebd48:
    // 0x1ebd48: 0x42000039  di
    ctx->pc = 0x1ebd48u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x1ebd4c: 0x40f  sync.p
    ctx->pc = 0x1ebd4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebd50: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1ebd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1ebd54: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ebd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1ebd58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ebd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ebd5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EBD5Cu;
    {
        const bool branch_taken_0x1ebd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd5c) {
            ctx->pc = 0x1EBD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebd48;
        }
    }
    ctx->pc = 0x1EBD64u;
    // 0x1ebd64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBD64u;
    {
        const bool branch_taken_0x1ebd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD64u;
        // 0x1ebd68: 0x8e42a3b4  lw          $v0, -0x5C4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd64) {
            ctx->pc = 0x1EBD70u;
            return;
        }
    }
    ctx->pc = 0x1EBD6Cu;
}
