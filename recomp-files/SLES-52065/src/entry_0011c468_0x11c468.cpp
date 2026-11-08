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

// Function: entry_0011c468
// Address: 0x11c468 - 0x11c49c
void entry_0011c468_0x11c468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c468_0x11c468");
#endif

    ctx->pc = 0x11c468u;

    // 0x11c468: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x11c468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x11c46c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11c46cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c474: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x11c474u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x11c478: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x11c478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x11c47c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x11c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x11c480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11c480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11c484: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11c488: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x11C488u;
    {
        const bool branch_taken_0x11c488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C488u;
        // 0x11c48c: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c488) {
            ctx->pc = 0x11C508u;
            return;
        }
    }
    ctx->pc = 0x11C490u;
    // 0x11c490: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11c490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11c494: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x11c494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11c498: 0x3446b000  ori         $a2, $v0, 0xB000
    ctx->pc = 0x11c498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    ctx->pc = 0x11c49cu;
}
