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
// Address: 0x205554 - 0x205584
void caseD_1_0x205554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x205554");
#endif

    ctx->pc = 0x205554u;

    // 0x205554: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x205554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x205558: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x205558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x20555c: 0x246333d0  addiu       $v1, $v1, 0x33D0
    ctx->pc = 0x20555cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13264));
    // 0x205560: 0x24424dd1  addiu       $v0, $v0, 0x4DD1
    ctx->pc = 0x205560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
    // 0x205564: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x205564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
    // 0x205568: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x205568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20556c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20556cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x205570: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x205570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205574: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x205574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
    // 0x205578: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x205578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20557c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20557cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x205580: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x205580u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    ctx->pc = 0x205584u;
}
