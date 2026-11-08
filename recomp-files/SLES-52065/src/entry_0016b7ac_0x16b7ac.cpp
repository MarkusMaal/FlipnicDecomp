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

// Function: entry_0016b7ac
// Address: 0x16b7ac - 0x16b7b4
void entry_0016b7ac_0x16b7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b7ac_0x16b7ac");
#endif

    ctx->pc = 0x16b7acu;

    // 0x16b7ac: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x16b7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16b7b0: 0xae220290  sw          $v0, 0x290($s1)
    ctx->pc = 0x16b7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 2));
    ctx->pc = 0x16b7b4u;
}
