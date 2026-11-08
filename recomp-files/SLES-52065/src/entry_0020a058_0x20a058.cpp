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

// Function: entry_0020a058
// Address: 0x20a058 - 0x20a060
void entry_0020a058_0x20a058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a058_0x20a058");
#endif

    ctx->pc = 0x20a058u;

    // 0x20a058: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x20a058u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x20a05c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x20a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x20a060u;
}
