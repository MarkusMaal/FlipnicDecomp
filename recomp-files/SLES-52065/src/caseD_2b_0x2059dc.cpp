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

// Function: caseD_2b
// Address: 0x2059dc - 0x2059f0
void caseD_2b_0x2059dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2b_0x2059dc");
#endif

    ctx->pc = 0x2059dcu;

    // 0x2059dc: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x2059dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
    // 0x2059e0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2059E0u;
    {
        const bool branch_taken_0x2059e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2059E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059E0u;
        // 0x2059e4: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059e0) {
            ctx->pc = 0x205A54u;
            return;
        }
    }
    ctx->pc = 0x2059E8u;
    // 0x2059e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2059E8u;
    {
        const bool branch_taken_0x2059e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2059ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059E8u;
        // 0x2059ec: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059e8) {
            ctx->pc = 0x205A10u;
            return;
        }
    }
    ctx->pc = 0x2059F0u;
}
