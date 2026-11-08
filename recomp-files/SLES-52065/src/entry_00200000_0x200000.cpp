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

// Function: entry_00200000
// Address: 0x200000 - 0x200018
void entry_00200000_0x200000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200000_0x200000");
#endif

    ctx->pc = 0x200000u;

    // 0x200000: 0x1c58821  addu        $s1, $t6, $a1
    ctx->pc = 0x200000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x200004: 0x1839021  addu        $s2, $t4, $v1
    ctx->pc = 0x200004u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x200008: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x200008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x20000c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x20000Cu;
    {
        const bool branch_taken_0x20000c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20000Cu;
        // 0x200010: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20000c) {
            ctx->pc = 0x20011Cu;
            return;
        }
    }
    ctx->pc = 0x200014u;
    // 0x200014: 0x0  nop
    ctx->pc = 0x200014u;
    // NOP
    ctx->pc = 0x200018u;
}
