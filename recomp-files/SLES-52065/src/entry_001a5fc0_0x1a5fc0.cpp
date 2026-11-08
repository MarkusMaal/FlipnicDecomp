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

// Function: entry_001a5fc0
// Address: 0x1a5fc0 - 0x1a5fec
void entry_001a5fc0_0x1a5fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5fc0_0x1a5fc0");
#endif

    ctx->pc = 0x1a5fc0u;

    // 0x1a5fc0: 0x8e8200ec  lw          $v0, 0xEC($s4)
    ctx->pc = 0x1a5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x1a5fc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a5fc8: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5FC8u;
    {
        const bool branch_taken_0x1a5fc8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FC8u;
        // 0x1a5fcc: 0xae8200ec  sw          $v0, 0xEC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fc8) {
            ctx->pc = 0x1A5FECu;
            return;
        }
    }
    ctx->pc = 0x1A5FD0u;
    // 0x1a5fd0: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x1a5fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
    // 0x1a5fd4: 0x8e8200f0  lw          $v0, 0xF0($s4)
    ctx->pc = 0x1a5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x1a5fd8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1a5fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a5fdc: 0xae8200ec  sw          $v0, 0xEC($s4)
    ctx->pc = 0x1a5fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 2));
    // 0x1a5fe0: 0x8e8200e8  lw          $v0, 0xE8($s4)
    ctx->pc = 0x1a5fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
    // 0x1a5fe4: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x1a5fe4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x1a5fe8: 0xae8400e4  sw          $a0, 0xE4($s4)
    ctx->pc = 0x1a5fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 228), GPR_U32(ctx, 4));
    ctx->pc = 0x1a5fecu;
}
