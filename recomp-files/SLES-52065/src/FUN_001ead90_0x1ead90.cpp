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

// Function: FUN_001ead90
// Address: 0x1ead90 - 0x1eae10
void FUN_001ead90_0x1ead90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ead90_0x1ead90");
#endif

    switch (ctx->pc) {
        case 0x1eae0cu: goto label_1eae0c;
        default: break;
    }

    ctx->pc = 0x1ead90u;

    // 0x1ead90: 0x73a01628  paddub      $v0, $sp, $zero
    ctx->pc = 0x1ead90u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 29), GPR_VEC(ctx, 0)));
    // 0x1ead94: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x1ead94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x1ead98: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1ead98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1ead9c: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1ead9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x1eada0: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x1eada0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x1eada4: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x1eada4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x1eada8: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x1eada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x1eadac: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x1eadacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x1eadb0: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x1eadb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
    // 0x1eadb4: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x1eadb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
    // 0x1eadb8: 0x7fbe0200  sq          $fp, 0x200($sp)
    ctx->pc = 0x1eadb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 30));
    // 0x1eadbc: 0xe7b40288  swc1        $f20, 0x288($sp)
    ctx->pc = 0x1eadbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x1eadc0: 0xe7b5028c  swc1        $f21, 0x28C($sp)
    ctx->pc = 0x1eadc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
    // 0x1eadc4: 0xe7b60290  swc1        $f22, 0x290($sp)
    ctx->pc = 0x1eadc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x1eadc8: 0xe7b70294  swc1        $f23, 0x294($sp)
    ctx->pc = 0x1eadc8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
    // 0x1eadcc: 0xe7b80298  swc1        $f24, 0x298($sp)
    ctx->pc = 0x1eadccu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x1eadd0: 0xe7b9029c  swc1        $f25, 0x29C($sp)
    ctx->pc = 0x1eadd0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 668), bits); }
    // 0x1eadd4: 0xe7ba02a0  swc1        $f26, 0x2A0($sp)
    ctx->pc = 0x1eadd4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x1eadd8: 0xe7bb02a4  swc1        $f27, 0x2A4($sp)
    ctx->pc = 0x1eadd8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
    // 0x1eaddc: 0xe7bc02a8  swc1        $f28, 0x2A8($sp)
    ctx->pc = 0x1eaddcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x1eade0: 0xe7bd02ac  swc1        $f29, 0x2AC($sp)
    ctx->pc = 0x1eade0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
    // 0x1eade4: 0xe7be02b0  swc1        $f30, 0x2B0($sp)
    ctx->pc = 0x1eade4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x1eade8: 0xe7bf02b4  swc1        $f31, 0x2B4($sp)
    ctx->pc = 0x1eade8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
    // 0x1eadec: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1eadecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1eadf0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1eadf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1eadf4: 0xafbf0010  sw          $ra, 0x10($sp)
    ctx->pc = 0x1eadf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 31));
    // 0x1eadf8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1eadf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1eadfc: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1eadfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1eae00: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1eae00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1eae04: 0xc07a5d4  jal         func_1E9750
    ctx->pc = 0x1EAE04u;
    SET_GPR_U32(ctx, 31, 0x1EAE0Cu);
    ctx->pc = 0x1EAE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE04u;
    // 0x1eae08: 0x73a02628  paddub      $a0, $sp, $zero (Delay Slot)
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 29), GPR_VEC(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9750u, 0x1EAE04u, 0x1EAE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE0Cu;
label_1eae0c:
    // 0x1eae0c: 0x0  nop
    ctx->pc = 0x1eae0cu;
    // NOP
    ctx->pc = 0x1eae10u;
}
