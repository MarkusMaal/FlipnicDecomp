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

// Function: entry_001dbc78
// Address: 0x1dbc78 - 0x1dbca0
void entry_001dbc78_0x1dbc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbc78_0x1dbc78");
#endif

    ctx->pc = 0x1dbc78u;

    // 0x1dbc78: 0x112000f1  beqz        $t1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1DBC78u;
    {
        const bool branch_taken_0x1dbc78 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC78u;
        // 0x1dbc7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc78) {
            ctx->pc = 0x1DC040u;
            return;
        }
    }
    ctx->pc = 0x1DBC80u;
    // 0x1dbc80: 0x19200016  blez        $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DBC80u;
    {
        const bool branch_taken_0x1dbc80 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1DBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC80u;
        // 0x1dbc84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc80) {
            ctx->pc = 0x1DBCDCu;
            return;
        }
    }
    ctx->pc = 0x1DBC88u;
    // 0x1dbc88: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dbc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dbc8c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1dbc8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc90: 0x244a7334  addiu       $t2, $v0, 0x7334
    ctx->pc = 0x1dbc90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 29492));
    // 0x1dbc94: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1dbc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dbc98: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1dbc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc9c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1dbc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->pc = 0x1dbca0u;
}
