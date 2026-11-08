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

// Function: entry_001db7f4
// Address: 0x1db7f4 - 0x1db818
void entry_001db7f4_0x1db7f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db7f4_0x1db7f4");
#endif

    ctx->pc = 0x1db7f4u;

    // 0x1db7f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db7f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7f8: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DB7F8u;
    {
        const bool branch_taken_0x1db7f8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1DB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7F8u;
        // 0x1db7fc: 0x241effff  addiu       $fp, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7f8) {
            ctx->pc = 0x1DB854u;
            return;
        }
    }
    ctx->pc = 0x1DB800u;
    // 0x1db800: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1db800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1db804: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1db804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db808: 0x24497338  addiu       $t1, $v0, 0x7338
    ctx->pc = 0x1db808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 29496));
    // 0x1db80c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1db80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db810: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1db810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1db814: 0x0  nop
    ctx->pc = 0x1db814u;
    // NOP
    ctx->pc = 0x1db818u;
}
