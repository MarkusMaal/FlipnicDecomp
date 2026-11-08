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

// Function: entry_0019d390
// Address: 0x19d390 - 0x19d3bc
void entry_0019d390_0x19d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d390_0x19d390");
#endif

    ctx->pc = 0x19d390u;

    // 0x19d390: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x19d390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19d394: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x19d394u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19d398: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x19D398u;
    {
        const bool branch_taken_0x19d398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D398u;
        // 0x19d39c: 0x2b12821  addu        $a1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d398) {
            ctx->pc = 0x19D300u;
            return;
        }
    }
    ctx->pc = 0x19D3A0u;
    // 0x19d3a0: 0x8ea30324  lw          $v1, 0x324($s5)
    ctx->pc = 0x19d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
    // 0x19d3a4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x19D3A4u;
    {
        const bool branch_taken_0x19d3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d3a4) {
            ctx->pc = 0x19D418u;
            return;
        }
    }
    ctx->pc = 0x19D3ACu;
    // 0x19d3ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19d3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d3b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19D3B0u;
    {
        const bool branch_taken_0x19d3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3B0u;
        // 0x19d3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d3b0) {
            ctx->pc = 0x19D400u;
            return;
        }
    }
    ctx->pc = 0x19D3B8u;
    // 0x19d3b8: 0x2a53021  addu        $a2, $s5, $a1
    ctx->pc = 0x19d3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    ctx->pc = 0x19d3bcu;
}
