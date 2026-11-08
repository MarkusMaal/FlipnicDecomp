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

// Function: entry_00123180
// Address: 0x123180 - 0x1231a4
void entry_00123180_0x123180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123180_0x123180");
#endif

    ctx->pc = 0x123180u;

    // 0x123180: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x123180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123184: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x123184u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x123188: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x123188u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12318c: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x12318Cu;
    {
        const bool branch_taken_0x12318c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12318c) {
            ctx->pc = 0x1231A4u;
            return;
        }
    }
    ctx->pc = 0x123194u;
    // 0x123194: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x123194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123198: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x123198u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x12319c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12319Cu;
    {
        const bool branch_taken_0x12319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12319Cu;
        // 0x1231a0: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12319c) {
            ctx->pc = 0x1231B4u;
            return;
        }
    }
    ctx->pc = 0x1231A4u;
}
