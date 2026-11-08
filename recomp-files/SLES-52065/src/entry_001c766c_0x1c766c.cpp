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

// Function: entry_001c766c
// Address: 0x1c766c - 0x1c76a8
void entry_001c766c_0x1c766c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c766c_0x1c766c");
#endif

    ctx->pc = 0x1c766cu;

    // 0x1c766c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c766cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c7670: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1c7670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1c7674: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C7674u;
    {
        const bool branch_taken_0x1c7674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7674) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C767Cu;
    // 0x1c767c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1c767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1c7680: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C7680u;
    {
        const bool branch_taken_0x1c7680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7680u;
        // 0x1c7684: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7680) {
            ctx->pc = 0x1C76B8u;
            return;
        }
    }
    ctx->pc = 0x1C7688u;
    // 0x1c7688: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1c7688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c768c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C768Cu;
    {
        const bool branch_taken_0x1c768c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C768Cu;
        // 0x1c7690: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c768c) {
            ctx->pc = 0x1C76ACu;
            return;
        }
    }
    ctx->pc = 0x1C7694u;
    // 0x1c7694: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c7694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7698: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7698u;
    {
        const bool branch_taken_0x1c7698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7698) {
            ctx->pc = 0x1C76A8u;
            return;
        }
    }
    ctx->pc = 0x1C76A0u;
    // 0x1c76a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C76A0u;
    {
        const bool branch_taken_0x1c76a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c76a0) {
            ctx->pc = 0x1C76B4u;
            return;
        }
    }
    ctx->pc = 0x1C76A8u;
}
