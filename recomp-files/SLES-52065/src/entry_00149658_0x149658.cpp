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

// Function: entry_00149658
// Address: 0x149658 - 0x149664
void entry_00149658_0x149658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149658_0x149658");
#endif

    ctx->pc = 0x149658u;

    // 0x149658: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x149658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14965c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x14965cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x149660: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x149660u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x149664u;
}
