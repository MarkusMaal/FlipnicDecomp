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

// Function: entry_0012e97c
// Address: 0x12e97c - 0x12e994
void entry_0012e97c_0x12e97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e97c_0x12e97c");
#endif

    ctx->pc = 0x12e97cu;

    // 0x12e97c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x12e97cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x12e980: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x12e980u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x12e984: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E984u;
    {
        const bool branch_taken_0x12e984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e984) {
            ctx->pc = 0x12E994u;
            return;
        }
    }
    ctx->pc = 0x12E98Cu;
    // 0x12e98c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12E98Cu;
    {
        const bool branch_taken_0x12e98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E98Cu;
        // 0x12e990: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e98c) {
            ctx->pc = 0x12E99Cu;
            return;
        }
    }
    ctx->pc = 0x12E994u;
}
