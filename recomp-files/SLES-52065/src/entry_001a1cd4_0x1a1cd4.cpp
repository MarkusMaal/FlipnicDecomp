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

// Function: entry_001a1cd4
// Address: 0x1a1cd4 - 0x1a1d04
void entry_001a1cd4_0x1a1cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1cd4_0x1a1cd4");
#endif

    ctx->pc = 0x1a1cd4u;

    // 0x1a1cd4: 0xae9006b0  sw          $s0, 0x6B0($s4)
    ctx->pc = 0x1a1cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1712), GPR_U32(ctx, 16));
    // 0x1a1cd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1cdc: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1a1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x1a1ce0: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1A1CE0u;
    {
        const bool branch_taken_0x1a1ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CE0u;
        // 0x1a1ce4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ce0) {
            ctx->pc = 0x1A1EA0u;
            return;
        }
    }
    ctx->pc = 0x1A1CE8u;
    // 0x1a1ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1cec: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1A1CECu;
    {
        const bool branch_taken_0x1a1cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CECu;
        // 0x1a1cf0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cec) {
            ctx->pc = 0x1A1DC8u;
            return;
        }
    }
    ctx->pc = 0x1A1CF4u;
    // 0x1a1cf4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1CF4u;
    {
        const bool branch_taken_0x1a1cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1cf4) {
            ctx->pc = 0x1A1D04u;
            return;
        }
    }
    ctx->pc = 0x1A1CFCu;
    // 0x1a1cfc: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1A1CFCu;
    {
        const bool branch_taken_0x1a1cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1cfc) {
            ctx->pc = 0x1A1F88u;
            return;
        }
    }
    ctx->pc = 0x1A1D04u;
}
