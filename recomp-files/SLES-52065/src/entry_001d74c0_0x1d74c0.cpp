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

// Function: entry_001d74c0
// Address: 0x1d74c0 - 0x1d74d8
void entry_001d74c0_0x1d74c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d74c0_0x1d74c0");
#endif

    ctx->pc = 0x1d74c0u;

    // 0x1d74c0: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D74C0u;
    {
        const bool branch_taken_0x1d74c0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74C0u;
        // 0x1d74c4: 0x3ae40001  xori        $a0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74c0) {
            ctx->pc = 0x1D74D8u;
            return;
        }
    }
    ctx->pc = 0x1D74C8u;
    // 0x1d74c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d74cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D74CCu;
    {
        const bool branch_taken_0x1d74cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74CCu;
        // 0x1d74d0: 0x2822804  sllv        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74cc) {
            ctx->pc = 0x1D74E4u;
            return;
        }
    }
    ctx->pc = 0x1D74D4u;
    // 0x1d74d4: 0x0  nop
    ctx->pc = 0x1d74d4u;
    // NOP
    ctx->pc = 0x1d74d8u;
}
