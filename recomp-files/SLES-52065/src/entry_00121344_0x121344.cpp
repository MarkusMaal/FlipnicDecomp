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

// Function: entry_00121344
// Address: 0x121344 - 0x121358
void entry_00121344_0x121344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121344_0x121344");
#endif

    ctx->pc = 0x121344u;

    // 0x121344: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121344u;
    {
        const bool branch_taken_0x121344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121344u;
        // 0x121348: 0xc8082b  sltu        $at, $a2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121344) {
            ctx->pc = 0x121374u;
            return;
        }
    }
    ctx->pc = 0x12134Cu;
    // 0x12134c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x12134cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121350: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x121350u;
    {
        const bool branch_taken_0x121350 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x121354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121350u;
        // 0x121354: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121350) {
            ctx->pc = 0x121374u;
            return;
        }
    }
    ctx->pc = 0x121358u;
}
