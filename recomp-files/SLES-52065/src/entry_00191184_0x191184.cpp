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

// Function: entry_00191184
// Address: 0x191184 - 0x1911b4
void entry_00191184_0x191184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191184_0x191184");
#endif

    ctx->pc = 0x191184u;

    // 0x191184: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x191184u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19118c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191190: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x191190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191194: 0x8c442c10  lw          $a0, 0x2C10($v0)
    ctx->pc = 0x191194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
    // 0x191198: 0x8c452c1c  lw          $a1, 0x2C1C($v0)
    ctx->pc = 0x191198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
    // 0x19119c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1911a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1911a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1911a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1911a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1911a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1911a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1911ac: 0x9044003f  lbu         $a0, 0x3F($v0)
    ctx->pc = 0x1911acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x1911b0: 0x0  nop
    ctx->pc = 0x1911b0u;
    // NOP
    ctx->pc = 0x1911b4u;
}
