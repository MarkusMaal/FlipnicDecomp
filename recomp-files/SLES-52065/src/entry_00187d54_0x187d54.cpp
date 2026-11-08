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

// Function: entry_00187d54
// Address: 0x187d54 - 0x187d78
void entry_00187d54_0x187d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187d54_0x187d54");
#endif

    ctx->pc = 0x187d54u;

    // 0x187d54: 0x0  nop
    ctx->pc = 0x187d54u;
    // NOP
    // 0x187d58: 0x32040008  andi        $a0, $s0, 0x8
    ctx->pc = 0x187d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x187d5c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x187D5Cu;
    {
        const bool branch_taken_0x187d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D5Cu;
        // 0x187d60: 0x32040010  andi        $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d5c) {
            ctx->pc = 0x187DB0u;
            return;
        }
    }
    ctx->pc = 0x187D64u;
    // 0x187d64: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x187D64u;
    {
        const bool branch_taken_0x187d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d64) {
            ctx->pc = 0x187DB0u;
            return;
        }
    }
    ctx->pc = 0x187D6Cu;
    // 0x187d6c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x187d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x187d70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x187D70u;
    {
        const bool branch_taken_0x187d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D70u;
        // 0x187d74: 0x8e23fff8  lw          $v1, -0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d70) {
            ctx->pc = 0x187D8Cu;
            return;
        }
    }
    ctx->pc = 0x187D78u;
}
