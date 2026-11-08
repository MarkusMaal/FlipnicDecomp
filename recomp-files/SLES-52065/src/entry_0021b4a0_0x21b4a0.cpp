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

// Function: entry_0021b4a0
// Address: 0x21b4a0 - 0x21b4c0
void entry_0021b4a0_0x21b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b4a0_0x21b4a0");
#endif

    ctx->pc = 0x21b4a0u;

label_21b4a0:
    // 0x21b4a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21b4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21b4a4: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x21B4A4u;
    {
        const bool branch_taken_0x21b4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4A4u;
        // 0x21b4a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4a4) {
            ctx->pc = 0x21B47Cu;
            return;
        }
    }
    ctx->pc = 0x21B4ACu;
    // 0x21b4ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b4b0: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x21b4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x21b4b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B4B4u;
    {
        const bool branch_taken_0x21b4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4B4u;
        // 0x21b4b8: 0x641016  dsrlv       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4b4) {
            ctx->pc = 0x21B4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b4a0;
        }
    }
    ctx->pc = 0x21B4BCu;
    // 0x21b4bc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x21b4bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x21b4c0u;
}
