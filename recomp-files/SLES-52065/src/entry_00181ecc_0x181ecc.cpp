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

// Function: entry_00181ecc
// Address: 0x181ecc - 0x181edc
void entry_00181ecc_0x181ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181ecc_0x181ecc");
#endif

    ctx->pc = 0x181eccu;

    // 0x181ecc: 0x8f82865c  lw          $v0, -0x79A4($gp)
    ctx->pc = 0x181eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
    // 0x181ed0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x181ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x181ed4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x181ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x181ed8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x181ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->pc = 0x181edcu;
}
