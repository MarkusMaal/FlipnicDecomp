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

// Function: entry_0018f248
// Address: 0x18f248 - 0x18f254
void entry_0018f248_0x18f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f248_0x18f248");
#endif

    ctx->pc = 0x18f248u;

    // 0x18f248: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x18f248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x18f24c: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x18f24cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x18f250: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x18f250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x18f254u;
}
