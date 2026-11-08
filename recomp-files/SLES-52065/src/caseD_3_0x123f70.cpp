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

// Function: caseD_3
// Address: 0x123f70 - 0x123f98
void caseD_3_0x123f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x123f70");
#endif

    ctx->pc = 0x123f70u;

    // 0x123f70: 0x96840076  lhu         $a0, 0x76($s4)
    ctx->pc = 0x123f70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 118)));
    // 0x123f74: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x123f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x123f78: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x123f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x123f7c: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x123f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x123f80: 0x2402f03f  addiu       $v0, $zero, -0xFC1
    ctx->pc = 0x123f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963263));
    // 0x123f84: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x123f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x123f88: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x123f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x123f8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x123f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x123f90: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x123F90u;
    {
        const bool branch_taken_0x123f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F90u;
        // 0x123f94: 0xa6820076  sh          $v0, 0x76($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 118), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f90) {
            ctx->pc = 0x124014u;
            return;
        }
    }
    ctx->pc = 0x123F98u;
}
