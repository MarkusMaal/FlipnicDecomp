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

// Function: entry_001cd5ac
// Address: 0x1cd5ac - 0x1cd5c0
void entry_001cd5ac_0x1cd5ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd5ac_0x1cd5ac");
#endif

    ctx->pc = 0x1cd5acu;

    // 0x1cd5ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cd5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cd5b0: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1cd5b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd5b4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CD5B4u;
    {
        const bool branch_taken_0x1cd5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5B4u;
        // 0x1cd5b8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5b4) {
            ctx->pc = 0x1CD58Cu;
            return;
        }
    }
    ctx->pc = 0x1CD5BCu;
    // 0x1cd5bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1cd5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cd5c0u;
}
