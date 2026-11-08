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

// Function: entry_001db780
// Address: 0x1db780 - 0x1db7a8
void entry_001db780_0x1db780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db780_0x1db780");
#endif

    ctx->pc = 0x1db780u;

    // 0x1db780: 0x112000f1  beqz        $t1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1DB780u;
    {
        const bool branch_taken_0x1db780 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB780u;
        // 0x1db784: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db780) {
            ctx->pc = 0x1DBB48u;
            return;
        }
    }
    ctx->pc = 0x1DB788u;
    // 0x1db788: 0x19200016  blez        $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DB788u;
    {
        const bool branch_taken_0x1db788 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1DB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB788u;
        // 0x1db78c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db788) {
            ctx->pc = 0x1DB7E4u;
            return;
        }
    }
    ctx->pc = 0x1DB790u;
    // 0x1db790: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1db790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1db794: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1db794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db798: 0x244a7334  addiu       $t2, $v0, 0x7334
    ctx->pc = 0x1db798u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 29492));
    // 0x1db79c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1db79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1db7a0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1db7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7a4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1db7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->pc = 0x1db7a8u;
}
