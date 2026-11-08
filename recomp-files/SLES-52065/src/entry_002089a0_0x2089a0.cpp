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

// Function: entry_002089a0
// Address: 0x2089a0 - 0x2089ec
void entry_002089a0_0x2089a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002089a0_0x2089a0");
#endif

    ctx->pc = 0x2089a0u;

    // 0x2089a0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x2089a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x2089a4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2089a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2089a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2089a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2089ac: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2089acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2089b0: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x2089b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x2089b4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2089b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2089b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2089b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2089bc: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x2089bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2089c0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2089c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2089c4: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x2089c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x2089c8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2089c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2089cc: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x2089ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2089d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2089d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2089d4: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x2089d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x2089d8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2089d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2089dc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2089dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2089e0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2089e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2089e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2089E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2089E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2089ECu;
}
