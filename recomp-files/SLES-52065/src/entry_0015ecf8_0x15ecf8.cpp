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

// Function: entry_0015ecf8
// Address: 0x15ecf8 - 0x15ed4c
void entry_0015ecf8_0x15ecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ecf8_0x15ecf8");
#endif

    ctx->pc = 0x15ecf8u;

    // 0x15ecf8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15ecfc: 0x24427490  addiu       $v0, $v0, 0x7490
    ctx->pc = 0x15ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29840));
    // 0x15ed00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ed04: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15ed08: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x15ed08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x15ed0c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15ed10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15ed14: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x15ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15ed18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15ed1c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15ed20: 0x723021  addu        $a2, $v1, $s2
    ctx->pc = 0x15ed20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15ed24: 0x84c30228  lh          $v1, 0x228($a2)
    ctx->pc = 0x15ed24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 552)));
    // 0x15ed28: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15ED28u;
    {
        const bool branch_taken_0x15ed28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED28u;
        // 0x15ed2c: 0x3c02ff7f  lui         $v0, 0xFF7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed28) {
            ctx->pc = 0x15ED4Cu;
            return;
        }
    }
    ctx->pc = 0x15ED30u;
    // 0x15ed30: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15ed30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15ed34: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x15ed34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15ed38: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15ed3c: 0x244274c0  addiu       $v0, $v0, 0x74C0
    ctx->pc = 0x15ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29888));
    // 0x15ed40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ed44: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x15ED44u;
    {
        const bool branch_taken_0x15ed44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED44u;
        // 0x15ed48: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed44) {
            ctx->pc = 0x15EEB8u;
            return;
        }
    }
    ctx->pc = 0x15ED4Cu;
}
