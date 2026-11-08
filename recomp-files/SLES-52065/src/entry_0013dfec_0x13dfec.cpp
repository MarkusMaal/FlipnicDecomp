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

// Function: entry_0013dfec
// Address: 0x13dfec - 0x13e054
void entry_0013dfec_0x13dfec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dfec_0x13dfec");
#endif

    switch (ctx->pc) {
        case 0x13dffcu: goto label_13dffc;
        case 0x13e00cu: goto label_13e00c;
        default: break;
    }

    ctx->pc = 0x13dfecu;

    // 0x13dfec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13dfecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13dff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dff4: 0xc080874  jal         func_2021D0
    ctx->pc = 0x13DFF4u;
    SET_GPR_U32(ctx, 31, 0x13DFFCu);
    ctx->pc = 0x13DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DFF4u;
    // 0x13dff8: 0x24a5f030  addiu       $a1, $a1, -0xFD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13DFF4u, 0x13DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFFCu;
label_13dffc:
    // 0x13dffc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13DFFCu;
    {
        const bool branch_taken_0x13dffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dffc) {
            ctx->pc = 0x13E054u;
            return;
        }
    }
    ctx->pc = 0x13E004u;
    // 0x13e004: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x13E004u;
    SET_GPR_U32(ctx, 31, 0x13E00Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x13E004u, 0x13E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E00Cu;
label_13e00c:
    // 0x13e00c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e010: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x13e010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x13e014: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13e014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e018: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13e018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13e01c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x13e020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e024: 0x0  nop
    ctx->pc = 0x13e024u;
    // NOP
    // 0x13e028: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13e028u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13e02c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x13e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x13e030: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x13e030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x13e034: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13e034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13e038: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x13e038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13e03c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e040: 0x0  nop
    ctx->pc = 0x13e040u;
    // NOP
    // 0x13e044: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x13e044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13e048: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13e048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13e04c: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x13E04Cu;
    SET_GPR_U32(ctx, 31, 0x13E054u);
    ctx->pc = 0x13E050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E04Cu;
    // 0x13e050: 0x46020301  sub.s       $f12, $f0, $f2 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x13E04Cu, 0x13E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E054u;
}
