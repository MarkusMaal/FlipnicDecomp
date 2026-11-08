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

// Function: caseD_2
// Address: 0x123f44 - 0x123f70
void caseD_2_0x123f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x123f44");
#endif

    ctx->pc = 0x123f44u;

    // 0x123f44: 0x0  nop
    ctx->pc = 0x123f44u;
    // NOP
    // 0x123f48: 0x92840074  lbu         $a0, 0x74($s4)
    ctx->pc = 0x123f48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x123f4c: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x123f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x123f50: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x123f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x123f54: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x123f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x123f58: 0x2402ff03  addiu       $v0, $zero, -0xFD
    ctx->pc = 0x123f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967043));
    // 0x123f5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x123f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x123f60: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x123f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x123f64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x123f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x123f68: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x123F68u;
    {
        const bool branch_taken_0x123f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F68u;
        // 0x123f6c: 0xa2820074  sb          $v0, 0x74($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f68) {
            ctx->pc = 0x124014u;
            return;
        }
    }
    ctx->pc = 0x123F70u;
}
