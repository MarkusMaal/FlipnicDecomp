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

// Function: entry_0016eb8c
// Address: 0x16eb8c - 0x16ebc4
void entry_0016eb8c_0x16eb8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016eb8c_0x16eb8c");
#endif

    switch (ctx->pc) {
        case 0x16eba4u: goto label_16eba4;
        default: break;
    }

    ctx->pc = 0x16eb8cu;

label_16eb8c:
    // 0x16eb8c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x16eb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16eb90:
    // 0x16eb90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16eb90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16eb94:
    // 0x16eb94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16eb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16eb98:
    // 0x16eb98: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x16eb98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_16eb9c:
    // 0x16eb9c: 0x320f809  jalr        $t9
label_16eba0:
    if (ctx->pc == 0x16EBA0u) {
        ctx->pc = 0x16EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB9Cu;
        // 0x16eba0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EBA4u;
        goto label_16eba4;
    }
    ctx->pc = 0x16EB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EBA4u);
        ctx->pc = 0x16EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB9Cu;
        // 0x16eba0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EB9Cu, 0x16EBA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EBA4u;
label_16eba4:
    // 0x16eba4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16eba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16eba8:
    // 0x16eba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16eba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16ebac:
    // 0x16ebac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16ebacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16ebb0:
    // 0x16ebb0: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x16ebb0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_16ebb4:
    // 0x16ebb4: 0x0  nop
    ctx->pc = 0x16ebb4u;
    // NOP
label_16ebb8:
    // 0x16ebb8: 0x0  nop
    ctx->pc = 0x16ebb8u;
    // NOP
label_16ebbc:
    // 0x16ebbc: 0xc04c72c  jal         func_131CB0
label_16ebc0:
    if (ctx->pc == 0x16EBC0u) {
        ctx->pc = 0x16EBC4u;
        goto label_fallthrough_0x16ebbc;
    }
    ctx->pc = 0x16EBBCu;
    SET_GPR_U32(ctx, 31, 0x16EBC4u);
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x16EBBCu, 0x16EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x16ebbc:
    ctx->pc = 0x16EBC4u;
}
