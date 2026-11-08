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

// Function: caseD_2
// Address: 0x18e8b4 - 0x18e8f0
void caseD_2_0x18e8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x18e8b4");
#endif

    ctx->pc = 0x18e8b4u;

    // 0x18e8b4: 0x8e250484  lw          $a1, 0x484($s1)
    ctx->pc = 0x18e8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
    // 0x18e8b8: 0x8e23271c  lw          $v1, 0x271C($s1)
    ctx->pc = 0x18e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
    // 0x18e8bc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x18e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18e8c0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18E8C0u;
    {
        const bool branch_taken_0x18e8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8C0u;
        // 0x18e8c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8c0) {
            ctx->pc = 0x18E8F0u;
            return;
        }
    }
    ctx->pc = 0x18E8C8u;
    // 0x18e8c8: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18e8cc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x18e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18e8d0: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x18e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18e8d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18e8d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e8dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18e8e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e8e4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x18e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x18e8e8: 0xae220474  sw          $v0, 0x474($s1)
    ctx->pc = 0x18e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1140), GPR_U32(ctx, 2));
    // 0x18e8ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x18e8f0u;
}
