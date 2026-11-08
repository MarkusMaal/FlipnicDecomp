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

// Function: entry_0019fcc0
// Address: 0x19fcc0 - 0x19fccc
void entry_0019fcc0_0x19fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fcc0_0x19fcc0");
#endif

    ctx->pc = 0x19fcc0u;

    // 0x19fcc0: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fcc4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x19FCC4u;
    {
        const bool branch_taken_0x19fcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCC4u;
        // 0x19fcc8: 0x9050282b  lbu         $s0, 0x282B($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10283)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcc4) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FCCCu;
}
