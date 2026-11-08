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

// Function: entry_00208e14
// Address: 0x208e14 - 0x208e28
void entry_00208e14_0x208e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208e14_0x208e14");
#endif

    ctx->pc = 0x208e14u;

    // 0x208e14: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x208e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x208e18: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x208e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x208e1c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x208e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x208e20: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x208E20u;
    {
        const bool branch_taken_0x208e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E20u;
        // 0x208e24: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e20) {
            ctx->pc = 0x208F54u;
            return;
        }
    }
    ctx->pc = 0x208E28u;
}
