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

// Function: entry_00208bdc
// Address: 0x208bdc - 0x208be8
void entry_00208bdc_0x208bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208bdc_0x208bdc");
#endif

    ctx->pc = 0x208bdcu;

    // 0x208bdc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x208bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208be0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x208be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x208be4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x208be4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x208be8u;
}
