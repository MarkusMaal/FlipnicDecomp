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

// Function: entry_0017f150
// Address: 0x17f150 - 0x17f184
void entry_0017f150_0x17f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f150_0x17f150");
#endif

    ctx->pc = 0x17f150u;

    // 0x17f150: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17f154: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17f154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17f158: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17f158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17f15c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17f15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17f160: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17f160u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f164: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17f164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17f168: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17f168u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f16c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17f170: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17f170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f174: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f178: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17f178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f17c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f180: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17f180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17f184u;
}
