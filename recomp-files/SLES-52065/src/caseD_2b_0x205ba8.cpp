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
// Address: 0x205ba8 - 0x205bbc
void caseD_2b_0x205ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2b_0x205ba8");
#endif

    ctx->pc = 0x205ba8u;

    // 0x205ba8: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x205ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
    // 0x205bac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x205BACu;
    {
        const bool branch_taken_0x205bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BACu;
        // 0x205bb0: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bac) {
            ctx->pc = 0x205C2Cu;
            return;
        }
    }
    ctx->pc = 0x205BB4u;
    // 0x205bb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x205BB4u;
    {
        const bool branch_taken_0x205bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BB4u;
        // 0x205bb8: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bb4) {
            ctx->pc = 0x205BE8u;
            return;
        }
    }
    ctx->pc = 0x205BBCu;
}
