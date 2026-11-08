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

// Function: entry_00194780
// Address: 0x194780 - 0x194788
void entry_00194780_0x194780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194780_0x194780");
#endif

    ctx->pc = 0x194780u;

    // 0x194780: 0x8e830668  lw          $v1, 0x668($s4)
    ctx->pc = 0x194780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1640)));
    // 0x194784: 0xae830664  sw          $v1, 0x664($s4)
    ctx->pc = 0x194784u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1636), GPR_U32(ctx, 3));
    ctx->pc = 0x194788u;
}
