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

// Function: entry_00141530
// Address: 0x141530 - 0x141544
void entry_00141530_0x141530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141530_0x141530");
#endif

    ctx->pc = 0x141530u;

    // 0x141530: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x141530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x141534: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x141534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x141538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x141538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14153c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14153Cu;
    {
        const bool branch_taken_0x14153c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x141540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14153Cu;
        // 0x141540: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14153c) {
            ctx->pc = 0x141560u;
            return;
        }
    }
    ctx->pc = 0x141544u;
}
