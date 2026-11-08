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

// Function: entry_00176a68
// Address: 0x176a68 - 0x176ab4
void entry_00176a68_0x176a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176a68_0x176a68");
#endif

    ctx->pc = 0x176a68u;

    // 0x176a68: 0x8e630c20  lw          $v1, 0xC20($s3)
    ctx->pc = 0x176a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
    // 0x176a6c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x176a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x176a70: 0x1440fe8e  bnez        $v0, . + 4 + (-0x172 << 2)
    ctx->pc = 0x176A70u;
    {
        const bool branch_taken_0x176a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A70u;
        // 0x176a74: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a70) {
            ctx->pc = 0x1764ACu;
            return;
        }
    }
    ctx->pc = 0x176A78u;
    // 0x176a78: 0x1603000e  bne         $s0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x176A78u;
    {
        const bool branch_taken_0x176a78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x176a78) {
            ctx->pc = 0x176AB4u;
            return;
        }
    }
    ctx->pc = 0x176A80u;
    // 0x176a80: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x176a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x176a84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176a88: 0xae630c28  sw          $v1, 0xC28($s3)
    ctx->pc = 0x176a88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3112), GPR_U32(ctx, 3));
    // 0x176a8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x176a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176a90: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x176a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176a98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x176a98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x176a9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x176a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x176aa0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x176aa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x176aa4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x176aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x176aa8: 0x0  nop
    ctx->pc = 0x176aa8u;
    // NOP
    // 0x176aac: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x176aacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x176ab0: 0xa2620c24  sb          $v0, 0xC24($s3)
    ctx->pc = 0x176ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3108), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x176ab4u;
}
