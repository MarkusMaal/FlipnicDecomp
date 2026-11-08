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

// Function: entry_001eafac
// Address: 0x1eafac - 0x1eafcc
void entry_001eafac_0x1eafac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eafac_0x1eafac");
#endif

    ctx->pc = 0x1eafacu;

    // 0x1eafac: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x1eafacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1eafb0: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x1eafb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x1eafb4: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x1eafb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1eafb8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x1eafb8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x1eafbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1eafbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eafc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1eafc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1eafc4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1eafc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1eafc8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1eafc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->pc = 0x1eafccu;
}
