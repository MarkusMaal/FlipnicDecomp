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

// Function: entry_00190280
// Address: 0x190280 - 0x190298
void entry_00190280_0x190280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190280_0x190280");
#endif

    ctx->pc = 0x190280u;

    // 0x190280: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x190280u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x190284: 0x7c20d6e0  sq          $zero, -0x2920($at)
    ctx->pc = 0x190284u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294956768), GPR_VEC(ctx, 0));
    // 0x190288: 0x2508d6e0  addiu       $t0, $t0, -0x2920
    ctx->pc = 0x190288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956768));
    // 0x19028c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19028cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190290: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x190290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x190294: 0x24c6fde0  addiu       $a2, $a2, -0x220
    ctx->pc = 0x190294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966752));
    ctx->pc = 0x190298u;
}
