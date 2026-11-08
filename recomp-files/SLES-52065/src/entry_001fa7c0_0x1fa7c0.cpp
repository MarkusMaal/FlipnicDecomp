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

// Function: entry_001fa7c0
// Address: 0x1fa7c0 - 0x1fa7e0
void entry_001fa7c0_0x1fa7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa7c0_0x1fa7c0");
#endif

    ctx->pc = 0x1fa7c0u;

    // 0x1fa7c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fa7c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa7c4: 0x15600015  bnez        $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FA7C4u;
    {
        const bool branch_taken_0x1fa7c4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7C4u;
        // 0x1fa7c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7c4) {
            ctx->pc = 0x1FA81Cu;
            return;
        }
    }
    ctx->pc = 0x1FA7CCu;
    // 0x1fa7cc: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x1fa7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1fa7d0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1fa7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fa7d4: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x1fa7d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fa7d8: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x1fa7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fa7dc: 0x0  nop
    ctx->pc = 0x1fa7dcu;
    // NOP
    ctx->pc = 0x1fa7e0u;
}
