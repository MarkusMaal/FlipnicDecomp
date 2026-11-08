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

// Function: entry_002024e0
// Address: 0x2024e0 - 0x2024fc
void entry_002024e0_0x2024e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002024e0_0x2024e0");
#endif

    ctx->pc = 0x2024e0u;

    // 0x2024e0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2024e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024e4: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2024e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2024e8: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x2024e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2024ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2024ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024f0: 0x2cc3000a  sltiu       $v1, $a2, 0xA
    ctx->pc = 0x2024f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2024f4: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2024F4u;
    {
        const bool branch_taken_0x2024f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2024f4) {
            ctx->pc = 0x202420u;
            return;
        }
    }
    ctx->pc = 0x2024FCu;
}
