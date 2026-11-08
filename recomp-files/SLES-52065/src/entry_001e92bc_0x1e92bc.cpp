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

// Function: entry_001e92bc
// Address: 0x1e92bc - 0x1e92e0
void entry_001e92bc_0x1e92bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e92bc_0x1e92bc");
#endif

    ctx->pc = 0x1e92bcu;

    // 0x1e92bc: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x1e92bcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e92c0: 0x15030015  bne         $t0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E92C0u;
    {
        const bool branch_taken_0x1e92c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92C0u;
        // 0x1e92c4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92c0) {
            ctx->pc = 0x1E9318u;
            return;
        }
    }
    ctx->pc = 0x1E92C8u;
    // 0x1e92c8: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x1e92c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1e92cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e92ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e92d0: 0x1507fff9  bne         $t0, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E92D0u;
    {
        const bool branch_taken_0x1e92d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e92d0) {
            ctx->pc = 0x1E92B8u;
            return;
        }
    }
    ctx->pc = 0x1E92D8u;
    // 0x1e92d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E92D8u;
    {
        const bool branch_taken_0x1e92d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92D8u;
        // 0x1e92dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92d8) {
            ctx->pc = 0x1E92FCu;
            return;
        }
    }
    ctx->pc = 0x1E92E0u;
}
