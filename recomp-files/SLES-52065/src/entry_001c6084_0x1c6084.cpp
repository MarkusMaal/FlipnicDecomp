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

// Function: entry_001c6084
// Address: 0x1c6084 - 0x1c60a8
void entry_001c6084_0x1c6084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6084_0x1c6084");
#endif

    ctx->pc = 0x1c6084u;

    // 0x1c6084: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c6084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c6088: 0x8c24c688  lw          $a0, -0x3978($at)
    ctx->pc = 0x1c6088u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C688u));
    // 0x1c608c: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c608cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c6090: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1c6090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x22C7F8u));
    // 0x1c6094: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6094u;
    {
        const bool branch_taken_0x1c6094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6094u;
        // 0x1c6098: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6094) {
            ctx->pc = 0x1C60A8u;
            return;
        }
    }
    ctx->pc = 0x1C609Cu;
    // 0x1c609c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1c609cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1c60a0: 0x90232ebe  lbu         $v1, 0x2EBE($at)
    ctx->pc = 0x1c60a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EBEu));
    // 0x1c60a4: 0x0  nop
    ctx->pc = 0x1c60a4u;
    // NOP
    ctx->pc = 0x1c60a8u;
}
