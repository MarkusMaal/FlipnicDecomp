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

// Function: entry_001e7ffc
// Address: 0x1e7ffc - 0x1e803c
void entry_001e7ffc_0x1e7ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7ffc_0x1e7ffc");
#endif

    ctx->pc = 0x1e7ffcu;

    // 0x1e7ffc: 0x0  nop
    ctx->pc = 0x1e7ffcu;
    // NOP
    // 0x1e8000: 0x27c30178  addiu       $v1, $fp, 0x178
    ctx->pc = 0x1e8000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 376));
    // 0x1e8004: 0x1073000d  beq         $v1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1E8004u;
    {
        const bool branch_taken_0x1e8004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x1e8004) {
            ctx->pc = 0x1E803Cu;
            return;
        }
    }
    ctx->pc = 0x1E800Cu;
    // 0x1e800c: 0x8fc40178  lw          $a0, 0x178($fp)
    ctx->pc = 0x1e800cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 376)));
    // 0x1e8010: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e8010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e8014: 0xafc30178  sw          $v1, 0x178($fp)
    ctx->pc = 0x1e8014u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 376), GPR_U32(ctx, 3));
    // 0x1e8018: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1e8018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1e801c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1e801cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e8020: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e8020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e8024: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1e8024u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x1e8028: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x1e8028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x1e802c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1e802cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e8030: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1e8030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e8034: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1e8034u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1e8038: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x1e8038u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1e803cu;
}
