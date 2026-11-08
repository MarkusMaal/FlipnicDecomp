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
// Address: 0x124680 - 0x1246b4
void caseD_6_0x124680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x124680");
#endif

    ctx->pc = 0x124680u;

    // 0x124680: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x124680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x124684: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x124684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x124688: 0xde450078  ld          $a1, 0x78($s2)
    ctx->pc = 0x124688u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x12468c: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x12468cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x124690: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x124690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x124694: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x124694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124698: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x124698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12469c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12469cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1246a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1246a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1246a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1246a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1246a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1246a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1246ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1246acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1246b0: 0xfe420078  sd          $v0, 0x78($s2)
    ctx->pc = 0x1246b0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 2));
    ctx->pc = 0x1246b4u;
}
