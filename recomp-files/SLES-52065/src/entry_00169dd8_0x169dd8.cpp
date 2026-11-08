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

// Function: entry_00169dd8
// Address: 0x169dd8 - 0x169dfc
void entry_00169dd8_0x169dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169dd8_0x169dd8");
#endif

    switch (ctx->pc) {
        case 0x169df8u: goto label_169df8;
        default: break;
    }

    ctx->pc = 0x169dd8u;

    // 0x169dd8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x169dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x169ddc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x169ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x169de0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x169de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x169de4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x169de4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169de8: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x169de8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x169dec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x169decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169df0: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x169DF0u;
    SET_GPR_U32(ctx, 31, 0x169DF8u);
    ctx->pc = 0x169DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169DF0u;
    // 0x169df4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x169DF0u, 0x169DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169DF8u;
label_169df8:
    // 0x169df8: 0xae020228  sw          $v0, 0x228($s0)
    ctx->pc = 0x169df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 2));
    ctx->pc = 0x169dfcu;
}
