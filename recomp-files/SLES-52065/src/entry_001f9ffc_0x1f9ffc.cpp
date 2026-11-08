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

// Function: entry_001f9ffc
// Address: 0x1f9ffc - 0x1fa020
void entry_001f9ffc_0x1f9ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9ffc_0x1f9ffc");
#endif

    ctx->pc = 0x1f9ffcu;

    // 0x1f9ffc: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x1f9ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x1fa000: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1fa000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1fa004: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa008: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fa008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa00c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1fa00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1fa010: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1fa010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1fa014: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa018: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1fa018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1fa01c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fa01cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x1fa020u;
}
