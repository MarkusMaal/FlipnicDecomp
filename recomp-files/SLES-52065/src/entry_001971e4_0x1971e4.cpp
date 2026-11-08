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

// Function: entry_001971e4
// Address: 0x1971e4 - 0x1971f0
void entry_001971e4_0x1971e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001971e4_0x1971e4");
#endif

    ctx->pc = 0x1971e4u;

    // 0x1971e4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1971E4u;
    {
        const bool branch_taken_0x1971e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971E4u;
        // 0x1971e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971e4) {
            ctx->pc = 0x197254u;
            return;
        }
    }
    ctx->pc = 0x1971ECu;
    // 0x1971ec: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x1971ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->pc = 0x1971f0u;
}
