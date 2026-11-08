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

// Function: entry_001ac0c8
// Address: 0x1ac0c8 - 0x1ac0f8
void entry_001ac0c8_0x1ac0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac0c8_0x1ac0c8");
#endif

    ctx->pc = 0x1ac0c8u;

    // 0x1ac0c8: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x1ac0c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ac0cc: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AC0CCu;
    {
        const bool branch_taken_0x1ac0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0CCu;
        // 0x1ac0d0: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0cc) {
            ctx->pc = 0x1AC150u;
            return;
        }
    }
    ctx->pc = 0x1AC0D4u;
    // 0x1ac0d4: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AC0D4u;
    {
        const bool branch_taken_0x1ac0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac0d4) {
            ctx->pc = 0x1AC140u;
            return;
        }
    }
    ctx->pc = 0x1AC0DCu;
    // 0x1ac0dc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1ac0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1ac0e0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AC0E0u;
    {
        const bool branch_taken_0x1ac0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0E0u;
        // 0x1ac0e4: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0e0) {
            ctx->pc = 0x1AC120u;
            return;
        }
    }
    ctx->pc = 0x1AC0E8u;
    // 0x1ac0e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC0E8u;
    {
        const bool branch_taken_0x1ac0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac0e8) {
            ctx->pc = 0x1AC0F8u;
            return;
        }
    }
    ctx->pc = 0x1AC0F0u;
    // 0x1ac0f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1AC0F0u;
    {
        const bool branch_taken_0x1ac0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac0f0) {
            ctx->pc = 0x1AC150u;
            return;
        }
    }
    ctx->pc = 0x1AC0F8u;
}
