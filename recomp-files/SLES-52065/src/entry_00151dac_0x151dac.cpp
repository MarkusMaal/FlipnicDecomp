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

// Function: entry_00151dac
// Address: 0x151dac - 0x151db8
void entry_00151dac_0x151dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151dac_0x151dac");
#endif

    ctx->pc = 0x151dacu;

    // 0x151dac: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x151dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x151db0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x151DB0u;
    {
        const bool branch_taken_0x151db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DB0u;
        // 0x151db4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151db0) {
            ctx->pc = 0x151E10u;
            return;
        }
    }
    ctx->pc = 0x151DB8u;
}
