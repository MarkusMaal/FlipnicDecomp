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

// Function: entry_001c26cc
// Address: 0x1c26cc - 0x1c26e4
void entry_001c26cc_0x1c26cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c26cc_0x1c26cc");
#endif

    ctx->pc = 0x1c26ccu;

    // 0x1c26cc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1c26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c26d0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C26D0u;
    {
        const bool branch_taken_0x1c26d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26D0u;
        // 0x1c26d4: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26d0) {
            ctx->pc = 0x1C26E4u;
            return;
        }
    }
    ctx->pc = 0x1C26D8u;
    // 0x1c26d8: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c26dc: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x1C26DCu;
    {
        const bool branch_taken_0x1c26dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26DCu;
        // 0x1c26e0: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26dc) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C26E4u;
}
