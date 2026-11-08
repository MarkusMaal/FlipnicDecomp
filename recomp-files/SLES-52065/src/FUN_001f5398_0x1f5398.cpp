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

// Function: FUN_001f5398
// Address: 0x1f5398 - 0x1f549c
void FUN_001f5398_0x1f5398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5398_0x1f5398");
#endif

    switch (ctx->pc) {
        case 0x1f5420u: goto label_1f5420;
        case 0x1f5448u: goto label_1f5448;
        case 0x1f5470u: goto label_1f5470;
        default: break;
    }

    ctx->pc = 0x1f5398u;

    // 0x1f5398: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f5398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f539c: 0x46008807  neg.s       $f0, $f17
    ctx->pc = 0x1f539cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[17]);
    // 0x1f53a0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1f53a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f53a4: 0x46009507  neg.s       $f20, $f18
    ctx->pc = 0x1f53a4u;
    ctx->f[20] = FPU_NEG_S(ctx->f[18]);
    // 0x1f53a8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1f53a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f53ac: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1f53acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1f53b0: 0x46120000  add.s       $f0, $f0, $f18
    ctx->pc = 0x1f53b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[18]);
    // 0x1f53b4: 0x46130d42  mul.s       $f21, $f1, $f19
    ctx->pc = 0x1f53b4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
    // 0x1f53b8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f53b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f53bc: 0x4613a502  mul.s       $f20, $f20, $f19
    ctx->pc = 0x1f53bcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[19]);
    // 0x1f53c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f53c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53c4: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x1f53c4u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x1f53c8: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x1f53c8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f53cc: 0x46009cc7  neg.s       $f19, $f19
    ctx->pc = 0x1f53ccu;
    ctx->f[19] = FPU_NEG_S(ctx->f[19]);
    // 0x1f53d0: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x1f53d0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1f53d4: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1f53d4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f53d8: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x1f53d8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f53dc: 0x4611a500  add.s       $f20, $f20, $f17
    ctx->pc = 0x1f53dcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[17]);
    // 0x1f53e0: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x1f53e0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f53e4: 0x46019cc0  add.s       $f19, $f19, $f1
    ctx->pc = 0x1f53e4u;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[1]);
    // 0x1f53e8: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x1f53e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f53ec: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1f53ecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1f53f0: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x1f53f0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x1f53f4: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x1f53f4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x1f53f8: 0x46007e86  mov.s       $f26, $f15
    ctx->pc = 0x1f53f8u;
    ctx->f[26] = FPU_MOV_S(ctx->f[15]);
    // 0x1f53fc: 0x0  nop
    ctx->pc = 0x1f53fcu;
    // NOP
    // 0x1f5400: 0x0  nop
    ctx->pc = 0x1f5400u;
    // NOP
    // 0x1f5404: 0x4613ad43  div.s       $f21, $f21, $f19
    ctx->pc = 0x1f5404u;
    { if (ctx->f[19] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[19]); }
    // 0x1f5408: 0x0  nop
    ctx->pc = 0x1f5408u;
    // NOP
    // 0x1f540c: 0x0  nop
    ctx->pc = 0x1f540cu;
    // NOP
    // 0x1f5410: 0x4613a503  div.s       $f20, $f20, $f19
    ctx->pc = 0x1f5410u;
    { if (ctx->f[19] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[19]); }
    // 0x1f5414: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f5414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f5418: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x1F5418u;
    SET_GPR_U32(ctx, 31, 0x1F5420u);
    ctx->pc = 0x1F541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5418u;
    // 0x1f541c: 0x46008646  mov.s       $f25, $f16 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x1F5418u, 0x1F5420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5420u;
label_1f5420:
    // 0x1f5420: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f5420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f5424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f5424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5428: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f542c: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x1f542cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1f5430: 0xe6160000  swc1        $f22, 0x0($s0)
    ctx->pc = 0x1f5430u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1f5434: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1f5434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1f5438: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1f5438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1f543c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1f543cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1f5440: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x1F5440u;
    SET_GPR_U32(ctx, 31, 0x1F5448u);
    ctx->pc = 0x1F5444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5440u;
    // 0x1f5444: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x1F5440u, 0x1F5448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5448u;
label_1f5448:
    // 0x1f5448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f544c: 0xe7b80000  swc1        $f24, 0x0($sp)
    ctx->pc = 0x1f544cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f5450: 0xe7b70014  swc1        $f23, 0x14($sp)
    ctx->pc = 0x1f5450u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1f5454: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f5454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5458: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1f5458u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f545c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f545cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5460: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x1f5460u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1f5464: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x1f5464u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1f5468: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x1F5468u;
    SET_GPR_U32(ctx, 31, 0x1F5470u);
    ctx->pc = 0x1F546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5468u;
    // 0x1f546c: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x1F5468u, 0x1F5470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5470u;
label_1f5470:
    // 0x1f5470: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f5470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5474: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f5474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5478: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x1f5478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f547c: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x1f547cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f5480: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x1f5480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f5484: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x1f5484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f5488: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x1f5488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f548c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1f548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f5490: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1f5490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f5494: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5494u;
        // 0x1f5498: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F549Cu;
}
