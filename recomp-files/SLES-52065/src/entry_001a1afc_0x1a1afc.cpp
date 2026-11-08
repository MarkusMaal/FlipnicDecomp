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

// Function: entry_001a1afc
// Address: 0x1a1afc - 0x1a1b00
void entry_001a1afc_0x1a1afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1afc_0x1a1afc");
#endif

    ctx->pc = 0x1a1afcu;

    // 0x1a1afc: 0xdc852818  ld          $a1, 0x2818($a0)
    ctx->pc = 0x1a1afcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
    ctx->pc = 0x1a1b00u;
}
