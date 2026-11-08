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

// Function: entry_001e85d4
// Address: 0x1e85d4 - 0x1e8614
void entry_001e85d4_0x1e85d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e85d4_0x1e85d4");
#endif

    ctx->pc = 0x1e85d4u;

    // 0x1e85d4: 0x0  nop
    ctx->pc = 0x1e85d4u;
    // NOP
    // 0x1e85d8: 0x27c30178  addiu       $v1, $fp, 0x178
    ctx->pc = 0x1e85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 376));
    // 0x1e85dc: 0x1073000d  beq         $v1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1E85DCu;
    {
        const bool branch_taken_0x1e85dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x1e85dc) {
            ctx->pc = 0x1E8614u;
            return;
        }
    }
    ctx->pc = 0x1E85E4u;
    // 0x1e85e4: 0x8fc40178  lw          $a0, 0x178($fp)
    ctx->pc = 0x1e85e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 376)));
    // 0x1e85e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e85e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e85ec: 0xafc30178  sw          $v1, 0x178($fp)
    ctx->pc = 0x1e85ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 376), GPR_U32(ctx, 3));
    // 0x1e85f0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1e85f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1e85f4: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1e85f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e85f8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e85f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e85fc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1e85fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x1e8600: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x1e8600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x1e8604: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1e8604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e8608: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1e8608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e860c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1e860cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1e8610: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x1e8610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1e8614u;
}
