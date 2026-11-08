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

// Function: entry_00188380
// Address: 0x188380 - 0x188394
void entry_00188380_0x188380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188380_0x188380");
#endif

    ctx->pc = 0x188380u;

    // 0x188380: 0xa2650000  sb          $a1, 0x0($s3)
    ctx->pc = 0x188380u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x188384: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x188384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x188388: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x188388u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x18838c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x18838cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x188390: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x188390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    ctx->pc = 0x188394u;
}
