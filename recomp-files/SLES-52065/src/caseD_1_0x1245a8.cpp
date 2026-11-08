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

// Function: caseD_1
// Address: 0x1245a8 - 0x1245c4
void caseD_1_0x1245a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1245a8");
#endif

    ctx->pc = 0x1245a8u;

    // 0x1245a8: 0x96440070  lhu         $a0, 0x70($s2)
    ctx->pc = 0x1245a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1245ac: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x1245acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1245b0: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x1245b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x1245b4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1245b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1245b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1245b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1245bc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1245BCu;
    {
        const bool branch_taken_0x1245bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245BCu;
        // 0x1245c0: 0xa6420070  sh          $v0, 0x70($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 112), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245bc) {
            ctx->pc = 0x1246B4u;
            return;
        }
    }
    ctx->pc = 0x1245C4u;
}
