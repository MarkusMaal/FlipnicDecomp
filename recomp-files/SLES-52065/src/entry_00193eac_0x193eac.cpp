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

// Function: entry_00193eac
// Address: 0x193eac - 0x193ecc
void entry_00193eac_0x193eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193eac_0x193eac");
#endif

    ctx->pc = 0x193eacu;

    // 0x193eac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ebc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193ec0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193ec0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193ec4: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x193EC4u;
    SET_GPR_U32(ctx, 31, 0x193ECCu);
    ctx->pc = 0x193EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193EC4u;
    // 0x193ec8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x193EC4u, 0x193ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193ECCu;
}
