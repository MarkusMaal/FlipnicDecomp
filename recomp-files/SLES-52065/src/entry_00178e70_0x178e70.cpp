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

// Function: entry_00178e70
// Address: 0x178e70 - 0x178e8c
void entry_00178e70_0x178e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178e70_0x178e70");
#endif

    ctx->pc = 0x178e70u;

    // 0x178e70: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x178e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178e74: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x178e74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x178e78: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x178E78u;
    {
        const bool branch_taken_0x178e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178e78) {
            ctx->pc = 0x178E28u;
            return;
        }
    }
    ctx->pc = 0x178E80u;
    // 0x178e80: 0xae200c20  sw          $zero, 0xC20($s1)
    ctx->pc = 0x178e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3104), GPR_U32(ctx, 0));
    // 0x178e84: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x178E84u;
    {
        const bool branch_taken_0x178e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E84u;
        // 0x178e88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e84) {
            ctx->pc = 0x178F28u;
            return;
        }
    }
    ctx->pc = 0x178E8Cu;
}
