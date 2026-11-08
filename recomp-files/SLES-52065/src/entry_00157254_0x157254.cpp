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

// Function: entry_00157254
// Address: 0x157254 - 0x157264
void entry_00157254_0x157254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157254_0x157254");
#endif

    ctx->pc = 0x157254u;

    // 0x157254: 0x0  nop
    ctx->pc = 0x157254u;
    // NOP
    // 0x157258: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x157258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15725c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x15725Cu;
    {
        const bool branch_taken_0x15725c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15725Cu;
        // 0x157260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15725c) {
            ctx->pc = 0x1571ECu;
            return;
        }
    }
    ctx->pc = 0x157264u;
}
