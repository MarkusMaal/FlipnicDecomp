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

// Function: entry_0021b6d4
// Address: 0x21b6d4 - 0x21b6e4
void entry_0021b6d4_0x21b6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b6d4_0x21b6d4");
#endif

    ctx->pc = 0x21b6d4u;

    // 0x21b6d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21b6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21b6d8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x21b6d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b6dc: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x21B6DCu;
    {
        const bool branch_taken_0x21b6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6DCu;
        // 0x21b6e0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6dc) {
            ctx->pc = 0x21B598u;
            return;
        }
    }
    ctx->pc = 0x21B6E4u;
}
