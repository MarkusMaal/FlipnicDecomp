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

// Function: entry_0012b7e0
// Address: 0x12b7e0 - 0x12b7f4
void entry_0012b7e0_0x12b7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b7e0_0x12b7e0");
#endif

    ctx->pc = 0x12b7e0u;

    // 0x12b7e0: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x12b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x12b7e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x12b7e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b7e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12b7e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12b7ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7f0: 0x4c4021  addu        $t0, $v0, $t4
    ctx->pc = 0x12b7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    ctx->pc = 0x12b7f4u;
}
