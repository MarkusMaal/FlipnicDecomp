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

// Function: entry_00195ff4
// Address: 0x195ff4 - 0x196028
void entry_00195ff4_0x195ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195ff4_0x195ff4");
#endif

    switch (ctx->pc) {
        case 0x196004u: goto label_196004;
        case 0x196020u: goto label_196020;
        default: break;
    }

    ctx->pc = 0x195ff4u;

    // 0x195ff4: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x195ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x195ff8: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x195ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x195ffc: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x195FFCu;
    SET_GPR_U32(ctx, 31, 0x196004u);
    ctx->pc = 0x196000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195FFCu;
    // 0x196000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x195FFCu, 0x196004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196004u;
label_196004:
    // 0x196004: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196008: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x196008u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19600c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x19600cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196010: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x196010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x196014: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x196014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x196018: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x196018u;
    SET_GPR_U32(ctx, 31, 0x196020u);
    ctx->pc = 0x19601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196018u;
    // 0x19601c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x196018u, 0x196020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196020u;
label_196020:
    // 0x196020: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x196020u;
    {
        const bool branch_taken_0x196020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196020) {
            ctx->pc = 0x196088u;
            return;
        }
    }
    ctx->pc = 0x196028u;
}
