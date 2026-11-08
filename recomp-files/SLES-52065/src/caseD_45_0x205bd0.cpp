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

// Function: caseD_45
// Address: 0x205bd0 - 0x205be8
void caseD_45_0x205bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_45_0x205bd0");
#endif

    ctx->pc = 0x205bd0u;

    // 0x205bd0: 0x32630280  andi        $v1, $s3, 0x280
    ctx->pc = 0x205bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)640);
    // 0x205bd4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x205bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x205bd8: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x205BD8u;
    {
        const bool branch_taken_0x205bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x205BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BD8u;
        // 0x205bdc: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bd8) {
            ctx->pc = 0x205C2Cu;
            return;
        }
    }
    ctx->pc = 0x205BE0u;
    // 0x205be0: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x205be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x205be4: 0x345300c0  ori         $s3, $v0, 0xC0
    ctx->pc = 0x205be4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->pc = 0x205be8u;
}
