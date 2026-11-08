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

// Function: entry_001232fc
// Address: 0x1232fc - 0x123324
void entry_001232fc_0x1232fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001232fc_0x1232fc");
#endif

    ctx->pc = 0x1232fcu;

    // 0x1232fc: 0x0  nop
    ctx->pc = 0x1232fcu;
    // NOP
    // 0x123300: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x123300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x123304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x123304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x123308: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x123308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12330c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12330Cu;
    {
        const bool branch_taken_0x12330c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12330c) {
            ctx->pc = 0x123324u;
            return;
        }
    }
    ctx->pc = 0x123314u;
    // 0x123314: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123318: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x123318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x12331c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12331Cu;
    {
        const bool branch_taken_0x12331c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12331Cu;
        // 0x123320: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12331c) {
            ctx->pc = 0x123338u;
            return;
        }
    }
    ctx->pc = 0x123324u;
}
