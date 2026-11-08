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

// Function: entry_00202420
// Address: 0x202420 - 0x202440
void entry_00202420_0x202420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202420_0x202420");
#endif

    ctx->pc = 0x202420u;

    // 0x202420: 0x10c0002e  beqz        $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x202420u;
    {
        const bool branch_taken_0x202420 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x202424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202420u;
        // 0x202424: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202420) {
            ctx->pc = 0x2024DCu;
            return;
        }
    }
    ctx->pc = 0x202428u;
    // 0x202428: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x202428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20242c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x20242cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x202430: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x202430u;
    {
        const bool branch_taken_0x202430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202430u;
        // 0x202434: 0x1284821  addu        $t1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202430) {
            ctx->pc = 0x20248Cu;
            return;
        }
    }
    ctx->pc = 0x202438u;
    // 0x202438: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x202438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x20243c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x20243cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202440u;
}
