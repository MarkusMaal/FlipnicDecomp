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

// Function: entry_0019e4e0
// Address: 0x19e4e0 - 0x19e4f0
void entry_0019e4e0_0x19e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e4e0_0x19e4e0");
#endif

    ctx->pc = 0x19e4e0u;

    // 0x19e4e0: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x19e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x19e4e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19e4e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19e4e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4ec: 0x24530040  addiu       $s3, $v0, 0x40
    ctx->pc = 0x19e4ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x19e4f0u;
}
