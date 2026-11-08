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

// Function: entry_001c8e40
// Address: 0x1c8e40 - 0x1c8e78
void entry_001c8e40_0x1c8e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8e40_0x1c8e40");
#endif

    ctx->pc = 0x1c8e40u;

    // 0x1c8e40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8e44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8e48: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8e4c: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1C8E4Cu;
    {
        const bool branch_taken_0x1c8e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8e4c) {
            ctx->pc = 0x1C8F18u;
            return;
        }
    }
    ctx->pc = 0x1C8E54u;
    // 0x1c8e54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8e58: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C8E58u;
    {
        const bool branch_taken_0x1c8e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E58u;
        // 0x1c8e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e58) {
            ctx->pc = 0x1C8EACu;
            return;
        }
    }
    ctx->pc = 0x1C8E60u;
    // 0x1c8e60: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8E60u;
    {
        const bool branch_taken_0x1c8e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8e60) {
            ctx->pc = 0x1C8E78u;
            return;
        }
    }
    ctx->pc = 0x1C8E68u;
    // 0x1c8e68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8E68u;
    {
        const bool branch_taken_0x1c8e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e68) {
            ctx->pc = 0x1C8E78u;
            return;
        }
    }
    ctx->pc = 0x1C8E70u;
    // 0x1c8e70: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C8E70u;
    {
        const bool branch_taken_0x1c8e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E70u;
        // 0x1c8e74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e70) {
            ctx->pc = 0x1C8F20u;
            return;
        }
    }
    ctx->pc = 0x1C8E78u;
}
