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

// Function: caseD_6
// Address: 0x123ff0 - 0x124014
void caseD_6_0x123ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x123ff0");
#endif

    ctx->pc = 0x123ff0u;

    // 0x123ff0: 0x9684007e  lhu         $a0, 0x7E($s4)
    ctx->pc = 0x123ff0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 126)));
    // 0x123ff4: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x123ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x123ff8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x123ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x123ffc: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x123ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x124000: 0x2402f03f  addiu       $v0, $zero, -0xFC1
    ctx->pc = 0x124000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963263));
    // 0x124004: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x124004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x124008: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x124008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12400c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124010: 0xa682007e  sh          $v0, 0x7E($s4)
    ctx->pc = 0x124010u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 126), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x124014u;
}
