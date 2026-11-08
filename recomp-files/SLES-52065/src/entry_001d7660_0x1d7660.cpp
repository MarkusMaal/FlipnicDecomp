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

// Function: entry_001d7660
// Address: 0x1d7660 - 0x1d7670
void entry_001d7660_0x1d7660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7660_0x1d7660");
#endif

    ctx->pc = 0x1d7660u;

    // 0x1d7660: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x1d7660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1d7664: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d7664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d7668: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d7668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d766c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1d766cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1d7670u;
}
