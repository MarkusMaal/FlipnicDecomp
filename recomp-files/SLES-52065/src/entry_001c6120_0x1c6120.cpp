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

// Function: entry_001c6120
// Address: 0x1c6120 - 0x1c6140
void entry_001c6120_0x1c6120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6120_0x1c6120");
#endif

    ctx->pc = 0x1c6120u;

    // 0x1c6120: 0x8c24c688  lw          $a0, -0x3978($at)
    ctx->pc = 0x1c6120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952584)));
    // 0x1c6124: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c6124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c6128: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1c6128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x22C7F8u));
    // 0x1c612c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C612Cu;
    {
        const bool branch_taken_0x1c612c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C612Cu;
        // 0x1c6130: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c612c) {
            ctx->pc = 0x1C6140u;
            return;
        }
    }
    ctx->pc = 0x1C6134u;
    // 0x1c6134: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1c6134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1c6138: 0x90232ebf  lbu         $v1, 0x2EBF($at)
    ctx->pc = 0x1c6138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EBFu));
    // 0x1c613c: 0x0  nop
    ctx->pc = 0x1c613cu;
    // NOP
    ctx->pc = 0x1c6140u;
}
