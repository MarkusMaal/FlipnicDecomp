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

// Function: entry_0019d418
// Address: 0x19d418 - 0x19d424
void entry_0019d418_0x19d418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d418_0x19d418");
#endif

    ctx->pc = 0x19d418u;

    // 0x19d418: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19d418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19d41c: 0xaea30324  sw          $v1, 0x324($s5)
    ctx->pc = 0x19d41cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 3));
    // 0x19d420: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19d420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19d424u;
}
