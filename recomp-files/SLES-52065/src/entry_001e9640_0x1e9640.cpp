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

// Function: entry_001e9640
// Address: 0x1e9640 - 0x1e9668
void entry_001e9640_0x1e9640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9640_0x1e9640");
#endif

    ctx->pc = 0x1e9640u;

    // 0x1e9640: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x1e9640u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x1e9644: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x1e9644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1e9648: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x1e9648u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1e964c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1e964cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1e9650: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x1e9650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1e9654: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1e9654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1e9658: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x1e9658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1e965c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x1e965cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1e9660: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1e9660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e9664: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e9664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1e9668u;
}
