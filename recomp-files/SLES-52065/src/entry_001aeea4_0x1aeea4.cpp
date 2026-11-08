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

// Function: entry_001aeea4
// Address: 0x1aeea4 - 0x1aeea8
void entry_001aeea4_0x1aeea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aeea4_0x1aeea4");
#endif

    ctx->pc = 0x1aeea4u;

    // 0x1aeea4: 0x928306b9  lbu         $v1, 0x6B9($s4)
    ctx->pc = 0x1aeea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1721)));
    ctx->pc = 0x1aeea8u;
}
