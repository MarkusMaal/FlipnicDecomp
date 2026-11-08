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

// Function: entry_001db7e4
// Address: 0x1db7e4 - 0x1db7f4
void entry_001db7e4_0x1db7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db7e4_0x1db7e4");
#endif

    ctx->pc = 0x1db7e4u;

    // 0x1db7e4: 0x5ce00003  bgtzl       $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB7E4u;
    {
        const bool branch_taken_0x1db7e4 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x1db7e4) {
            ctx->pc = 0x1DB7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB7E4u;
            // 0x1db7e8: 0x27a300c0  addiu       $v1, $sp, 0xC0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB7F4u;
            return;
        }
    }
    ctx->pc = 0x1DB7ECu;
    // 0x1db7ec: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1db7ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7f0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1db7f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1db7f4u;
}
