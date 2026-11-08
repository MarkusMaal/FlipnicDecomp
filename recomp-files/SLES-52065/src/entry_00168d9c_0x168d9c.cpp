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

// Function: entry_00168d9c
// Address: 0x168d9c - 0x168dbc
void entry_00168d9c_0x168d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168d9c_0x168d9c");
#endif

    ctx->pc = 0x168d9cu;

    // 0x168d9c: 0x93888488  lbu         $t0, -0x7B78($gp)
    ctx->pc = 0x168d9cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x168da0: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168DA0u;
    {
        const bool branch_taken_0x168da0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x168DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DA0u;
        // 0x168da4: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168da0) {
            ctx->pc = 0x168DBCu;
            return;
        }
    }
    ctx->pc = 0x168DA8u;
    // 0x168da8: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x168da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x168dac: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x168dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x168db0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x168db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x168db4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x168db4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168db8: 0x0  nop
    ctx->pc = 0x168db8u;
    // NOP
    ctx->pc = 0x168dbcu;
}
