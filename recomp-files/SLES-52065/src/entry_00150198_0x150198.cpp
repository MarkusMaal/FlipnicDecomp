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

// Function: entry_00150198
// Address: 0x150198 - 0x15020c
void entry_00150198_0x150198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150198_0x150198");
#endif

    switch (ctx->pc) {
        case 0x1501e0u: goto label_1501e0;
        case 0x1501f4u: goto label_1501f4;
        case 0x150204u: goto label_150204;
        default: break;
    }

    ctx->pc = 0x150198u;

    // 0x150198: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x150198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15019c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x15019cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1501a0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1501a0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1501a4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1501a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1501a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1501a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1501ac: 0x266500d0  addiu       $a1, $s3, 0xD0
    ctx->pc = 0x1501acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x1501b0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1501b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1501b4: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1501b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1501b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1501b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1501bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1501bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1501c0: 0x0  nop
    ctx->pc = 0x1501c0u;
    // NOP
    // 0x1501c4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1501c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1501c8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1501c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1501cc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1501ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1501d0: 0x0  nop
    ctx->pc = 0x1501d0u;
    // NOP
    // 0x1501d4: 0x0  nop
    ctx->pc = 0x1501d4u;
    // NOP
    // 0x1501d8: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1501D8u;
    SET_GPR_U32(ctx, 31, 0x1501E0u);
    ctx->pc = 0x1501DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501D8u;
    // 0x1501dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1501D8u, 0x1501E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501E0u;
label_1501e0:
    // 0x1501e0: 0x4614a302  mul.s       $f12, $f20, $f20
    ctx->pc = 0x1501e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1501e4: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x1501e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1501e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1501e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501ec: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1501ECu;
    SET_GPR_U32(ctx, 31, 0x1501F4u);
    ctx->pc = 0x1501F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501ECu;
    // 0x1501f0: 0x266500e0  addiu       $a1, $s3, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1501ECu, 0x1501F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501F4u;
label_1501f4:
    // 0x1501f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1501f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1501f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1501fc: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1501FCu;
    SET_GPR_U32(ctx, 31, 0x150204u);
    ctx->pc = 0x150200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501FCu;
    // 0x150200: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1501FCu, 0x150204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150204u;
label_150204:
    // 0x150204: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x150204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150208: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x150208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15020cu;
}
