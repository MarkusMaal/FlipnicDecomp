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
// Address: 0x124630 - 0x12464c
void caseD_4_0x124630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x124630");
#endif

    ctx->pc = 0x124630u;

    // 0x124630: 0x96440078  lhu         $a0, 0x78($s2)
    ctx->pc = 0x124630u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x124634: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x124634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x124638: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x124638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x12463c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x124640: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124644: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x124644u;
    {
        const bool branch_taken_0x124644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124644u;
        // 0x124648: 0xa6420078  sh          $v0, 0x78($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 120), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124644) {
            ctx->pc = 0x1246B4u;
            return;
        }
    }
    ctx->pc = 0x12464Cu;
}
