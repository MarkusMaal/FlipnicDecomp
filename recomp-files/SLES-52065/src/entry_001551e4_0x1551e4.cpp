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

// Function: entry_001551e4
// Address: 0x1551e4 - 0x155208
void entry_001551e4_0x1551e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001551e4_0x1551e4");
#endif

    ctx->pc = 0x1551e4u;

    // 0x1551e4: 0x0  nop
    ctx->pc = 0x1551e4u;
    // NOP
    // 0x1551e8: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x1551e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1551ec: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1551ECu;
    {
        const bool branch_taken_0x1551ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1551F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551ECu;
        // 0x1551f0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551ec) {
            ctx->pc = 0x1550C4u;
            return;
        }
    }
    ctx->pc = 0x1551F4u;
    // 0x1551f4: 0x600004c  bltz        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1551F4u;
    {
        const bool branch_taken_0x1551f4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1551F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551F4u;
        // 0x1551f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551f4) {
            ctx->pc = 0x155328u;
            return;
        }
    }
    ctx->pc = 0x1551FCu;
    // 0x1551fc: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x1551fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155200: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x155200u;
    {
        const bool branch_taken_0x155200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155200u;
        // 0x155204: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155200) {
            ctx->pc = 0x155224u;
            return;
        }
    }
    ctx->pc = 0x155208u;
}
