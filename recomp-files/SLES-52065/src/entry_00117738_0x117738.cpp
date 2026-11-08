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

// Function: entry_00117738
// Address: 0x117738 - 0x117744
void entry_00117738_0x117738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117738_0x117738");
#endif

    ctx->pc = 0x117738u;

    // 0x117738: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x117738u;
    {
        const bool branch_taken_0x117738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117738u;
        // 0x11773c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117738) {
            ctx->pc = 0x1178E0u;
            return;
        }
    }
    ctx->pc = 0x117740u;
    // 0x117740: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x117740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117744u;
}
