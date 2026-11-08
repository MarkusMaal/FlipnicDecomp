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

// Function: entry_001e46b4
// Address: 0x1e46b4 - 0x1e46e0
void entry_001e46b4_0x1e46b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e46b4_0x1e46b4");
#endif

    ctx->pc = 0x1e46b4u;

    // 0x1e46b4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1e46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1e46b8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1e46b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x1e46bc: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1e46bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x1e46c0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1e46c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1e46c4: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1e46c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x1e46c8: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x1e46c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x1e46cc: 0xa2600050  sb          $zero, 0x50($s3)
    ctx->pc = 0x1e46ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e46d0: 0xdfc30070  ld          $v1, 0x70($fp)
    ctx->pc = 0x1e46d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x1e46d4: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e46d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1e46d8: 0x8fc30078  lw          $v1, 0x78($fp)
    ctx->pc = 0x1e46d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
    // 0x1e46dc: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1e46dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1e46e0u;
}
