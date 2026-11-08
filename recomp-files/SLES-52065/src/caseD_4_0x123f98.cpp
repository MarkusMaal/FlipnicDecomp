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
// Address: 0x123f98 - 0x123fc4
void caseD_4_0x123f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x123f98");
#endif

    ctx->pc = 0x123f98u;

    // 0x123f98: 0xde840078  ld          $a0, 0x78($s4)
    ctx->pc = 0x123f98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x123f9c: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x123f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x123fa0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x123fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x123fa4: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x123fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x123fa8: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x123fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x123fac: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x123facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x123fb0: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x123fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x123fb4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x123fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x123fb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x123fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x123fbc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x123FBCu;
    {
        const bool branch_taken_0x123fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FBCu;
        // 0x123fc0: 0xfe820078  sd          $v0, 0x78($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fbc) {
            ctx->pc = 0x124014u;
            return;
        }
    }
    ctx->pc = 0x123FC4u;
}
