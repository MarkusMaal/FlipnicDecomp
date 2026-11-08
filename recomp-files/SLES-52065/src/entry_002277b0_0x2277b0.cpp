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

// Function: entry_002277b0
// Address: 0x2277b0 - 0x2277c0
void entry_002277b0_0x2277b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002277b0_0x2277b0");
#endif

    ctx->pc = 0x2277b0u;

    // 0x2277b0: 0x83838758  lb          $v1, -0x78A8($gp)
    ctx->pc = 0x2277b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936408)));
    // 0x2277b4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2277B4u;
    {
        const bool branch_taken_0x2277b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2277B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277B4u;
        // 0x2277b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2277b4) {
            ctx->pc = 0x2277C0u;
            return;
        }
    }
    ctx->pc = 0x2277BCu;
    // 0x2277bc: 0xa3838758  sb          $v1, -0x78A8($gp)
    ctx->pc = 0x2277bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936408), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2277c0u;
}
