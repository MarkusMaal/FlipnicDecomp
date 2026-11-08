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

// Function: entry_001d2a00
// Address: 0x1d2a00 - 0x1d2a24
void entry_001d2a00_0x1d2a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2a00_0x1d2a00");
#endif

    ctx->pc = 0x1d2a00u;

    // 0x1d2a00: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d2a04: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2A04u;
    {
        const bool branch_taken_0x1d2a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d2a04) {
            ctx->pc = 0x1D2A24u;
            return;
        }
    }
    ctx->pc = 0x1D2A0Cu;
    // 0x1d2a0c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2a10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2a18: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2a1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2A1Cu;
    {
        const bool branch_taken_0x1d2a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A1Cu;
        // 0x1d2a20: 0xac650020  sw          $a1, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a1c) {
            ctx->pc = 0x1D2A44u;
            return;
        }
    }
    ctx->pc = 0x1D2A24u;
}
