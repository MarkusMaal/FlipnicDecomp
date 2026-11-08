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

// Function: entry_0011c4b4
// Address: 0x11c4b4 - 0x11c4dc
void entry_0011c4b4_0x11c4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c4b4_0x11c4b4");
#endif

    ctx->pc = 0x11c4b4u;

    // 0x11c4b4: 0x0  nop
    ctx->pc = 0x11c4b4u;
    // NOP
    // 0x11c4b8: 0x4113c  dsll32      $v0, $a0, 4
    ctx->pc = 0x11c4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x11c4bc: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x11c4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x11c4c0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c4c4: 0xac22b010  sw          $v0, -0x4FF0($at)
    ctx->pc = 0x11c4c4u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 2));
    // 0x11c4c8: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x11c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x11c4cc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c4d0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x11c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x11c4d4: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x11c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 2));
    // 0x11c4d8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x11c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x11c4dcu;
}
