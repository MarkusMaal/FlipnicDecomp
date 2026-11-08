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

// Function: entry_00208750
// Address: 0x208750 - 0x208770
void entry_00208750_0x208750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208750_0x208750");
#endif

    ctx->pc = 0x208750u;

    // 0x208750: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x208750u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208754: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x208754u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x208758: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x208758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x20875c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x20875cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208760: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x208760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x208764: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x208764u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x208768: 0x21823  negu        $v1, $v0
    ctx->pc = 0x208768u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x20876c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20876cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    ctx->pc = 0x208770u;
}
