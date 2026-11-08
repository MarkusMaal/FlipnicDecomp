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

// Function: entry_001a7330
// Address: 0x1a7330 - 0x1a733c
void entry_001a7330_0x1a7330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7330_0x1a7330");
#endif

    ctx->pc = 0x1a7330u;

    // 0x1a7330: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1a7330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1a7334: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a7334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a7338: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1a7338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x1a733cu;
}
