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

// Function: entry_001fdff8
// Address: 0x1fdff8 - 0x1fe014
void entry_001fdff8_0x1fdff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdff8_0x1fdff8");
#endif

    ctx->pc = 0x1fdff8u;

    // 0x1fdff8: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1fdff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fdffc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1fdffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fe000: 0x478823  subu        $s1, $v0, $a3
    ctx->pc = 0x1fe000u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fe004: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1fe004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1fe008: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fe008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fe00c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1fe00cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1fe010: 0x243902f  dsubu       $s2, $s2, $v1
    ctx->pc = 0x1fe010u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 3));
    ctx->pc = 0x1fe014u;
}
