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

// Function: entry_001b1890
// Address: 0x1b1890 - 0x1b18b4
void entry_001b1890_0x1b1890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1890_0x1b1890");
#endif

    ctx->pc = 0x1b1890u;

    // 0x1b1890: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b1890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b1894: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1b1894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b1898: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B1898u;
    {
        const bool branch_taken_0x1b1898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1898u;
        // 0x1b189c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1898) {
            ctx->pc = 0x1B187Cu;
            return;
        }
    }
    ctx->pc = 0x1B18A0u;
    // 0x1b18a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b18a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b18a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b18a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b18a8: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x1b18a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1b18ac: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1b18acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b18b0: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x1b18b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    ctx->pc = 0x1b18b4u;
}
