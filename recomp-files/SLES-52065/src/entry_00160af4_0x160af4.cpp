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

// Function: entry_00160af4
// Address: 0x160af4 - 0x160b0c
void entry_00160af4_0x160af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160af4_0x160af4");
#endif

    ctx->pc = 0x160af4u;

    // 0x160af4: 0x0  nop
    ctx->pc = 0x160af4u;
    // NOP
    // 0x160af8: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x160af8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160afc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x160AFCu;
    {
        const bool branch_taken_0x160afc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AFCu;
        // 0x160b00: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160afc) {
            ctx->pc = 0x160B28u;
            return;
        }
    }
    ctx->pc = 0x160B04u;
    // 0x160b04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160b08: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x160b08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x160b0cu;
}
