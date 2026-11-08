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

// Function: entry_001d4bb0
// Address: 0x1d4bb0 - 0x1d4bc8
void entry_001d4bb0_0x1d4bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4bb0_0x1d4bb0");
#endif

    ctx->pc = 0x1d4bb0u;

    // 0x1d4bb0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d4bb4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1d4bb8: 0x24520480  addiu       $s2, $v0, 0x480
    ctx->pc = 0x1d4bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x1d4bbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d4bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4bc0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d4bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4bc4: 0x0  nop
    ctx->pc = 0x1d4bc4u;
    // NOP
    ctx->pc = 0x1d4bc8u;
}
