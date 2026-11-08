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

// Function: entry_00190d1c
// Address: 0x190d1c - 0x190d2c
void entry_00190d1c_0x190d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190d1c_0x190d1c");
#endif

    ctx->pc = 0x190d1cu;

    // 0x190d1c: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x190d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x190d20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x190d20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d24: 0x7c600350  sq          $zero, 0x350($v1)
    ctx->pc = 0x190d24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 848), GPR_VEC(ctx, 0));
    // 0x190d28: 0x246a0350  addiu       $t2, $v1, 0x350
    ctx->pc = 0x190d28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
    ctx->pc = 0x190d2cu;
}
