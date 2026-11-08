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

// Function: entry_0013fa48
// Address: 0x13fa48 - 0x13fa68
void entry_0013fa48_0x13fa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fa48_0x13fa48");
#endif

    ctx->pc = 0x13fa48u;

    // 0x13fa48: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x13fa48u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13fa4c: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x13fa4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13fa50: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x13fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13fa54: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13fa54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13fa58: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13fa5c: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x13fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x13fa60: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x13fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x13fa64: 0xafb00060  sw          $s0, 0x60($sp)
    ctx->pc = 0x13fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
    ctx->pc = 0x13fa68u;
}
