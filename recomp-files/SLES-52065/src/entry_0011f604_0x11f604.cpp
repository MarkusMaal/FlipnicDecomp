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

// Function: entry_0011f604
// Address: 0x11f604 - 0x11f614
void entry_0011f604_0x11f604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f604_0x11f604");
#endif

    ctx->pc = 0x11f604u;

    // 0x11f604: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x11f604u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x11f608: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11f608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11f60c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f610: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x11f610u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x11f614u;
}
