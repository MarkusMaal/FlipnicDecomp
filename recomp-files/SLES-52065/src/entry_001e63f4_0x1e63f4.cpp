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

// Function: entry_001e63f4
// Address: 0x1e63f4 - 0x1e6410
void entry_001e63f4_0x1e63f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e63f4_0x1e63f4");
#endif

    ctx->pc = 0x1e63f4u;

    // 0x1e63f4: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1e63f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1e63f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e63fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e6400: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e6400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e6404: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e6404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6408: 0x0  nop
    ctx->pc = 0x1e6408u;
    // NOP
    // 0x1e640c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e640cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1e6410u;
}
