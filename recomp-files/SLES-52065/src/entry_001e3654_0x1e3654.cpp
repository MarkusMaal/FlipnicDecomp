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

// Function: entry_001e3654
// Address: 0x1e3654 - 0x1e3680
void entry_001e3654_0x1e3654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3654_0x1e3654");
#endif

    ctx->pc = 0x1e3654u;

    // 0x1e3654: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1e3654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1e3658: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1e3658u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x1e365c: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1e365cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x1e3660: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1e3660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1e3664: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1e3664u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x1e3668: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x1e3668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x1e366c: 0xa2600040  sb          $zero, 0x40($s3)
    ctx->pc = 0x1e366cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3670: 0xdfc30070  ld          $v1, 0x70($fp)
    ctx->pc = 0x1e3670u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x1e3674: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e3674u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1e3678: 0x8fc30078  lw          $v1, 0x78($fp)
    ctx->pc = 0x1e3678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
    // 0x1e367c: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1e367cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1e3680u;
}
