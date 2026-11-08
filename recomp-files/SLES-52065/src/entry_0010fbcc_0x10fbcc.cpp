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

// Function: entry_0010fbcc
// Address: 0x10fbcc - 0x10fbec
void entry_0010fbcc_0x10fbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fbcc_0x10fbcc");
#endif

    ctx->pc = 0x10fbccu;

    // 0x10fbcc: 0x0  nop
    ctx->pc = 0x10fbccu;
    // NOP
    // 0x10fbd0: 0x92250224  lbu         $a1, 0x224($s1)
    ctx->pc = 0x10fbd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x10fbd4: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x10fbd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x10fbd8: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x10fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x10fbdc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x10fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x10fbe0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10fbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10fbe4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10fbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10fbe8: 0xa2230224  sb          $v1, 0x224($s1)
    ctx->pc = 0x10fbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 548), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x10fbecu;
}
