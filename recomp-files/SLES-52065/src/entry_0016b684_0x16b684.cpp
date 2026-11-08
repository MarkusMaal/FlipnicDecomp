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

// Function: entry_0016b684
// Address: 0x16b684 - 0x16b68c
void entry_0016b684_0x16b684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b684_0x16b684");
#endif

    ctx->pc = 0x16b684u;

    // 0x16b684: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x16b684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16b688: 0xae220298  sw          $v0, 0x298($s1)
    ctx->pc = 0x16b688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 2));
    ctx->pc = 0x16b68cu;
}
