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

// Function: entry_001c3f04
// Address: 0x1c3f04 - 0x1c3f40
void entry_001c3f04_0x1c3f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3f04_0x1c3f04");
#endif

    ctx->pc = 0x1c3f04u;

    // 0x1c3f04: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c3f08: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x1c3f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c3f0c: 0x1060013e  beqz        $v1, . + 4 + (0x13E << 2)
    ctx->pc = 0x1C3F0Cu;
    {
        const bool branch_taken_0x1c3f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f0c) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3F14u;
    // 0x1c3f14: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1c3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1c3f18: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C3F18u;
    {
        const bool branch_taken_0x1c3f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F18u;
        // 0x1c3f1c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f18) {
            ctx->pc = 0x1C3F50u;
            return;
        }
    }
    ctx->pc = 0x1C3F20u;
    // 0x1c3f20: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1c3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c3f24: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3F24u;
    {
        const bool branch_taken_0x1c3f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F24u;
        // 0x1c3f28: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f24) {
            ctx->pc = 0x1C3F44u;
            return;
        }
    }
    ctx->pc = 0x1C3F2Cu;
    // 0x1c3f2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3f30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3F30u;
    {
        const bool branch_taken_0x1c3f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3f30) {
            ctx->pc = 0x1C3F40u;
            return;
        }
    }
    ctx->pc = 0x1C3F38u;
    // 0x1c3f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3F38u;
    {
        const bool branch_taken_0x1c3f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f38) {
            ctx->pc = 0x1C3F4Cu;
            return;
        }
    }
    ctx->pc = 0x1C3F40u;
}
