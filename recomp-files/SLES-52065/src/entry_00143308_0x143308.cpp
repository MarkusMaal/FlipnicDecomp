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

// Function: entry_00143308
// Address: 0x143308 - 0x143320
void entry_00143308_0x143308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143308_0x143308");
#endif

    ctx->pc = 0x143308u;

    // 0x143308: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x143308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x14330c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14330Cu;
    {
        const bool branch_taken_0x14330c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x143310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14330Cu;
        // 0x143310: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14330c) {
            ctx->pc = 0x143358u;
            return;
        }
    }
    ctx->pc = 0x143314u;
    // 0x143314: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x143314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x143318: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x143318u;
    {
        const bool branch_taken_0x143318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143318u;
        // 0x14331c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143318) {
            ctx->pc = 0x143358u;
            return;
        }
    }
    ctx->pc = 0x143320u;
}
