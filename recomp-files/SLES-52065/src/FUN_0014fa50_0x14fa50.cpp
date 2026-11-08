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

// Function: FUN_0014fa50
// Address: 0x14fa50 - 0x14fb4c
void FUN_0014fa50_0x14fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014fa50_0x14fa50");
#endif

    ctx->pc = 0x14fa50u;

    // 0x14fa50: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x14fa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fa54: 0x3c034480  lui         $v1, 0x4480
    ctx->pc = 0x14fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17536 << 16));
    // 0x14fa58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14fa58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fa5c: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x14fa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x14fa60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14fa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14fa64: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x14fa64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14fa68: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x14fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x14fa6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14fa6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fa70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14fa70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14fa74: 0x34ca0404  ori         $t2, $a2, 0x404
    ctx->pc = 0x14fa74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
    // 0x14fa78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14fa78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14fa7c: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x14fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x14fa80: 0x34668018  ori         $a2, $v1, 0x8018
    ctx->pc = 0x14fa80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32792);
    // 0x14fa84: 0x34638218  ori         $v1, $v1, 0x8218
    ctx->pc = 0x14fa84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33304);
    // 0x14fa88: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x14fa88u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x14fa8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14fa8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14fa90: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x14fa90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x14fa94: 0x0  nop
    ctx->pc = 0x14fa94u;
    // NOP
    // 0x14fa98: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x14fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x14fa9c: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x14fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14faa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14faa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14faa4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14faa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14faa8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x14faa8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x14faac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14faacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14fab0: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x14fab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x14fab4: 0x0  nop
    ctx->pc = 0x14fab4u;
    // NOP
    // 0x14fab8: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x14fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x14fabc: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x14fabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x14fac0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x14fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x14fac4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fac8: 0xa0880003  sb          $t0, 0x3($a0)
    ctx->pc = 0x14fac8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x14facc: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x14faccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14fad0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x14fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x14fad4: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x14fad4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x14fad8: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x14fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x14fadc: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x14fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x14fae0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fae4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x14fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x14fae8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x14fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x14faec: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x14faecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14faf0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14faf4: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x14faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x14faf8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14faf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fafc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x14fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x14fb00: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x14fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x14fb04: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fb08: 0xa0880003  sb          $t0, 0x3($a0)
    ctx->pc = 0x14fb08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x14fb0c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x14fb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14fb10: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x14fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x14fb14: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x14fb14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x14fb18: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x14fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x14fb1c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x14fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x14fb20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fb24: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x14fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x14fb28: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x14fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14fb2c: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x14fb2cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fb30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fb34: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x14fb34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x14fb38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fb3c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x14fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x14fb40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x14fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14fb44: 0x3e00008  jr          $ra
    ctx->pc = 0x14FB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB44u;
        // 0x14fb48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FB4Cu;
}
