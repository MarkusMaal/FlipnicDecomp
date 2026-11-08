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

// Function: entry_0018c4bc
// Address: 0x18c4bc - 0x18c528
void entry_0018c4bc_0x18c4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c4bc_0x18c4bc");
#endif

    switch (ctx->pc) {
        case 0x18c4c4u: goto label_18c4c4;
        case 0x18c4d0u: goto label_18c4d0;
        case 0x18c4e8u: goto label_18c4e8;
        case 0x18c4f4u: goto label_18c4f4;
        case 0x18c50cu: goto label_18c50c;
        default: break;
    }

    ctx->pc = 0x18c4bcu;

    // 0x18c4bc: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18C4BCu;
    SET_GPR_U32(ctx, 31, 0x18C4C4u);
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18C4BCu, 0x18C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4C4u;
label_18c4c4:
    // 0x18c4c4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x18c4c4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x18c4c8: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x18C4C8u;
    SET_GPR_U32(ctx, 31, 0x18C4D0u);
    ctx->pc = 0x18C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C4C8u;
    // 0x18c4cc: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x18C4C8u, 0x18C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4D0u;
label_18c4d0:
    // 0x18c4d0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x18c4d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x18c4d4: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x18c4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x18c4d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18c4d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18c4dc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x18c4dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x18c4e0: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x18C4E0u;
    SET_GPR_U32(ctx, 31, 0x18C4E8u);
    ctx->pc = 0x18C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C4E0u;
    // 0x18c4e4: 0xe6200550  swc1        $f0, 0x550($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1360), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x18C4E0u, 0x18C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4E8u;
label_18c4e8:
    // 0x18c4e8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x18c4e8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x18c4ec: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x18C4ECu;
    SET_GPR_U32(ctx, 31, 0x18C4F4u);
    ctx->pc = 0x18C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C4ECu;
    // 0x18c4f0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x18C4ECu, 0x18C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4F4u;
label_18c4f4:
    // 0x18c4f4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x18c4f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x18c4f8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x18c4f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x18c4fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18c4fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18c500: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x18c500u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x18c504: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18C504u;
    SET_GPR_U32(ctx, 31, 0x18C50Cu);
    ctx->pc = 0x18C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C504u;
    // 0x18c508: 0xe6200558  swc1        $f0, 0x558($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1368), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18C504u, 0x18C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C50Cu;
label_18c50c:
    // 0x18c50c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x18c50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x18c510: 0xe6200554  swc1        $f0, 0x554($s1)
    ctx->pc = 0x18c510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1364), bits); }
    // 0x18c514: 0x4615a003  div.s       $f0, $f20, $f21
    ctx->pc = 0x18c514u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[21]); }
    // 0x18c518: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18c51c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18c51cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18c520: 0xe635055c  swc1        $f21, 0x55C($s1)
    ctx->pc = 0x18c520u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1372), bits); }
    // 0x18c524: 0xae230540  sw          $v1, 0x540($s1)
    ctx->pc = 0x18c524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1344), GPR_U32(ctx, 3));
    ctx->pc = 0x18c528u;
}
