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
// Address: 0x110128 - 0x110144
void caseD_4_0x110128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x110128");
#endif

    ctx->pc = 0x110128u;

    // 0x110128: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x110128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11012c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11012cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110130: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x110130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11013c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11013Cu;
    {
        const bool branch_taken_0x11013c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11013Cu;
        // 0x110140: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11013c) {
            ctx->pc = 0x110188u;
            return;
        }
    }
    ctx->pc = 0x110144u;
}
