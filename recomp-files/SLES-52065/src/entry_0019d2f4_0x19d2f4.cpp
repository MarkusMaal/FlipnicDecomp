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

// Function: entry_0019d2f4
// Address: 0x19d2f4 - 0x19d300
void entry_0019d2f4_0x19d2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d2f4_0x19d2f4");
#endif

    ctx->pc = 0x19d2f4u;

    // 0x19d2f4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x19D2F4u;
    {
        const bool branch_taken_0x19d2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2F4u;
        // 0x19d2f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2f4) {
            ctx->pc = 0x19D390u;
            return;
        }
    }
    ctx->pc = 0x19D2FCu;
    // 0x19d2fc: 0x2b12821  addu        $a1, $s5, $s1
    ctx->pc = 0x19d2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    ctx->pc = 0x19d300u;
}
