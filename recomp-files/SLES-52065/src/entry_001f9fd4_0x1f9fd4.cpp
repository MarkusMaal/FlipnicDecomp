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

// Function: entry_001f9fd4
// Address: 0x1f9fd4 - 0x1f9ffc
void entry_001f9fd4_0x1f9fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9fd4_0x1f9fd4");
#endif

    ctx->pc = 0x1f9fd4u;

    // 0x1f9fd4: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x1f9fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x1f9fd8: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1f9fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1f9fdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9fe0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1f9fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f9fe4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f9fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f9fe8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1f9fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1f9fec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f9fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9ff0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1f9ff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1f9ff4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F9FF4u;
    {
        const bool branch_taken_0x1f9ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FF4u;
        // 0x1f9ff8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ff4) {
            ctx->pc = 0x1FA020u;
            return;
        }
    }
    ctx->pc = 0x1F9FFCu;
}
