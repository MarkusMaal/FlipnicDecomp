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

// Function: entry_00179224
// Address: 0x179224 - 0x179240
void entry_00179224_0x179224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179224_0x179224");
#endif

    ctx->pc = 0x179224u;

    // 0x179224: 0x0  nop
    ctx->pc = 0x179224u;
    // NOP
    // 0x179228: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x179228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17922c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x17922cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179230: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x179230u;
    {
        const bool branch_taken_0x179230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179230u;
        // 0x179234: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179230) {
            ctx->pc = 0x1791BCu;
            return;
        }
    }
    ctx->pc = 0x179238u;
    // 0x179238: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x179238u;
    {
        const bool branch_taken_0x179238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179238u;
        // 0x17923c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179238) {
            ctx->pc = 0x17926Cu;
            return;
        }
    }
    ctx->pc = 0x179240u;
}
