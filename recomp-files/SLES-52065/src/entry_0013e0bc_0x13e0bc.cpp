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

// Function: entry_0013e0bc
// Address: 0x13e0bc - 0x13e13c
void entry_0013e0bc_0x13e0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e0bc_0x13e0bc");
#endif

    switch (ctx->pc) {
        case 0x13e0ccu: goto label_13e0cc;
        case 0x13e0dcu: goto label_13e0dc;
        case 0x13e10cu: goto label_13e10c;
        case 0x13e128u: goto label_13e128;
        default: break;
    }

    ctx->pc = 0x13e0bcu;

    // 0x13e0bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13e0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13e0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e0c4: 0xc080874  jal         func_2021D0
    ctx->pc = 0x13E0C4u;
    SET_GPR_U32(ctx, 31, 0x13E0CCu);
    ctx->pc = 0x13E0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0C4u;
    // 0x13e0c8: 0x24a5f040  addiu       $a1, $a1, -0xFC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13E0C4u, 0x13E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0CCu;
label_13e0cc:
    // 0x13e0cc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13E0CCu;
    {
        const bool branch_taken_0x13e0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e0cc) {
            ctx->pc = 0x13E13Cu;
            return;
        }
    }
    ctx->pc = 0x13E0D4u;
    // 0x13e0d4: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x13E0D4u;
    SET_GPR_U32(ctx, 31, 0x13E0DCu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x13E0D4u, 0x13E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0DCu;
label_13e0dc:
    // 0x13e0dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e0e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13e0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13e0e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13e0e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13e0e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x13e0ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e0f0: 0x0  nop
    ctx->pc = 0x13e0f0u;
    // NOP
    // 0x13e0f4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13e0f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13e0f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x13e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x13e0fc: 0x0  nop
    ctx->pc = 0x13e0fcu;
    // NOP
    // 0x13e100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e104: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x13E104u;
    SET_GPR_U32(ctx, 31, 0x13E10Cu);
    ctx->pc = 0x13E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E104u;
    // 0x13e108: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x13E104u, 0x13E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E10Cu;
label_13e10c:
    // 0x13e10c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x13e10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x13e110: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x13e110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13e114: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13e114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e118: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x13e118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x13e11c: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x13e11cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x13e120: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x13E120u;
    SET_GPR_U32(ctx, 31, 0x13E128u);
    ctx->pc = 0x13E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E120u;
    // 0x13e124: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x13E120u, 0x13E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E128u;
label_13e128:
    // 0x13e128: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13e128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13e12c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13e12cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e130: 0x0  nop
    ctx->pc = 0x13e130u;
    // NOP
    // 0x13e134: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x13e134u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x13e138: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x13e138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    ctx->pc = 0x13e13cu;
}
