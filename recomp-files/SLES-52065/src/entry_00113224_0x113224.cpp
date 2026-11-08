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

// Function: entry_00113224
// Address: 0x113224 - 0x113240
void entry_00113224_0x113224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113224_0x113224");
#endif

    ctx->pc = 0x113224u;

    // 0x113224: 0x0  nop
    ctx->pc = 0x113224u;
    // NOP
    // 0x113228: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x113228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11322c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x11322cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x113230: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x113230u;
    {
        const bool branch_taken_0x113230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113230u;
        // 0x113234: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113230) {
            ctx->pc = 0x1131FCu;
            return;
        }
    }
    ctx->pc = 0x113238u;
    // 0x113238: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113238u;
    {
        const bool branch_taken_0x113238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113238u;
        // 0x11323c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113238) {
            ctx->pc = 0x113278u;
            return;
        }
    }
    ctx->pc = 0x113240u;
}
