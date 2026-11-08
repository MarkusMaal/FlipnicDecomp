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

// Function: entry_00109064
// Address: 0x109064 - 0x109078
void entry_00109064_0x109064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109064_0x109064");
#endif

    ctx->pc = 0x109064u;

    // 0x109064: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x109064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x109068: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109068u;
    {
        const bool branch_taken_0x109068 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109068u;
        // 0x10906c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109068) {
            ctx->pc = 0x109078u;
            return;
        }
    }
    ctx->pc = 0x109070u;
    // 0x109070: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109070u;
    {
        const bool branch_taken_0x109070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109070u;
        // 0x109074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109070) {
            ctx->pc = 0x109090u;
            return;
        }
    }
    ctx->pc = 0x109078u;
}
