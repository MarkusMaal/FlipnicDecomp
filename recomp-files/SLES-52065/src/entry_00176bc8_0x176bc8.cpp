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

// Function: entry_00176bc8
// Address: 0x176bc8 - 0x176be0
void entry_00176bc8_0x176bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176bc8_0x176bc8");
#endif

    ctx->pc = 0x176bc8u;

    // 0x176bc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x176bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176bcc: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x176bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x176bd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x176bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x176bd4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x176bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x176bd8: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x176bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x176bdc: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x176bdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->pc = 0x176be0u;
}
