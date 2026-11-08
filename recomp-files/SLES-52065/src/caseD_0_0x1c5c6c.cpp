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

// Function: caseD_0
// Address: 0x1c5c6c - 0x1c5c90
void caseD_0_0x1c5c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1c5c6c");
#endif

    ctx->pc = 0x1c5c6cu;

    // 0x1c5c6c: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5c70: 0x8c24c688  lw          $a0, -0x3978($at)
    ctx->pc = 0x1c5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C688u));
    // 0x1c5c74: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5c78: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1c5c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x22C7F8u));
    // 0x1c5c7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5C7Cu;
    {
        const bool branch_taken_0x1c5c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C7Cu;
        // 0x1c5c80: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c7c) {
            ctx->pc = 0x1C5C90u;
            return;
        }
    }
    ctx->pc = 0x1C5C84u;
    // 0x1c5c84: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1c5c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1c5c88: 0x90232ebb  lbu         $v1, 0x2EBB($at)
    ctx->pc = 0x1c5c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EBBu));
    // 0x1c5c8c: 0x0  nop
    ctx->pc = 0x1c5c8cu;
    // NOP
    ctx->pc = 0x1c5c90u;
}
