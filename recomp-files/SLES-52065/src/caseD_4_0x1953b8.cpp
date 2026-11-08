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

// Function: caseD_4
// Address: 0x1953b8 - 0x1953ec
void caseD_4_0x1953b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1953b8");
#endif

    ctx->pc = 0x1953b8u;

    // 0x1953b8: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1953b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1953bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1953bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1953c0: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1953C0u;
    {
        const bool branch_taken_0x1953c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1953C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953C0u;
        // 0x1953c4: 0x8e110028  lw          $s1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953c0) {
            ctx->pc = 0x195424u;
            return;
        }
    }
    ctx->pc = 0x1953C8u;
    // 0x1953c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1953c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1953cc: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1953CCu;
    {
        const bool branch_taken_0x1953cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1953D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953CCu;
        // 0x1953d0: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953cc) {
            ctx->pc = 0x195404u;
            return;
        }
    }
    ctx->pc = 0x1953D4u;
    // 0x1953d4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1953D4u;
    {
        const bool branch_taken_0x1953d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1953d4) {
            ctx->pc = 0x1953ECu;
            return;
        }
    }
    ctx->pc = 0x1953DCu;
    // 0x1953dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1953DCu;
    {
        const bool branch_taken_0x1953dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953dc) {
            ctx->pc = 0x1953ECu;
            return;
        }
    }
    ctx->pc = 0x1953E4u;
    // 0x1953e4: 0x1000025f  b           . + 4 + (0x25F << 2)
    ctx->pc = 0x1953E4u;
    {
        const bool branch_taken_0x1953e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953e4) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x1953ECu;
}
