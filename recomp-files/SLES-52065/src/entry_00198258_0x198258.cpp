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

// Function: entry_00198258
// Address: 0x198258 - 0x198264
void entry_00198258_0x198258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198258_0x198258");
#endif

    ctx->pc = 0x198258u;

    // 0x198258: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x198258u;
    {
        const bool branch_taken_0x198258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198258u;
        // 0x19825c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198258) {
            ctx->pc = 0x198428u;
            return;
        }
    }
    ctx->pc = 0x198260u;
    // 0x198260: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x198260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    ctx->pc = 0x198264u;
}
