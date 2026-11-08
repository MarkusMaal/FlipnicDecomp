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

// Function: entry_0011aa80
// Address: 0x11aa80 - 0x11aa90
void entry_0011aa80_0x11aa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aa80_0x11aa80");
#endif

    ctx->pc = 0x11aa80u;

    // 0x11aa80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11aa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11aa84: 0x28c20160  slti        $v0, $a2, 0x160
    ctx->pc = 0x11aa84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)352) ? 1 : 0);
    // 0x11aa88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x11AA88u;
    {
        const bool branch_taken_0x11aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA88u;
        // 0x11aa8c: 0x2262821  addu        $a1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa88) {
            ctx->pc = 0x11AA60u;
            return;
        }
    }
    ctx->pc = 0x11AA90u;
}
