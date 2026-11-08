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

// Function: entry_00144e4c
// Address: 0x144e4c - 0x144e5c
void entry_00144e4c_0x144e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144e4c_0x144e4c");
#endif

    ctx->pc = 0x144e4cu;

    // 0x144e4c: 0x0  nop
    ctx->pc = 0x144e4cu;
    // NOP
    // 0x144e50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x144e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x144e54: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x144e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x144e58: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x144e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x144e5cu;
}
