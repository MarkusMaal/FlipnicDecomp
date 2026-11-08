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

// Function: entry_001ab74c
// Address: 0x1ab74c - 0x1ab750
void entry_001ab74c_0x1ab74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab74c_0x1ab74c");
#endif

    ctx->pc = 0x1ab74cu;

    // 0x1ab74c: 0x928306d9  lbu         $v1, 0x6D9($s4)
    ctx->pc = 0x1ab74cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1753)));
    ctx->pc = 0x1ab750u;
}
