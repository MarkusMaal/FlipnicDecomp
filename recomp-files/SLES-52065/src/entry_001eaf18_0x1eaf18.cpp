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

// Function: entry_001eaf18
// Address: 0x1eaf18 - 0x1eaf20
void entry_001eaf18_0x1eaf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eaf18_0x1eaf18");
#endif

    ctx->pc = 0x1eaf18u;

    // 0x1eaf18: 0xae200234  sw          $zero, 0x234($s1)
    ctx->pc = 0x1eaf18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
    // 0x1eaf1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eaf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1eaf20u;
}
