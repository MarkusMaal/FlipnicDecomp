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

// Function: entry_00107fb4
// Address: 0x107fb4 - 0x107fd4
void entry_00107fb4_0x107fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107fb4_0x107fb4");
#endif

    ctx->pc = 0x107fb4u;

    // 0x107fb4: 0x0  nop
    ctx->pc = 0x107fb4u;
    // NOP
    // 0x107fb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x107fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x107fbc: 0x2a430017  slti        $v1, $s2, 0x17
    ctx->pc = 0x107fbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x107fc0: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x107FC0u;
    {
        const bool branch_taken_0x107fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FC0u;
        // 0x107fc4: 0x122040  sll         $a0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fc0) {
            ctx->pc = 0x107F18u;
            return;
        }
    }
    ctx->pc = 0x107FC8u;
    // 0x107fc8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x107fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x107fcc: 0x24140017  addiu       $s4, $zero, 0x17
    ctx->pc = 0x107fccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x107fd0: 0x24100228  addiu       $s0, $zero, 0x228
    ctx->pc = 0x107fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    ctx->pc = 0x107fd4u;
}
