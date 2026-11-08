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

// Function: FUN_0014ada0
// Address: 0x14ada0 - 0x14afd8
void FUN_0014ada0_0x14ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014ada0_0x14ada0");
#endif

    switch (ctx->pc) {
        case 0x14ae5cu: goto label_14ae5c;
        default: break;
    }

    ctx->pc = 0x14ada0u;

    // 0x14ada0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x14ada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ada4: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14ada4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14ada8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x14ada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14adac: 0x27af0000  addiu       $t7, $sp, 0x0
    ctx->pc = 0x14adacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x14adb0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x14adb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14adb4: 0x27ae0020  addiu       $t6, $sp, 0x20
    ctx->pc = 0x14adb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14adb8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x14adb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14adbc: 0x27ad0040  addiu       $t5, $sp, 0x40
    ctx->pc = 0x14adbcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14adc0: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x14adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x14adc4: 0x27a90048  addiu       $t1, $sp, 0x48
    ctx->pc = 0x14adc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x14adc8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x14adc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14adcc: 0x27ac0008  addiu       $t4, $sp, 0x8
    ctx->pc = 0x14adccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x14add0: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x14add0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14add4: 0x27aa000c  addiu       $t2, $sp, 0xC
    ctx->pc = 0x14add4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x14add8: 0xe5e30000  swc1        $f3, 0x0($t7)
    ctx->pc = 0x14add8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x14addc: 0xe5e20004  swc1        $f2, 0x4($t7)
    ctx->pc = 0x14addcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x14ade0: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x14ade0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x14ade4: 0xe5e0000c  swc1        $f0, 0xC($t7)
    ctx->pc = 0x14ade4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x14ade8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x14ade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14adec: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x14adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14adf0: 0xe5e10010  swc1        $f1, 0x10($t7)
    ctx->pc = 0x14adf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 16), bits); }
    // 0x14adf4: 0xe5e00014  swc1        $f0, 0x14($t7)
    ctx->pc = 0x14adf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 20), bits); }
    // 0x14adf8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x14adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14adfc: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x14adfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ae00: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x14ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ae04: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x14ae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ae08: 0xe5c30000  swc1        $f3, 0x0($t6)
    ctx->pc = 0x14ae08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x14ae0c: 0xe5c20004  swc1        $f2, 0x4($t6)
    ctx->pc = 0x14ae0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x14ae10: 0xe5c10008  swc1        $f1, 0x8($t6)
    ctx->pc = 0x14ae10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x14ae14: 0xe5c0000c  swc1        $f0, 0xC($t6)
    ctx->pc = 0x14ae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
    // 0x14ae18: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x14ae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ae1c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x14ae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ae20: 0xe5c10010  swc1        $f1, 0x10($t6)
    ctx->pc = 0x14ae20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 16), bits); }
    // 0x14ae24: 0xe5c00014  swc1        $f0, 0x14($t6)
    ctx->pc = 0x14ae24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 20), bits); }
    // 0x14ae28: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x14ae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ae2c: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x14ae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ae30: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x14ae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ae34: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x14ae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ae38: 0xe5a30000  swc1        $f3, 0x0($t5)
    ctx->pc = 0x14ae38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x14ae3c: 0xe5a20004  swc1        $f2, 0x4($t5)
    ctx->pc = 0x14ae3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x14ae40: 0xe5a10008  swc1        $f1, 0x8($t5)
    ctx->pc = 0x14ae40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x14ae44: 0xe5a0000c  swc1        $f0, 0xC($t5)
    ctx->pc = 0x14ae44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
    // 0x14ae48: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x14ae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ae4c: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x14ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ae50: 0xe5a10010  swc1        $f1, 0x10($t5)
    ctx->pc = 0x14ae50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
    // 0x14ae54: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x14AE54u;
    {
        const bool branch_taken_0x14ae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE54u;
        // 0x14ae58: 0xe5a00014  swc1        $f0, 0x14($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae54) {
            ctx->pc = 0x14AF90u;
            goto label_14af90;
        }
    }
    ctx->pc = 0x14AE5Cu;
label_14ae5c:
    // 0x14ae5c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ae60: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AE60u;
    {
        const bool branch_taken_0x14ae60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ae60) {
            ctx->pc = 0x14AE70u;
            goto label_14ae70;
        }
    }
    ctx->pc = 0x14AE68u;
    // 0x14ae68: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x14ae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ae6c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14ae6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_14ae70:
    // 0x14ae70: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x14ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x14ae74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14ae78: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x14ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
    // 0x14ae7c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14ae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ae80: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x14ae80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x14ae84: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x14ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x14ae88: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x14ae88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14ae8c: 0x14a6001c  bne         $a1, $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x14AE8Cu;
    {
        const bool branch_taken_0x14ae8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x14ae8c) {
            ctx->pc = 0x14AF00u;
            goto label_14af00;
        }
    }
    ctx->pc = 0x14AE94u;
    // 0x14ae94: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x14ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14ae98: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14ae98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14ae9c: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x14ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14aea0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AEA0u;
    {
        const bool branch_taken_0x14aea0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x14AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AEA0u;
        // 0x14aea4: 0x56883  sra         $t5, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aea0) {
            ctx->pc = 0x14AEB0u;
            goto label_14aeb0;
        }
    }
    ctx->pc = 0x14AEA8u;
    // 0x14aea8: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x14aea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x14aeac: 0x56883  sra         $t5, $a1, 2
    ctx->pc = 0x14aeacu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 5), 2));
label_14aeb0:
    // 0x14aeb0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x14aeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x14aeb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14aeb8: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x14aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x14aebc: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x14aebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14aec0: 0x24a70004  addiu       $a3, $a1, 0x4
    ctx->pc = 0x14aec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x14aec4: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x14aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x14aec8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x14aec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14aecc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x14aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14aed0: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x14aed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x14aed4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14aed4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14aed8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14aed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14aedc: 0x14e50002  bne         $a3, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14AEDCu;
    {
        const bool branch_taken_0x14aedc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x14aedc) {
            ctx->pc = 0x14AEE8u;
            goto label_14aee8;
        }
    }
    ctx->pc = 0x14AEE4u;
    // 0x14aee4: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x14aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
label_14aee8:
    // 0x14aee8: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x14aee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14aeec: 0xd2880  sll         $a1, $t5, 2
    ctx->pc = 0x14aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x14aef0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x14aef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14aef4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14aef8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x14aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x14aefc: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x14aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_14af00:
    // 0x14af00: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x14af00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x14af04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14af04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14af08: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x14af08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x14af0c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x14af0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14af10: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x14af10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x14af14: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x14af14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x14af18: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x14af18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14af1c: 0x14a6001c  bne         $a1, $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x14AF1Cu;
    {
        const bool branch_taken_0x14af1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x14af1c) {
            ctx->pc = 0x14AF90u;
            goto label_14af90;
        }
    }
    ctx->pc = 0x14AF24u;
    // 0x14af24: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x14af24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x14af28: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14af28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14af2c: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x14af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14af30: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AF30u;
    {
        const bool branch_taken_0x14af30 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x14AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF30u;
        // 0x14af34: 0x56883  sra         $t5, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af30) {
            ctx->pc = 0x14AF40u;
            goto label_14af40;
        }
    }
    ctx->pc = 0x14AF38u;
    // 0x14af38: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x14af38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x14af3c: 0x56883  sra         $t5, $a1, 2
    ctx->pc = 0x14af3cu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 5), 2));
label_14af40:
    // 0x14af40: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x14af40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14af44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14af44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14af48: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x14af48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x14af4c: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x14af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x14af50: 0x24a70004  addiu       $a3, $a1, 0x4
    ctx->pc = 0x14af50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x14af54: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x14af54u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x14af58: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14af58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14af5c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x14af5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14af60: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x14af60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x14af64: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14af64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14af68: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14af68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14af6c: 0x14e50002  bne         $a3, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14AF6Cu;
    {
        const bool branch_taken_0x14af6c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x14af6c) {
            ctx->pc = 0x14AF78u;
            goto label_14af78;
        }
    }
    ctx->pc = 0x14AF74u;
    // 0x14af74: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x14af74u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
label_14af78:
    // 0x14af78: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x14af78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x14af7c: 0xd2880  sll         $a1, $t5, 2
    ctx->pc = 0x14af7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x14af80: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x14af80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14af84: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14af84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14af88: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x14af88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x14af8c: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x14af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
label_14af90:
    // 0x14af90: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x14af90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14af94: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x14af94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14af98: 0x14c5ffb0  bne         $a2, $a1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x14AF98u;
    {
        const bool branch_taken_0x14af98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x14af98) {
            ctx->pc = 0x14AE5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ae5c;
        }
    }
    ctx->pc = 0x14AFA0u;
    // 0x14afa0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x14afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14afa4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x14afa8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x14afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x14afac: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x14afacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x14afb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14afb4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x14afb8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x14afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x14afbc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x14afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x14afc0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x14afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14afc4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x14afc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x14afc8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x14afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x14afcc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x14afccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x14afd0: 0x3e00008  jr          $ra
    ctx->pc = 0x14AFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFD0u;
        // 0x14afd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AFD8u;
}
