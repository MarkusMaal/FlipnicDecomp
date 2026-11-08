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

// Function: entry_00178948
// Address: 0x178948 - 0x178958
void entry_00178948_0x178948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178948_0x178948");
#endif

    ctx->pc = 0x178948u;

    // 0x178948: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x178948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17894c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x17894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x178950: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x178950u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178954: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x178954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x178958u;
}
