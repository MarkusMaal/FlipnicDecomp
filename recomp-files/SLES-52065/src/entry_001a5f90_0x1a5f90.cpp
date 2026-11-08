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

// Function: entry_001a5f90
// Address: 0x1a5f90 - 0x1a5fc0
void entry_001a5f90_0x1a5f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5f90_0x1a5f90");
#endif

    ctx->pc = 0x1a5f90u;

    // 0x1a5f90: 0x8e8300e4  lw          $v1, 0xE4($s4)
    ctx->pc = 0x1a5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
    // 0x1a5f94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a5f98: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1A5F98u;
    {
        const bool branch_taken_0x1a5f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F98u;
        // 0x1a5f9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f98) {
            ctx->pc = 0x1A611Cu;
            return;
        }
    }
    ctx->pc = 0x1A5FA0u;
    // 0x1a5fa0: 0x10650034  beq         $v1, $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1A5FA0u;
    {
        const bool branch_taken_0x1a5fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FA0u;
        // 0x1a5fa4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fa0) {
            ctx->pc = 0x1A6074u;
            return;
        }
    }
    ctx->pc = 0x1A5FA8u;
    // 0x1a5fa8: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A5FA8u;
    {
        const bool branch_taken_0x1a5fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a5fa8) {
            ctx->pc = 0x1A5FF8u;
            return;
        }
    }
    ctx->pc = 0x1A5FB0u;
    // 0x1a5fb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5FB0u;
    {
        const bool branch_taken_0x1a5fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fb0) {
            ctx->pc = 0x1A5FC0u;
            return;
        }
    }
    ctx->pc = 0x1A5FB8u;
    // 0x1a5fb8: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1A5FB8u;
    {
        const bool branch_taken_0x1a5fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fb8) {
            ctx->pc = 0x1A6240u;
            return;
        }
    }
    ctx->pc = 0x1A5FC0u;
}
