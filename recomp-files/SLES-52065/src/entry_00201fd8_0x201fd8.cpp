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

// Function: entry_00201fd8
// Address: 0x201fd8 - 0x201ff4
void entry_00201fd8_0x201fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201fd8_0x201fd8");
#endif

    ctx->pc = 0x201fd8u;

    // 0x201fd8: 0x10c0ffa1  beqz        $a2, . + 4 + (-0x5F << 2)
    ctx->pc = 0x201FD8u;
    {
        const bool branch_taken_0x201fd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x201fd8) {
            ctx->pc = 0x201E60u;
            return;
        }
    }
    ctx->pc = 0x201FE0u;
    // 0x201fe0: 0x10e0ff9f  beqz        $a3, . + 4 + (-0x61 << 2)
    ctx->pc = 0x201FE0u;
    {
        const bool branch_taken_0x201fe0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x201FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FE0u;
        // 0x201fe4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fe0) {
            ctx->pc = 0x201E60u;
            return;
        }
    }
    ctx->pc = 0x201FE8u;
    // 0x201fe8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x201fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x201fec: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x201fecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201ff0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x201ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x201ff4u;
}
