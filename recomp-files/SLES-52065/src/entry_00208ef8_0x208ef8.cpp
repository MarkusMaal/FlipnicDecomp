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

// Function: entry_00208ef8
// Address: 0x208ef8 - 0x208f20
void entry_00208ef8_0x208ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208ef8_0x208ef8");
#endif

    ctx->pc = 0x208ef8u;

label_208ef8:
    // 0x208ef8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x208ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x208efc: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x208efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x208f00: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x208f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x208f04: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x208f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x208f08: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x208f08u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x208f0c: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x208f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x208f10: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x208F10u;
    {
        const bool branch_taken_0x208f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F10u;
        // 0x208f14: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f10) {
            ctx->pc = 0x208EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208ef8;
        }
    }
    ctx->pc = 0x208F18u;
    // 0x208f18: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x208f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x208f1c: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x208f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    ctx->pc = 0x208f20u;
}
