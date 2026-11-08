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

// Function: entry_00178930
// Address: 0x178930 - 0x178948
void entry_00178930_0x178930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178930_0x178930");
#endif

    ctx->pc = 0x178930u;

    // 0x178930: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x178930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178934: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x178934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x178938: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x178938u;
    {
        const bool branch_taken_0x178938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178938u;
        // 0x17893c: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178938) {
            ctx->pc = 0x1788E8u;
            return;
        }
    }
    ctx->pc = 0x178940u;
    // 0x178940: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x178940u;
    {
        const bool branch_taken_0x178940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178940u;
        // 0x178944: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178940) {
            ctx->pc = 0x178958u;
            return;
        }
    }
    ctx->pc = 0x178948u;
}
