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

// Function: entry_00151f60
// Address: 0x151f60 - 0x151fe4
void entry_00151f60_0x151f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151f60_0x151f60");
#endif

    ctx->pc = 0x151f60u;

    // 0x151f60: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x151f60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x151f64: 0x1643001f  bne         $s2, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x151F64u;
    {
        const bool branch_taken_0x151f64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x151f64) {
            ctx->pc = 0x151FE4u;
            return;
        }
    }
    ctx->pc = 0x151F6Cu;
    // 0x151f6c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x151f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x151f70: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x151f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x151f74: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x151f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x151f78: 0x86890004  lh          $t1, 0x4($s4)
    ctx->pc = 0x151f78u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x151f7c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x151f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151f80: 0x868a0006  lh          $t2, 0x6($s4)
    ctx->pc = 0x151f80u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x151f84: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x151f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x151f88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x151f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151f8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x151f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151f90: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x151f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x151f94: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x151f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
    // 0x151f98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151f9c: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x151f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151fa0: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x151fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x151fa4: 0x85050002  lh          $a1, 0x2($t0)
    ctx->pc = 0x151fa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x151fa8: 0x1241823  subu        $v1, $t1, $a0
    ctx->pc = 0x151fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x151fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151fb0: 0xa1070043  sb          $a3, 0x43($t0)
    ctx->pc = 0x151fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 67), (uint8_t)GPR_U32(ctx, 7));
    // 0x151fb4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x151fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x151fb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151fbc: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x151fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x151fc0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x151fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x151fc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x151fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x151fc8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x151fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x151fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151fd0: 0x0  nop
    ctx->pc = 0x151fd0u;
    // NOP
    // 0x151fd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151fd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x151fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x151fdc: 0xc05fc4c  jal         func_17F130
    ctx->pc = 0x151FDCu;
    SET_GPR_U32(ctx, 31, 0x151FE4u);
    ctx->pc = 0x151FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FDCu;
    // 0x151fe0: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F130u, 0x151FDCu, 0x151FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FE4u;
}
