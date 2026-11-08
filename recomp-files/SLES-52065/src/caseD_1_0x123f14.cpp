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
// Address: 0x123f14 - 0x123f44
void caseD_1_0x123f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x123f14");
#endif

    ctx->pc = 0x123f14u;

    // 0x123f14: 0x0  nop
    ctx->pc = 0x123f14u;
    // NOP
    // 0x123f18: 0xde840070  ld          $a0, 0x70($s4)
    ctx->pc = 0x123f18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x123f1c: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x123f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x123f20: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x123f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x123f24: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x123f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x123f28: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x123f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x123f2c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x123f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x123f30: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x123f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x123f34: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x123f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x123f38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x123f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x123f3c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x123F3Cu;
    {
        const bool branch_taken_0x123f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F3Cu;
        // 0x123f40: 0xfe820070  sd          $v0, 0x70($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f3c) {
            ctx->pc = 0x124014u;
            return;
        }
    }
    ctx->pc = 0x123F44u;
}
