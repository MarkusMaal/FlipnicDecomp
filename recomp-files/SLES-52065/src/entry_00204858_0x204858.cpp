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

// Function: entry_00204858
// Address: 0x204858 - 0x204860
void entry_00204858_0x204858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204858_0x204858");
#endif

    ctx->pc = 0x204858u;

    // 0x204858: 0x26c25190  addiu       $v0, $s6, 0x5190
    ctx->pc = 0x204858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x20485c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x20485cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x204860u;
}
