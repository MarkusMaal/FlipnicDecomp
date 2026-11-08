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

// Function: entry_00172ac0
// Address: 0x172ac0 - 0x172b38
void entry_00172ac0_0x172ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172ac0_0x172ac0");
#endif

    switch (ctx->pc) {
        case 0x172b1cu: goto label_172b1c;
        case 0x172b24u: goto label_172b24;
        default: break;
    }

    ctx->pc = 0x172ac0u;

label_172ac0:
    // 0x172ac0: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x172ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172ac4:
    // 0x172ac4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x172ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_172ac8:
    // 0x172ac8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x172ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_172acc:
    // 0x172acc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_172ad0:
    // 0x172ad0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x172ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_172ad4:
    // 0x172ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172ad8:
    // 0x172ad8: 0x0  nop
    ctx->pc = 0x172ad8u;
    // NOP
label_172adc:
    // 0x172adc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x172adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_172ae0:
    // 0x172ae0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x172ae0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_172ae4:
    // 0x172ae4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172ae4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_172ae8:
    // 0x172ae8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x172ae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_172aec:
    // 0x172aec: 0x0  nop
    ctx->pc = 0x172aecu;
    // NOP
label_172af0:
    // 0x172af0: 0xae226008  sw          $v0, 0x6008($s1)
    ctx->pc = 0x172af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
label_172af4:
    // 0x172af4: 0xc6216008  lwc1        $f1, 0x6008($s1)
    ctx->pc = 0x172af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172af8:
    // 0x172af8: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172afc:
    // 0x172afc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x172afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_172b00:
    // 0x172b00: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172b04:
    // 0x172b04: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x172b04u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_172b08:
    // 0x172b08: 0x0  nop
    ctx->pc = 0x172b08u;
    // NOP
label_172b0c:
    // 0x172b0c: 0x0  nop
    ctx->pc = 0x172b0cu;
    // NOP
label_172b10:
    // 0x172b10: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172b14:
    // 0x172b14: 0x320f809  jalr        $t9
label_172b18:
    if (ctx->pc == 0x172B18u) {
        ctx->pc = 0x172B1Cu;
        goto label_172b1c;
    }
    ctx->pc = 0x172B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172B1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172B14u, 0x172B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172B1Cu;
label_172b1c:
    // 0x172b1c: 0xc05cc98  jal         func_173260
label_172b20:
    if (ctx->pc == 0x172B20u) {
        ctx->pc = 0x172B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B1Cu;
        // 0x172b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B24u;
        goto label_172b24;
    }
    ctx->pc = 0x172B1Cu;
    SET_GPR_U32(ctx, 31, 0x172B24u);
    ctx->pc = 0x172B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B1Cu;
    // 0x172b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173260u, 0x172B1Cu, 0x172B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B24u;
label_172b24:
    // 0x172b24: 0x8e236008  lw          $v1, 0x6008($s1)
    ctx->pc = 0x172b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
label_172b28:
    // 0x172b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172b2c:
    // 0x172b2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x172b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_172b30:
    // 0x172b30: 0xae236008  sw          $v1, 0x6008($s1)
    ctx->pc = 0x172b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 3));
label_172b34:
    // 0x172b34: 0xa2226031  sb          $v0, 0x6031($s1)
    ctx->pc = 0x172b34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24625), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x172b38u;
}
