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

// Function: entry_0016efec
// Address: 0x16efec - 0x16eff4
void entry_0016efec_0x16efec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016efec_0x16efec");
#endif

    ctx->pc = 0x16efecu;

    // 0x16efec: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x16efecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x16eff0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x16eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x16eff4u;
}
