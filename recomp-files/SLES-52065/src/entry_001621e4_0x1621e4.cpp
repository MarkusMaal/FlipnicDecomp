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

// Function: entry_001621e4
// Address: 0x1621e4 - 0x162200
void entry_001621e4_0x1621e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001621e4_0x1621e4");
#endif

    ctx->pc = 0x1621e4u;

    // 0x1621e4: 0x0  nop
    ctx->pc = 0x1621e4u;
    // NOP
    // 0x1621e8: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x1621e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1621ec: 0x284102a  slt         $v0, $s4, $a0
    ctx->pc = 0x1621ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1621f0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1621F0u;
    {
        const bool branch_taken_0x1621f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1621F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621F0u;
        // 0x1621f4: 0x2741023  subu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621f0) {
            ctx->pc = 0x162168u;
            return;
        }
    }
    ctx->pc = 0x1621F8u;
    // 0x1621f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1621F8u;
    {
        const bool branch_taken_0x1621f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621F8u;
        // 0x1621fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621f8) {
            ctx->pc = 0x16222Cu;
            return;
        }
    }
    ctx->pc = 0x162200u;
}
