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

// Function: entry_001eca80
// Address: 0x1eca80 - 0x1eca88
void entry_001eca80_0x1eca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eca80_0x1eca80");
#endif

    ctx->pc = 0x1eca80u;

    // 0x1eca80: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1eca80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1eca84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eca84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1eca88u;
}
