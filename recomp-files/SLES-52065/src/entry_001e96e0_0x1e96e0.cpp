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

// Function: entry_001e96e0
// Address: 0x1e96e0 - 0x1e9708
void entry_001e96e0_0x1e96e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e96e0_0x1e96e0");
#endif

    ctx->pc = 0x1e96e0u;

    // 0x1e96e0: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x1e96e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1e96e4: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x1e96e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1e96e8: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x1e96e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1e96ec: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1e96ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1e96f0: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x1e96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1e96f4: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1e96f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1e96f8: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x1e96f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1e96fc: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x1e96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1e9700: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1e9700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e9704: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e9704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1e9708u;
}
