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

// Function: entry_00207280
// Address: 0x207280 - 0x207298
void entry_00207280_0x207280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207280_0x207280");
#endif

    ctx->pc = 0x207280u;

    // 0x207280: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207280u;
    {
        const bool branch_taken_0x207280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207280u;
        // 0x207284: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207280) {
            ctx->pc = 0x207298u;
            return;
        }
    }
    ctx->pc = 0x207288u;
    // 0x207288: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x207288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20728c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x207290: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x207290u;
    {
        const bool branch_taken_0x207290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207290u;
        // 0x207294: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207290) {
            ctx->pc = 0x2072B0u;
            return;
        }
    }
    ctx->pc = 0x207298u;
}
