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

// Function: entry_001618dc
// Address: 0x1618dc - 0x161900
void entry_001618dc_0x1618dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001618dc_0x1618dc");
#endif

    ctx->pc = 0x1618dcu;

    // 0x1618dc: 0x0  nop
    ctx->pc = 0x1618dcu;
    // NOP
    // 0x1618e0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1618e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1618e4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1618E4u;
    {
        const bool branch_taken_0x1618e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1618E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618E4u;
        // 0x1618e8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618e4) {
            ctx->pc = 0x161898u;
            return;
        }
    }
    ctx->pc = 0x1618ECu;
    // 0x1618ec: 0x860401f4  lh          $a0, 0x1F4($s0)
    ctx->pc = 0x1618ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1618f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1618f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1618f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1618F4u;
    {
        const bool branch_taken_0x1618f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1618F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618F4u;
        // 0x1618f8: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618f4) {
            ctx->pc = 0x161944u;
            return;
        }
    }
    ctx->pc = 0x1618FCu;
    // 0x1618fc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1618fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x161900u;
}
