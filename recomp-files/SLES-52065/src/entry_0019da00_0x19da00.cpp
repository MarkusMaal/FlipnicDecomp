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

// Function: entry_0019da00
// Address: 0x19da00 - 0x19da18
void entry_0019da00_0x19da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019da00_0x19da00");
#endif

    ctx->pc = 0x19da00u;

    // 0x19da00: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19da00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x19da04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19da04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da08: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x19da08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19da0c: 0x2413fffc  addiu       $s3, $zero, -0x4
    ctx->pc = 0x19da0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x19da10: 0x2414ffc0  addiu       $s4, $zero, -0x40
    ctx->pc = 0x19da10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x19da14: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x19da14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x19da18u;
}
