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

// Function: entry_001a1540
// Address: 0x1a1540 - 0x1a1544
void entry_001a1540_0x1a1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1540_0x1a1540");
#endif

    ctx->pc = 0x1a1540u;

    // 0x1a1540: 0x928308b8  lbu         $v1, 0x8B8($s4)
    ctx->pc = 0x1a1540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2232)));
    ctx->pc = 0x1a1544u;
}
