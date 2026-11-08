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

// Function: entry_001a4104
// Address: 0x1a4104 - 0x1a412c
void entry_001a4104_0x1a4104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4104_0x1a4104");
#endif

    ctx->pc = 0x1a4104u;

    // 0x1a4104: 0xae200340  sw          $zero, 0x340($s1)
    ctx->pc = 0x1a4104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 0));
    // 0x1a4108: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a410c: 0xae2006b0  sw          $zero, 0x6B0($s1)
    ctx->pc = 0x1a410cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1712), GPR_U32(ctx, 0));
    // 0x1a4110: 0xae2006f4  sw          $zero, 0x6F4($s1)
    ctx->pc = 0x1a4110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 0));
    // 0x1a4114: 0xae200728  sw          $zero, 0x728($s1)
    ctx->pc = 0x1a4114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1832), GPR_U32(ctx, 0));
    // 0x1a4118: 0xae220938  sw          $v0, 0x938($s1)
    ctx->pc = 0x1a4118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2360), GPR_U32(ctx, 2));
    // 0x1a411c: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x1a411cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    // 0x1a4120: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x1a4120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
    // 0x1a4124: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a4124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x1a4128: 0x24540040  addiu       $s4, $v0, 0x40
    ctx->pc = 0x1a4128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1a412cu;
}
