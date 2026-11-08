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

// Function: entry_00101e00
// Address: 0x101e00 - 0x101e14
void entry_00101e00_0x101e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101e00_0x101e00");
#endif

    ctx->pc = 0x101e00u;

    // 0x101e00: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x101e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x101e04: 0x6a4821  addu        $t1, $v1, $t2
    ctx->pc = 0x101e04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x101e08: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x101e08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x101E0Cu;
    {
        const bool branch_taken_0x101e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E0Cu;
        // 0x101e10: 0x1093821  addu        $a3, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e0c) {
            ctx->pc = 0x101E40u;
            return;
        }
    }
    ctx->pc = 0x101E14u;
}
