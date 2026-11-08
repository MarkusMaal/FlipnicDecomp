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

// Function: entry_0013e7ec
// Address: 0x13e7ec - 0x13e82c
void entry_0013e7ec_0x13e7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e7ec_0x13e7ec");
#endif

    ctx->pc = 0x13e7ecu;

label_13e7ec:
    // 0x13e7ec: 0x9222018b  lbu         $v0, 0x18B($s1)
    ctx->pc = 0x13e7ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 395)));
label_13e7f0:
    // 0x13e7f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_13e7f4:
    if (ctx->pc == 0x13E7F4u) {
        ctx->pc = 0x13E7F8u;
        goto label_13e7f8;
    }
    ctx->pc = 0x13E7F0u;
    {
        const bool branch_taken_0x13e7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e7f0) {
            ctx->pc = 0x13E82Cu;
            return;
        }
    }
    ctx->pc = 0x13E7F8u;
label_13e7f8:
    // 0x13e7f8: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x13e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_13e7fc:
    // 0x13e7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e800:
    // 0x13e800: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e804:
    // 0x13e804: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13e808:
    // 0x13e808: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13e808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e80c:
    // 0x13e80c: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x13e80cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_13e810:
    // 0x13e810: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x13e810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e814:
    // 0x13e814: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13e814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_13e818:
    // 0x13e818: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x13e818u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_13e81c:
    // 0x13e81c: 0x0  nop
    ctx->pc = 0x13e81cu;
    // NOP
label_13e820:
    // 0x13e820: 0x0  nop
    ctx->pc = 0x13e820u;
    // NOP
label_13e824:
    // 0x13e824: 0x320f809  jalr        $t9
label_13e828:
    if (ctx->pc == 0x13E828u) {
        ctx->pc = 0x13E82Cu;
        goto label_fallthrough_0x13e824;
    }
    ctx->pc = 0x13E824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E82Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E824u, 0x13E82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13e824:
    ctx->pc = 0x13E82Cu;
}
