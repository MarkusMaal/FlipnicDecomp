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

// Function: entry_0011e558
// Address: 0x11e558 - 0x11e594
void entry_0011e558_0x11e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e558_0x11e558");
#endif

    ctx->pc = 0x11e558u;

label_11e558:
    // 0x11e558: 0x8f8283f0  lw          $v0, -0x7C10($gp)
    ctx->pc = 0x11e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x11e55c: 0x0  nop
    ctx->pc = 0x11e55cu;
    // NOP
    // 0x11e560: 0x0  nop
    ctx->pc = 0x11e560u;
    // NOP
    // 0x11e564: 0x0  nop
    ctx->pc = 0x11e564u;
    // NOP
    // 0x11e568: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11E568u;
    {
        const bool branch_taken_0x11e568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e568) {
            ctx->pc = 0x11E558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e558;
        }
    }
    ctx->pc = 0x11E570u;
    // 0x11e570: 0x8f8283e0  lw          $v0, -0x7C20($gp)
    ctx->pc = 0x11e570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935520)));
    // 0x11e574: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E574u;
    {
        const bool branch_taken_0x11e574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x11E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E574u;
        // 0x11e578: 0xaf8083f0  sw          $zero, -0x7C10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e574) {
            ctx->pc = 0x11E594u;
            return;
        }
    }
    ctx->pc = 0x11E57Cu;
    // 0x11e57c: 0xdf8383e8  ld          $v1, -0x7C18($gp)
    ctx->pc = 0x11e57cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935528)));
    // 0x11e580: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x11e580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x11e584: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11e584u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11e588: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x11e588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x11e58c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11E58Cu;
    {
        const bool branch_taken_0x11e58c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e58c) {
            ctx->pc = 0x11E5D0u;
            return;
        }
    }
    ctx->pc = 0x11E594u;
}
