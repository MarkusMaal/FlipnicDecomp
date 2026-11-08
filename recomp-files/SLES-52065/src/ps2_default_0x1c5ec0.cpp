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

// Function: default
// Address: 0x1c5ec0 - 0x1c5ef0
void ps2_default_0x1c5ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1c5ec0");
#endif

    ctx->pc = 0x1c5ec0u;

    // 0x1c5ec0: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1c5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1c5ec4: 0x144000de  bnez        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x1C5EC4u;
    {
        const bool branch_taken_0x1c5ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ec4) {
            ctx->pc = 0x1C6240u;
            return;
        }
    }
    ctx->pc = 0x1C5ECCu;
    // 0x1c5ecc: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5ed0: 0x8c24c688  lw          $a0, -0x3978($at)
    ctx->pc = 0x1c5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C688u));
    // 0x1c5ed4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5ed8: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1c5ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x22C7F8u));
    // 0x1c5edc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5EDCu;
    {
        const bool branch_taken_0x1c5edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EDCu;
        // 0x1c5ee0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5edc) {
            ctx->pc = 0x1C5EF0u;
            return;
        }
    }
    ctx->pc = 0x1C5EE4u;
    // 0x1c5ee4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1c5ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1c5ee8: 0x90232eb6  lbu         $v1, 0x2EB6($at)
    ctx->pc = 0x1c5ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EB6u));
    // 0x1c5eec: 0x0  nop
    ctx->pc = 0x1c5eecu;
    // NOP
    ctx->pc = 0x1c5ef0u;
}
