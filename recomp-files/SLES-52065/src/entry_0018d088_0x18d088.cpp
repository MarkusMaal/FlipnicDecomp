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

// Function: entry_0018d088
// Address: 0x18d088 - 0x18d0bc
void entry_0018d088_0x18d088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d088_0x18d088");
#endif

    switch (ctx->pc) {
        case 0x18d0b0u: goto label_18d0b0;
        default: break;
    }

    ctx->pc = 0x18d088u;

    // 0x18d088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d08c: 0x0  nop
    ctx->pc = 0x18d08cu;
    // NOP
    // 0x18d090: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x18d090u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d094: 0x0  nop
    ctx->pc = 0x18d094u;
    // NOP
    // 0x18d098: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18D098u;
    {
        const bool branch_taken_0x18d098 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d098) {
            ctx->pc = 0x18D0BCu;
            return;
        }
    }
    ctx->pc = 0x18D0A0u;
    // 0x18d0a0: 0x8e460454  lw          $a2, 0x454($s2)
    ctx->pc = 0x18d0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1108)));
    // 0x18d0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d0a8: 0xc053274  jal         func_14C9D0
    ctx->pc = 0x18D0A8u;
    SET_GPR_U32(ctx, 31, 0x18D0B0u);
    ctx->pc = 0x18D0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0A8u;
    // 0x18d0ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C9D0u, 0x18D0A8u, 0x18D0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0B0u;
label_18d0b0:
    // 0x18d0b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d0b4: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18D0B4u;
    SET_GPR_U32(ctx, 31, 0x18D0BCu);
    ctx->pc = 0x18D0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0B4u;
    // 0x18d0b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D0B4u, 0x18D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0BCu;
}
