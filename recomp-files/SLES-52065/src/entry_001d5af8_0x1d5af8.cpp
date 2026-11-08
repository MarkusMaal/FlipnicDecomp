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

// Function: entry_001d5af8
// Address: 0x1d5af8 - 0x1d5b20
void entry_001d5af8_0x1d5af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5af8_0x1d5af8");
#endif

    ctx->pc = 0x1d5af8u;

    // 0x1d5af8: 0x12020125  beq         $s0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x1D5AF8u;
    {
        const bool branch_taken_0x1d5af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AF8u;
        // 0x1d5afc: 0x2a022001  slti        $v0, $s0, 0x2001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5af8) {
            ctx->pc = 0x1D5F90u;
            return;
        }
    }
    ctx->pc = 0x1D5B00u;
    // 0x1d5b00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5B00u;
    {
        const bool branch_taken_0x1d5b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B00u;
        // 0x1d5b04: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b00) {
            ctx->pc = 0x1D5B20u;
            return;
        }
    }
    ctx->pc = 0x1D5B08u;
    // 0x1d5b08: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1d5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1d5b0c: 0x120200de  beq         $s0, $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x1D5B0Cu;
    {
        const bool branch_taken_0x1d5b0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5b0c) {
            ctx->pc = 0x1D5E88u;
            return;
        }
    }
    ctx->pc = 0x1D5B14u;
    // 0x1d5b14: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x1D5B14u;
    {
        const bool branch_taken_0x1d5b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b14) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5B1Cu;
    // 0x1d5b1c: 0x0  nop
    ctx->pc = 0x1d5b1cu;
    // NOP
    ctx->pc = 0x1d5b20u;
}
