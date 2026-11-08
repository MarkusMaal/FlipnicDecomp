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

// Function: entry_0019d424
// Address: 0x19d424 - 0x19d430
void entry_0019d424_0x19d424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d424_0x19d424");
#endif

    ctx->pc = 0x19d424u;

    // 0x19d424: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x19D424u;
    {
        const bool branch_taken_0x19d424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D424u;
        // 0x19d428: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d424) {
            ctx->pc = 0x19D518u;
            return;
        }
    }
    ctx->pc = 0x19D42Cu;
    // 0x19d42c: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x19d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    ctx->pc = 0x19d430u;
}
