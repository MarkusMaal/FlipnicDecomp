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

// Function: entry_00111c3c
// Address: 0x111c3c - 0x111c4c
void entry_00111c3c_0x111c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111c3c_0x111c3c");
#endif

    ctx->pc = 0x111c3cu;

    // 0x111c3c: 0x0  nop
    ctx->pc = 0x111c3cu;
    // NOP
    // 0x111c40: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x111c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111c44: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x111C44u;
    {
        const bool branch_taken_0x111c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C44u;
        // 0x111c48: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c44) {
            ctx->pc = 0x111C04u;
            return;
        }
    }
    ctx->pc = 0x111C4Cu;
}
