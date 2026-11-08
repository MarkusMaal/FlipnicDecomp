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

// Function: entry_0016e8e4
// Address: 0x16e8e4 - 0x16e91c
void entry_0016e8e4_0x16e8e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e8e4_0x16e8e4");
#endif

    switch (ctx->pc) {
        case 0x16e8fcu: goto label_16e8fc;
        default: break;
    }

    ctx->pc = 0x16e8e4u;

label_16e8e4:
    // 0x16e8e4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e8e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e8e8:
    // 0x16e8e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e8ec:
    // 0x16e8ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e8f0:
    // 0x16e8f0: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x16e8f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_16e8f4:
    // 0x16e8f4: 0x320f809  jalr        $t9
label_16e8f8:
    if (ctx->pc == 0x16E8F8u) {
        ctx->pc = 0x16E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8F4u;
        // 0x16e8f8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E8FCu;
        goto label_16e8fc;
    }
    ctx->pc = 0x16E8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E8FCu);
        ctx->pc = 0x16E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8F4u;
        // 0x16e8f8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E8F4u, 0x16E8FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E8FCu;
label_16e8fc:
    // 0x16e8fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16e8fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16e900:
    // 0x16e900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e904:
    // 0x16e904: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16e904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16e908:
    // 0x16e908: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x16e908u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_16e90c:
    // 0x16e90c: 0x0  nop
    ctx->pc = 0x16e90cu;
    // NOP
label_16e910:
    // 0x16e910: 0x0  nop
    ctx->pc = 0x16e910u;
    // NOP
label_16e914:
    // 0x16e914: 0xc04c72c  jal         func_131CB0
label_16e918:
    if (ctx->pc == 0x16E918u) {
        ctx->pc = 0x16E91Cu;
        goto label_fallthrough_0x16e914;
    }
    ctx->pc = 0x16E914u;
    SET_GPR_U32(ctx, 31, 0x16E91Cu);
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x16E914u, 0x16E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x16e914:
    ctx->pc = 0x16E91Cu;
}
