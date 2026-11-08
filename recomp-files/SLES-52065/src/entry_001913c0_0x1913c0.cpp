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

// Function: entry_001913c0
// Address: 0x1913c0 - 0x1913e8
void entry_001913c0_0x1913c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001913c0_0x1913c0");
#endif

    ctx->pc = 0x1913c0u;

    // 0x1913c0: 0x848301ec  lh          $v1, 0x1EC($a0)
    ctx->pc = 0x1913c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 492)));
    // 0x1913c4: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1913C4u;
    {
        const bool branch_taken_0x1913c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1913c4) {
            ctx->pc = 0x1913F8u;
            return;
        }
    }
    ctx->pc = 0x1913CCu;
    // 0x1913cc: 0x848301e8  lh          $v1, 0x1E8($a0)
    ctx->pc = 0x1913ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x1913d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1913d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1913d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1913D4u;
    {
        const bool branch_taken_0x1913d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1913D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913D4u;
        // 0x1913d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913d4) {
            ctx->pc = 0x1913E8u;
            return;
        }
    }
    ctx->pc = 0x1913DCu;
    // 0x1913dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1913DCu;
    {
        const bool branch_taken_0x1913dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913DCu;
        // 0x1913e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913dc) {
            ctx->pc = 0x1913E8u;
            return;
        }
    }
    ctx->pc = 0x1913E4u;
    // 0x1913e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1913e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1913e8u;
}
