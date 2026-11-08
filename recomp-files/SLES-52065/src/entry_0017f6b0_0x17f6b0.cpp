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

// Function: entry_0017f6b0
// Address: 0x17f6b0 - 0x17f6cc
void entry_0017f6b0_0x17f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f6b0_0x17f6b0");
#endif

    ctx->pc = 0x17f6b0u;

    // 0x17f6b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f6b4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x17f6b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17f6b8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F6B8u;
    {
        const bool branch_taken_0x17f6b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6B8u;
        // 0x17f6bc: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6b8) {
            ctx->pc = 0x17F6CCu;
            return;
        }
    }
    ctx->pc = 0x17F6C0u;
    // 0x17f6c0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x17f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f6c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17F6C4u;
    {
        const bool branch_taken_0x17f6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6C4u;
        // 0x17f6c8: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6c4) {
            ctx->pc = 0x17F6DCu;
            return;
        }
    }
    ctx->pc = 0x17F6CCu;
}
