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

// Function: entry_0011d3d0
// Address: 0x11d3d0 - 0x11d3e8
void entry_0011d3d0_0x11d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d3d0_0x11d3d0");
#endif

    ctx->pc = 0x11d3d0u;

    // 0x11d3d0: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x11d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x11d3d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d3d8: 0x8eb10530  lw          $s1, 0x530($s5)
    ctx->pc = 0x11d3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1328)));
    // 0x11d3dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d3dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d3e0: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x11d3e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x11d3e4: 0x64902d  daddu       $s2, $v1, $a0
    ctx->pc = 0x11d3e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    ctx->pc = 0x11d3e8u;
}
