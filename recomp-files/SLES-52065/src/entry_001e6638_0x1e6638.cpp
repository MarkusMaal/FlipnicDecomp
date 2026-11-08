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

// Function: entry_001e6638
// Address: 0x1e6638 - 0x1e6664
void entry_001e6638_0x1e6638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6638_0x1e6638");
#endif

    ctx->pc = 0x1e6638u;

    // 0x1e6638: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1e6638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e663c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1e663cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e6640: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e6640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6644: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e6644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e6648: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e6648u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e664c: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e664cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e6650: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e6650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e6654: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e6654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e6658: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e6658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e665c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e665cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6660: 0x0  nop
    ctx->pc = 0x1e6660u;
    // NOP
    ctx->pc = 0x1e6664u;
}
