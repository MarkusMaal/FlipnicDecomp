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

// Function: entry_00112878
// Address: 0x112878 - 0x112884
void entry_00112878_0x112878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112878_0x112878");
#endif

    ctx->pc = 0x112878u;

    // 0x112878: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x112878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11287c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11287Cu;
    {
        const bool branch_taken_0x11287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11287Cu;
        // 0x112880: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11287c) {
            ctx->pc = 0x1128B4u;
            return;
        }
    }
    ctx->pc = 0x112884u;
}
