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

// Function: entry_0017a640
// Address: 0x17a640 - 0x17a6d0
void entry_0017a640_0x17a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a640_0x17a640");
#endif

    switch (ctx->pc) {
        case 0x17a67cu: goto label_17a67c;
        default: break;
    }

    ctx->pc = 0x17a640u;

    // 0x17a640: 0x920301d3  lbu         $v1, 0x1D3($s0)
    ctx->pc = 0x17a640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 467)));
    // 0x17a644: 0x146000b8  bnez        $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x17A644u;
    {
        const bool branch_taken_0x17a644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a644) {
            ctx->pc = 0x17A928u;
            return;
        }
    }
    ctx->pc = 0x17A64Cu;
    // 0x17a64c: 0x8f83862c  lw          $v1, -0x79D4($gp)
    ctx->pc = 0x17a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936108)));
    // 0x17a650: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x17a650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x17a654: 0xac43602c  sw          $v1, 0x602C($v0)
    ctx->pc = 0x17a654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24620), GPR_U32(ctx, 3));
    // 0x17a658: 0x8f828620  lw          $v0, -0x79E0($gp)
    ctx->pc = 0x17a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936096)));
    // 0x17a65c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x17a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x17a660: 0x8f838630  lw          $v1, -0x79D0($gp)
    ctx->pc = 0x17a660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x17a664: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a668: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17a668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17a66c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x17a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x17a670: 0xac624028  sw          $v0, 0x4028($v1)
    ctx->pc = 0x17a670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16424), GPR_U32(ctx, 2));
    // 0x17a674: 0xc05ca6c  jal         func_1729B0
    ctx->pc = 0x17A674u;
    SET_GPR_U32(ctx, 31, 0x17A67Cu);
    ctx->pc = 0x17A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A674u;
    // 0x17a678: 0x8f848630  lw          $a0, -0x79D0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1729B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1729B0u, 0x17A674u, 0x17A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A67Cu;
label_17a67c:
    // 0x17a67c: 0xae020424  sw          $v0, 0x424($s0)
    ctx->pc = 0x17a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 2));
    // 0x17a680: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x17a680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17a684: 0x8f848630  lw          $a0, -0x79D0($gp)
    ctx->pc = 0x17a684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x17a688: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17a688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17a68c: 0xc6000400  lwc1        $f0, 0x400($s0)
    ctx->pc = 0x17a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a690: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x17a690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17a694: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17a694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17a698: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17a698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17a69c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17a69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6a0: 0xc4826018  lwc1        $f2, 0x6018($a0)
    ctx->pc = 0x17a6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17a6a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17a6a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17a6a8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x17a6a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x17a6ac: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x17a6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x17a6b0: 0xc6000404  lwc1        $f0, 0x404($s0)
    ctx->pc = 0x17a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a6b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17a6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17a6b8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x17a6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x17a6bc: 0xc6000408  lwc1        $f0, 0x408($s0)
    ctx->pc = 0x17a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a6c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17a6c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17a6c4: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x17a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x17a6c8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x17A6C8u;
    {
        const bool branch_taken_0x17a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6C8u;
        // 0x17a6cc: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6c8) {
            ctx->pc = 0x17A840u;
            return;
        }
    }
    ctx->pc = 0x17A6D0u;
}
