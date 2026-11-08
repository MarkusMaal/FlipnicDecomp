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

// Function: entry_00138748
// Address: 0x138748 - 0x13876c
void entry_00138748_0x138748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138748_0x138748");
#endif

    ctx->pc = 0x138748u;

    // 0x138748: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x138748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13874c: 0x38142  srl         $s0, $v1, 5
    ctx->pc = 0x13874cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x138750: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x138750u;
    {
        const bool branch_taken_0x138750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x138754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138750u;
        // 0x138754: 0x101140  sll         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138750) {
            ctx->pc = 0x138770u;
            return;
        }
    }
    ctx->pc = 0x138758u;
    // 0x138758: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x138758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x13875c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x13875cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138760: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x138760u;
    {
        const bool branch_taken_0x138760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138760) {
            ctx->pc = 0x13876Cu;
            return;
        }
    }
    ctx->pc = 0x138768u;
    // 0x138768: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x138768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x13876cu;
}
