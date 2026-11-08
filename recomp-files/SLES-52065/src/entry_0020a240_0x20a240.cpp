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

// Function: entry_0020a240
// Address: 0x20a240 - 0x20a284
void entry_0020a240_0x20a240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a240_0x20a240");
#endif

    ctx->pc = 0x20a240u;

    // 0x20a240: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x20a240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x20a244: 0x31b38  dsll        $v1, $v1, 12
    ctx->pc = 0x20a244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x20a248: 0x1012  mflo        $v0
    ctx->pc = 0x20a248u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20a24c: 0x2a23018  mult        $a2, $s5, $v0
    ctx->pc = 0x20a24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x20a250: 0x70502018  mult1       $a0, $v0, $s0
    ctx->pc = 0x20a250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20a254: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20a258: 0xc5282d  daddu       $a1, $a2, $a1
    ctx->pc = 0x20a258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x20a25c: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x20a25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x20a260: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x20a260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x20a264: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20a264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x20a268: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x20a268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x20a26c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20a26cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20a270: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x20a270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x20a274: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x20a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x20a278: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20a278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20a27c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x20A27Cu;
    {
        const bool branch_taken_0x20a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A27Cu;
        // 0x20a280: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a27c) {
            ctx->pc = 0x20A308u;
            return;
        }
    }
    ctx->pc = 0x20A284u;
}
