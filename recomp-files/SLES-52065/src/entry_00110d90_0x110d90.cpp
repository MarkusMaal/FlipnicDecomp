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

// Function: entry_00110d90
// Address: 0x110d90 - 0x110dac
void entry_00110d90_0x110d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110d90_0x110d90");
#endif

    ctx->pc = 0x110d90u;

    // 0x110d90: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x110d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
    // 0x110d94: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x110d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x110d98: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x110d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x110d9c: 0xacc40224  sw          $a0, 0x224($a2)
    ctx->pc = 0x110d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
    // 0x110da0: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x110da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
    // 0x110da4: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x110da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x110da8: 0xacc40224  sw          $a0, 0x224($a2)
    ctx->pc = 0x110da8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
    ctx->pc = 0x110dacu;
}
