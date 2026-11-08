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

// Function: entry_00189618
// Address: 0x189618 - 0x189630
void entry_00189618_0x189618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189618_0x189618");
#endif

    ctx->pc = 0x189618u;

    // 0x189618: 0x92820081  lbu         $v0, 0x81($s4)
    ctx->pc = 0x189618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 129)));
    // 0x18961c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18961Cu;
    {
        const bool branch_taken_0x18961c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18961c) {
            ctx->pc = 0x189630u;
            return;
        }
    }
    ctx->pc = 0x189624u;
    // 0x189624: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x189624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x189628: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x189628u;
    {
        const bool branch_taken_0x189628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189628u;
        // 0x18962c: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189628) {
            ctx->pc = 0x189790u;
            return;
        }
    }
    ctx->pc = 0x189630u;
}
