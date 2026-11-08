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

// Function: FUN_00132d30
// Address: 0x132d30 - 0x1333e8
void FUN_00132d30_0x132d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132d30_0x132d30");
#endif

    switch (ctx->pc) {
        case 0x132d90u: goto label_132d90;
        case 0x132dd8u: goto label_132dd8;
        case 0x132ddcu: goto label_132ddc;
        case 0x132f30u: goto label_132f30;
        case 0x132f38u: goto label_132f38;
        case 0x132f74u: goto label_132f74;
        case 0x132ffcu: goto label_132ffc;
        case 0x1333b8u: goto label_1333b8;
        default: break;
    }

    ctx->pc = 0x132d30u;

    // 0x132d30: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x132d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x132d34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x132d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x132d38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x132d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x132d3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x132d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x132d40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x132d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x132d44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x132d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x132d48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x132d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x132d4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x132d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x132d50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x132d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x132d54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x132d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x132d5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x132d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d60: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x132d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x132d64: 0x10600194  beqz        $v1, . + 4 + (0x194 << 2)
    ctx->pc = 0x132D64u;
    {
        const bool branch_taken_0x132d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D64u;
        // 0x132d68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d64) {
            ctx->pc = 0x1333B8u;
            goto label_1333b8;
        }
    }
    ctx->pc = 0x132D6Cu;
    // 0x132d6c: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x132d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x132d70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x132D70u;
    {
        const bool branch_taken_0x132d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x132d70) {
            ctx->pc = 0x132D80u;
            goto label_132d80;
        }
    }
    ctx->pc = 0x132D78u;
    // 0x132d78: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x132D78u;
    {
        const bool branch_taken_0x132d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D78u;
        // 0x132d7c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d78) {
            ctx->pc = 0x1333BCu;
            goto label_1333bc;
        }
    }
    ctx->pc = 0x132D80u;
label_132d80:
    // 0x132d80: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x132d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x132d84: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x132d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x132d88: 0xc061bcc  jal         func_186F30
    ctx->pc = 0x132D88u;
    SET_GPR_U32(ctx, 31, 0x132D90u);
    ctx->pc = 0x132D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D88u;
    // 0x132d8c: 0x248462b0  addiu       $a0, $a0, 0x62B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F30u, 0x132D88u, 0x132D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D90u;
label_132d90:
    // 0x132d90: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x132d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x132d94: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x132d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x132d98: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x132d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x132d9c: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x132d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x132da0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x132da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x132da4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x132da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x132da8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x132da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x132dac: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x132dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x132db0: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x132db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x132db4: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x132db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x132db8: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x132db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x132dbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x132dbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132dc0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x132dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x132dc4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x132dc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132dc8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x132dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x132dcc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x132DCCu;
    {
        const bool branch_taken_0x132dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DCCu;
        // 0x132dd0: 0xafa60130  sw          $a2, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132dcc) {
            ctx->pc = 0x132E80u;
            goto label_132e80;
        }
    }
    ctx->pc = 0x132DD4u;
    // 0x132dd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x132dd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132dd8:
    // 0x132dd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x132dd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132ddc:
    // 0x132ddc: 0x0  nop
    ctx->pc = 0x132ddcu;
    // NOP
    // 0x132de0: 0x8f878528  lw          $a3, -0x7AD8($gp)
    ctx->pc = 0x132de0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935848)));
    // 0x132de4: 0x15d3021  addu        $a2, $t2, $sp
    ctx->pc = 0x132de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x132de8: 0x24cc0130  addiu       $t4, $a2, 0x130
    ctx->pc = 0x132de8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 304));
    // 0x132dec: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x132decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132df0: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x132df0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x132df4: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x132df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x132df8: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x132df8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x132dfc: 0x1673021  addu        $a2, $t3, $a3
    ctx->pc = 0x132dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x132e00: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x132e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x132e04: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x132e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132e08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x132e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132e0c: 0x0  nop
    ctx->pc = 0x132e0cu;
    // NOP
    // 0x132e10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x132E10u;
    {
        const bool branch_taken_0x132e10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x132e10) {
            ctx->pc = 0x132E20u;
            goto label_132e20;
        }
    }
    ctx->pc = 0x132E18u;
    // 0x132e18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x132E18u;
    {
        const bool branch_taken_0x132e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E18u;
        // 0x132e1c: 0xeb3021  addu        $a2, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e18) {
            ctx->pc = 0x132E28u;
            goto label_132e28;
        }
    }
    ctx->pc = 0x132E20u;
label_132e20:
    // 0x132e20: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x132e20u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x132e24: 0xeb3021  addu        $a2, $a3, $t3
    ctx->pc = 0x132e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_132e28:
    // 0x132e28: 0xca3821  addu        $a3, $a2, $t2
    ctx->pc = 0x132e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x132e2c: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x132e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x132e30: 0x15d3021  addu        $a2, $t2, $sp
    ctx->pc = 0x132e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x132e34: 0x24cc0120  addiu       $t4, $a2, 0x120
    ctx->pc = 0x132e34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x132e38: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x132e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e3c: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x132e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132e40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x132e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132e44: 0x0  nop
    ctx->pc = 0x132e44u;
    // NOP
    // 0x132e48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x132E48u;
    {
        const bool branch_taken_0x132e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x132e48) {
            ctx->pc = 0x132E58u;
            goto label_132e58;
        }
    }
    ctx->pc = 0x132E50u;
    // 0x132e50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x132E50u;
    {
        const bool branch_taken_0x132e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e50) {
            ctx->pc = 0x132E5Cu;
            goto label_132e5c;
        }
    }
    ctx->pc = 0x132E58u;
label_132e58:
    // 0x132e58: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x132e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_132e5c:
    // 0x132e5c: 0x0  nop
    ctx->pc = 0x132e5cu;
    // NOP
    // 0x132e60: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x132e60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x132e64: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x132e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e68: 0x29260003  slti        $a2, $t1, 0x3
    ctx->pc = 0x132e68u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x132e6c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x132e6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x132e70: 0x14c0ffda  bnez        $a2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x132E70u;
    {
        const bool branch_taken_0x132e70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x132E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E70u;
        // 0x132e74: 0xe5800000  swc1        $f0, 0x0($t4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e70) {
            ctx->pc = 0x132DDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132ddc;
        }
    }
    ctx->pc = 0x132E78u;
    // 0x132e78: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x132e78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x132e7c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x132e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_132e80:
    // 0x132e80: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x132e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x132e84: 0x106302b  sltu        $a2, $t0, $a2
    ctx->pc = 0x132e84u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x132e88: 0x14c0ffd3  bnez        $a2, . + 4 + (-0x2D << 2)
    ctx->pc = 0x132E88u;
    {
        const bool branch_taken_0x132e88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x132E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E88u;
        // 0x132e8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e88) {
            ctx->pc = 0x132DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132dd8;
        }
    }
    ctx->pc = 0x132E90u;
    // 0x132e90: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x132e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132e94: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x132e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x132e98: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x132e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e9c: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x132e9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x132ea0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x132ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132ea4: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x132ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x132ea8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x132ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132eac: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x132eacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x132eb0: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x132eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x132eb4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x132eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x132eb8: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x132eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
    // 0x132ebc: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x132ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x132ec0: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x132ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x132ec4: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x132ec4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x132ec8: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x132ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x132ecc: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x132eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x132ed0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x132ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x132ed4: 0xafa600cc  sw          $a2, 0xCC($sp)
    ctx->pc = 0x132ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 6));
    // 0x132ed8: 0xe7a400c8  swc1        $f4, 0xC8($sp)
    ctx->pc = 0x132ed8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x132edc: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x132edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x132ee0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x132ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x132ee4: 0xe7a400d8  swc1        $f4, 0xD8($sp)
    ctx->pc = 0x132ee4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x132ee8: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x132ee8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x132eec: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x132eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132ef0: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x132ef0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x132ef4: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x132ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
    // 0x132ef8: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x132ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x132efc: 0xafa600fc  sw          $a2, 0xFC($sp)
    ctx->pc = 0x132efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
    // 0x132f00: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x132f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x132f04: 0xafa6010c  sw          $a2, 0x10C($sp)
    ctx->pc = 0x132f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 6));
    // 0x132f08: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x132f08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x132f0c: 0xafa6011c  sw          $a2, 0x11C($sp)
    ctx->pc = 0x132f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 6));
    // 0x132f10: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x132f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x132f14: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x132f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x132f18: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x132f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x132f1c: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x132f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x132f20: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x132f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x132f24: 0xe7a40108  swc1        $f4, 0x108($sp)
    ctx->pc = 0x132f24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x132f28: 0xc061bf0  jal         func_186FC0
    ctx->pc = 0x132F28u;
    SET_GPR_U32(ctx, 31, 0x132F30u);
    ctx->pc = 0x132F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F28u;
    // 0x132f2c: 0xe7a40118  swc1        $f4, 0x118($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x132F28u, 0x132F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F30u;
label_132f30:
    // 0x132f30: 0xc061b50  jal         func_186D40
    ctx->pc = 0x132F30u;
    SET_GPR_U32(ctx, 31, 0x132F38u);
    ctx->pc = 0x132F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F30u;
    // 0x132f34: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x132F30u, 0x132F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F38u;
label_132f38:
    // 0x132f38: 0x1040011f  beqz        $v0, . + 4 + (0x11F << 2)
    ctx->pc = 0x132F38u;
    {
        const bool branch_taken_0x132f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132f38) {
            ctx->pc = 0x1333B8u;
            goto label_1333b8;
        }
    }
    ctx->pc = 0x132F40u;
    // 0x132f40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x132f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132f44: 0x1043011c  beq         $v0, $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x132F44u;
    {
        const bool branch_taken_0x132f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x132f44) {
            ctx->pc = 0x1333B8u;
            goto label_1333b8;
        }
    }
    ctx->pc = 0x132F4Cu;
    // 0x132f4c: 0x8382852c  lb          $v0, -0x7AD4($gp)
    ctx->pc = 0x132f4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935852)));
    // 0x132f50: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x132F50u;
    {
        const bool branch_taken_0x132f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F50u;
        // 0x132f54: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132f50) {
            ctx->pc = 0x132F80u;
            goto label_132f80;
        }
    }
    ctx->pc = 0x132F58u;
    // 0x132f58: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x132f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x132f5c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x132f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x132f60: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x132f60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x132f64: 0x24846300  addiu       $a0, $a0, 0x6300
    ctx->pc = 0x132f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25344));
    // 0x132f68: 0x24a533f0  addiu       $a1, $a1, 0x33F0
    ctx->pc = 0x132f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13296));
    // 0x132f6c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x132F6Cu;
    SET_GPR_U32(ctx, 31, 0x132F74u);
    ctx->pc = 0x132F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F6Cu;
    // 0x132f70: 0x24c662f0  addiu       $a2, $a2, 0x62F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x132F6Cu, 0x132F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F74u;
label_132f74:
    // 0x132f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132f78: 0xa382852c  sb          $v0, -0x7AD4($gp)
    ctx->pc = 0x132f78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935852), (uint8_t)GPR_U32(ctx, 2));
    // 0x132f7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x132f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_132f80:
    // 0x132f80: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132f84: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x132f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x132f88: 0x34038004  ori         $v1, $zero, 0x8004
    ctx->pc = 0x132f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x132f8c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x132f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x132f90: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x132f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x132f94: 0xfc226308  sd          $v0, 0x6308($at)
    ctx->pc = 0x132f94u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 25352), GPR_U64(ctx, 2));
    // 0x132f98: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132f9c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x132f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x132fa0: 0xfc236300  sd          $v1, 0x6300($at)
    ctx->pc = 0x132fa0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B6300u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6300u, _value); } while (0);
    // 0x132fa4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132fa8: 0xfc226328  sd          $v0, 0x6328($at)
    ctx->pc = 0x132fa8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6328u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6328u, _value); } while (0);
    // 0x132fac: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x132facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x132fb0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132fb4: 0xfc226318  sd          $v0, 0x6318($at)
    ctx->pc = 0x132fb4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6318u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6318u, _value); } while (0);
    // 0x132fb8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x132fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x132fbc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132fc0: 0xfc226338  sd          $v0, 0x6338($at)
    ctx->pc = 0x132fc0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6338u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6338u, _value); } while (0);
    // 0x132fc4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x132fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x132fc8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132fcc: 0xfc226348  sd          $v0, 0x6348($at)
    ctx->pc = 0x132fccu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6348u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6348u, _value); } while (0);
    // 0x132fd0: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x132fd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x132fd4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132fd8: 0xfc226310  sd          $v0, 0x6310($at)
    ctx->pc = 0x132fd8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6310u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6310u, _value); } while (0);
    // 0x132fdc: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x132fdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x132fe0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132fe4: 0xfc226320  sd          $v0, 0x6320($at)
    ctx->pc = 0x132fe4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6320u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6320u, _value); } while (0);
    // 0x132fe8: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x132fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x132fec: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x132FECu;
    {
        const bool branch_taken_0x132fec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x132fec) {
            ctx->pc = 0x13301Cu;
            goto label_13301c;
        }
    }
    ctx->pc = 0x132FF4u;
    // 0x132ff4: 0xc0485c0  jal         func_121700
    ctx->pc = 0x132FF4u;
    SET_GPR_U32(ctx, 31, 0x132FFCu);
    ctx->pc = 0x132FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132FF4u;
    // 0x132ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x132FF4u, 0x132FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FFCu;
label_132ffc:
    // 0x132ffc: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x132ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x133000: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x133000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133004: 0xdc420060  ld          $v0, 0x60($v0)
    ctx->pc = 0x133004u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x133008: 0xfc226330  sd          $v0, 0x6330($at)
    ctx->pc = 0x133008u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6330u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6330u, _value); } while (0);
    // 0x13300c: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x13300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x133010: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x133010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133014: 0xdc420068  ld          $v0, 0x68($v0)
    ctx->pc = 0x133014u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x133018: 0xfc226340  sd          $v0, 0x6340($at)
    ctx->pc = 0x133018u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6340u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6340u, _value); } while (0);
label_13301c:
    // 0x13301c: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x13301cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133020: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x133020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x133024: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x133024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x133028: 0x3c13002b  lui         $s3, 0x2B
    ctx->pc = 0x133028u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)43 << 16));
    // 0x13302c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x13302cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x133030: 0x34660005  ori         $a2, $v1, 0x5
    ctx->pc = 0x133030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x133034: 0x3c19002b  lui         $t9, 0x2B
    ctx->pc = 0x133034u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)43 << 16));
    // 0x133038: 0x3c0d002b  lui         $t5, 0x2B
    ctx->pc = 0x133038u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)43 << 16));
    // 0x13303c: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x13303cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x133040: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x133040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x133044: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x133044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133048: 0x24140030  addiu       $s4, $zero, 0x30
    ctx->pc = 0x133048u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13304c: 0xa1220003  sb          $v0, 0x3($t1)
    ctx->pc = 0x13304cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x133050: 0x267362b0  addiu       $s3, $s3, 0x62B0
    ctx->pc = 0x133050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 25264));
    // 0x133054: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x133054u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133058: 0x34830404  ori         $v1, $a0, 0x404
    ctx->pc = 0x133058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x13305c: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x13305cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x133060: 0x34850104  ori         $a1, $a0, 0x104
    ctx->pc = 0x133060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)260);
    // 0x133064: 0xa5280000  sh          $t0, 0x0($t1)
    ctx->pc = 0x133064u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x133068: 0x3c046c04  lui         $a0, 0x6C04
    ctx->pc = 0x133068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27652 << 16));
    // 0x13306c: 0xad270008  sw          $a3, 0x8($t1)
    ctx->pc = 0x13306cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 7));
    // 0x133070: 0x34928000  ori         $s2, $a0, 0x8000
    ctx->pc = 0x133070u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x133074: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x133074u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x133078: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x133078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x13307c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x13307cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133080: 0x3c1e1400  lui         $fp, 0x1400
    ctx->pc = 0x133080u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)5120 << 16));
    // 0x133084: 0x27396350  addiu       $t9, $t9, 0x6350
    ctx->pc = 0x133084u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 25424));
    // 0x133088: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x133088u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13308c: 0x348f8014  ori         $t7, $a0, 0x8014
    ctx->pc = 0x13308cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32788);
    // 0x133090: 0x348e801b  ori         $t6, $a0, 0x801B
    ctx->pc = 0x133090u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32795);
    // 0x133094: 0x25ad6360  addiu       $t5, $t5, 0x6360
    ctx->pc = 0x133094u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 25440));
    // 0x133098: 0x348c8017  ori         $t4, $a0, 0x8017
    ctx->pc = 0x133098u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32791);
    // 0x13309c: 0x3488801f  ori         $t0, $a0, 0x801F
    ctx->pc = 0x13309cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32799);
    // 0x1330a0: 0x262b0020  addiu       $t3, $s1, 0x20
    ctx->pc = 0x1330a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1330a4: 0x3c046c02  lui         $a0, 0x6C02
    ctx->pc = 0x1330a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27650 << 16));
    // 0x1330a8: 0x26290090  addiu       $t1, $s1, 0x90
    ctx->pc = 0x1330a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1330ac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1330acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1330b0: 0x348a8019  ori         $t2, $a0, 0x8019
    ctx->pc = 0x1330b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32793);
    // 0x1330b4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1330b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1330b8: 0x3c046c00  lui         $a0, 0x6C00
    ctx->pc = 0x1330b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27648 << 16));
    // 0x1330bc: 0x78366300  lq          $s6, 0x6300($at)
    ctx->pc = 0x1330bcu;
    SET_GPR_VEC(ctx, 22, FAST_READ128(0x2B6300u));
    // 0x1330c0: 0x34878020  ori         $a3, $a0, 0x8020
    ctx->pc = 0x1330c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32800);
    // 0x1330c4: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x1330c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1330c8: 0x34868022  ori         $a2, $a0, 0x8022
    ctx->pc = 0x1330c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32802);
    // 0x1330cc: 0x34978023  ori         $s7, $a0, 0x8023
    ctx->pc = 0x1330ccu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32803);
    // 0x1330d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1330d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330d4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1330d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1330d8: 0x7eb60000  sq          $s6, 0x0($s5)
    ctx->pc = 0x1330d8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 22));
    // 0x1330dc: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x1330dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1330e0: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1330e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1330e4: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x1330e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x1330e8: 0x78366310  lq          $s6, 0x6310($at)
    ctx->pc = 0x1330e8u;
    SET_GPR_VEC(ctx, 22, FAST_READ128(0x2B6310u));
    // 0x1330ec: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x1330ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1330f0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1330f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1330f4: 0x7eb60000  sq          $s6, 0x0($s5)
    ctx->pc = 0x1330f4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 22));
    // 0x1330f8: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x1330f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1330fc: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1330fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x133100: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x133100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x133104: 0x78366320  lq          $s6, 0x6320($at)
    ctx->pc = 0x133104u;
    SET_GPR_VEC(ctx, 22, FAST_READ128(0x2B6320u));
    // 0x133108: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x133108u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13310c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x13310cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133110: 0x7eb60000  sq          $s6, 0x0($s5)
    ctx->pc = 0x133110u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 22));
    // 0x133114: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x133114u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133118: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x133118u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x13311c: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x13311cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x133120: 0x78366330  lq          $s6, 0x6330($at)
    ctx->pc = 0x133120u;
    SET_GPR_VEC(ctx, 22, FAST_READ128(0x2B6330u));
    // 0x133124: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x133124u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133128: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x133128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x13312c: 0x7eb60000  sq          $s6, 0x0($s5)
    ctx->pc = 0x13312cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 22));
    // 0x133130: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x133130u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133134: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x133134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x133138: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x133138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x13313c: 0x78366340  lq          $s6, 0x6340($at)
    ctx->pc = 0x13313cu;
    SET_GPR_VEC(ctx, 22, FAST_READ128(0x2B6340u));
    // 0x133140: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x133140u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133144: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x133144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133148: 0x7eb60000  sq          $s6, 0x0($s5)
    ctx->pc = 0x133148u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 22));
    // 0x13314c: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x13314cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133150: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x133150u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x133154: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x133154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x133158: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x133158u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13315c: 0xa2b40003  sb          $s4, 0x3($s5)
    ctx->pc = 0x13315cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x133160: 0xa2a00002  sb          $zero, 0x2($s5)
    ctx->pc = 0x133160u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133164: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x133164u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
    // 0x133168: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x133168u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13316c: 0xa6b30000  sh          $s3, 0x0($s5)
    ctx->pc = 0x13316cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x133170: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x133170u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x133174: 0xaeb2000c  sw          $s2, 0xC($s5)
    ctx->pc = 0x133174u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 18));
    // 0x133178: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x133178u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13317c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x13317cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x133180: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x133180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x133184: 0x8f9384dc  lw          $s3, -0x7B24($gp)
    ctx->pc = 0x133184u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935772)));
    // 0x133188: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x133188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13318c: 0x27e9825  or          $s3, $s3, $fp
    ctx->pc = 0x13318cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 30));
    // 0x133190: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x133190u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x133194: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x133194u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133198: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x133198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x13319c: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x13319cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1331a0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1331a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1331a4: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x1331a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
    // 0x1331a8: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1331a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1331ac: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1331acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1331b0: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1331b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1331b4: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1331b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1331b8: 0xa2540003  sb          $s4, 0x3($s2)
    ctx->pc = 0x1331b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x1331bc: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x1331bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1331c0: 0xae590004  sw          $t9, 0x4($s2)
    ctx->pc = 0x1331c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 25));
    // 0x1331c4: 0xa6580000  sh          $t8, 0x0($s2)
    ctx->pc = 0x1331c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x1331c8: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1331c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1331cc: 0xae4f000c  sw          $t7, 0xC($s2)
    ctx->pc = 0x1331ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 15));
    // 0x1331d0: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1331d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1331d4: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x1331d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x1331d8: 0xae0f0000  sw          $t7, 0x0($s0)
    ctx->pc = 0x1331d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
    // 0x1331dc: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1331dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1331e0: 0xa1f40003  sb          $s4, 0x3($t7)
    ctx->pc = 0x1331e0u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x1331e4: 0xa1e00002  sb          $zero, 0x2($t7)
    ctx->pc = 0x1331e4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1331e8: 0xadf90004  sw          $t9, 0x4($t7)
    ctx->pc = 0x1331e8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 25));
    // 0x1331ec: 0xa5f80000  sh          $t8, 0x0($t7)
    ctx->pc = 0x1331ecu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x1331f0: 0xade30008  sw          $v1, 0x8($t7)
    ctx->pc = 0x1331f0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 3));
    // 0x1331f4: 0xadee000c  sw          $t6, 0xC($t7)
    ctx->pc = 0x1331f4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 14));
    // 0x1331f8: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1331f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1331fc: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x1331fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x133200: 0xae0e0000  sw          $t6, 0x0($s0)
    ctx->pc = 0x133200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
    // 0x133204: 0x8f92850c  lw          $s2, -0x7AF4($gp)
    ctx->pc = 0x133204u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935820)));
    // 0x133208: 0x8f8f84b8  lw          $t7, -0x7B48($gp)
    ctx->pc = 0x133208u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935736)));
    // 0x13320c: 0x8f8e84ec  lw          $t6, -0x7B14($gp)
    ctx->pc = 0x13320cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935788)));
    // 0x133210: 0xac326360  sw          $s2, 0x6360($at)
    ctx->pc = 0x133210u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x2B6360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B6360u, _value); } while (0);
    // 0x133214: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x133214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133218: 0xac2f6364  sw          $t7, 0x6364($at)
    ctx->pc = 0x133218u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x2B6364u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B6364u, _value); } while (0);
    // 0x13321c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x13321cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133220: 0xac2e6368  sw          $t6, 0x6368($at)
    ctx->pc = 0x133220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x2B6368u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B6368u, _value); } while (0);
    // 0x133224: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x133224u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133228: 0xa1d40003  sb          $s4, 0x3($t6)
    ctx->pc = 0x133228u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x13322c: 0xa1c00002  sb          $zero, 0x2($t6)
    ctx->pc = 0x13322cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133230: 0xadcd0004  sw          $t5, 0x4($t6)
    ctx->pc = 0x133230u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 13));
    // 0x133234: 0xa5d80000  sh          $t8, 0x0($t6)
    ctx->pc = 0x133234u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x133238: 0xadc30008  sw          $v1, 0x8($t6)
    ctx->pc = 0x133238u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 3));
    // 0x13323c: 0xadcc000c  sw          $t4, 0xC($t6)
    ctx->pc = 0x13323cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 12));
    // 0x133240: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x133240u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133244: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x133244u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x133248: 0xae0c0000  sw          $t4, 0x0($s0)
    ctx->pc = 0x133248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
    // 0x13324c: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x13324cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133250: 0xa1940003  sb          $s4, 0x3($t4)
    ctx->pc = 0x133250u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x133254: 0xa1800002  sb          $zero, 0x2($t4)
    ctx->pc = 0x133254u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133258: 0xad8b0004  sw          $t3, 0x4($t4)
    ctx->pc = 0x133258u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 11));
    // 0x13325c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x13325cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133260: 0xa58b0000  sh          $t3, 0x0($t4)
    ctx->pc = 0x133260u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x133264: 0xad830008  sw          $v1, 0x8($t4)
    ctx->pc = 0x133264u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 3));
    // 0x133268: 0xad8a000c  sw          $t2, 0xC($t4)
    ctx->pc = 0x133268u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 10));
    // 0x13326c: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x13326cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133270: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x133270u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x133274: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x133274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x133278: 0x8f8a84e0  lw          $t2, -0x7B20($gp)
    ctx->pc = 0x133278u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x13327c: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x13327cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133280: 0x15e5025  or          $t2, $t2, $fp
    ctx->pc = 0x133280u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 30));
    // 0x133284: 0xa1620003  sb          $v0, 0x3($t3)
    ctx->pc = 0x133284u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x133288: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x133288u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13328c: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x13328cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x133290: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x133290u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x133294: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x133294u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x133298: 0xad6a000c  sw          $t2, 0xC($t3)
    ctx->pc = 0x133298u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 10));
    // 0x13329c: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x13329cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1332a0: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x1332a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1332a4: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x1332a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x1332a8: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x1332a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1332ac: 0xa1540003  sb          $s4, 0x3($t2)
    ctx->pc = 0x1332acu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x1332b0: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x1332b0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1332b4: 0xad490004  sw          $t1, 0x4($t2)
    ctx->pc = 0x1332b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 9));
    // 0x1332b8: 0xa5580000  sh          $t8, 0x0($t2)
    ctx->pc = 0x1332b8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x1332bc: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x1332bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x1332c0: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x1332c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
    // 0x1332c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1332c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1332c8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1332c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1332cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1332ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1332d0: 0x8e2900a0  lw          $t1, 0xA0($s1)
    ctx->pc = 0x1332d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1332d4: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x1332d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1332d8: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x1332d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1332dc: 0x91c00  sll         $v1, $t1, 16
    ctx->pc = 0x1332dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1332e0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1332e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1332e4: 0xa1540003  sb          $s4, 0x3($t2)
    ctx->pc = 0x1332e4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x1332e8: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x1332e8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1332ec: 0xad480004  sw          $t0, 0x4($t2)
    ctx->pc = 0x1332ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 8));
    // 0x1332f0: 0xa5490000  sh          $t1, 0x0($t2)
    ctx->pc = 0x1332f0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1332f4: 0xad450008  sw          $a1, 0x8($t2)
    ctx->pc = 0x1332f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 5));
    // 0x1332f8: 0xad43000c  sw          $v1, 0xC($t2)
    ctx->pc = 0x1332f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
    // 0x1332fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1332fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133300: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x133300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x133304: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x133304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x133308: 0x8e2800a0  lw          $t0, 0xA0($s1)
    ctx->pc = 0x133308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x13330c: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x13330cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x133310: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x133310u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133314: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x133314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x133318: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x133318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x13331c: 0xa1340003  sb          $s4, 0x3($t1)
    ctx->pc = 0x13331cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x133320: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x133320u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133324: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x133324u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
    // 0x133328: 0xa5280000  sh          $t0, 0x0($t1)
    ctx->pc = 0x133328u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x13332c: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x13332cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
    // 0x133330: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x133330u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x133334: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x133334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133338: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x133338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13333c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x13333cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x133340: 0x8f868528  lw          $a2, -0x7AD8($gp)
    ctx->pc = 0x133340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935848)));
    // 0x133344: 0x8e2700a0  lw          $a3, 0xA0($s1)
    ctx->pc = 0x133344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x133348: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x133348u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13334c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x13334cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x133350: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x133350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x133354: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x133354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x133358: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x133358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x13335c: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x13335cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x133360: 0xa1140003  sb          $s4, 0x3($t0)
    ctx->pc = 0x133360u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x133364: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x133364u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133368: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x133368u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x13336c: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x13336cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x133370: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x133370u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x133374: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x133374u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x133378: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x133378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13337c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x133380: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x133380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x133384: 0x8f8384e4  lw          $v1, -0x7B1C($gp)
    ctx->pc = 0x133384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935780)));
    // 0x133388: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x133388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13338c: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x13338cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x133390: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x133390u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x133394: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x133394u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133398: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x133398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x13339c: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x13339cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1333a0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1333a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1333a4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1333a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1333a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1333a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1333ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1333acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1333b0: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1333B0u;
    SET_GPR_U32(ctx, 31, 0x1333B8u);
    ctx->pc = 0x1333B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1333B0u;
    // 0x1333b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1333B0u, 0x1333B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333B8u;
label_1333b8:
    // 0x1333b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1333b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1333bc:
    // 0x1333bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1333bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1333c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1333c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1333c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1333c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1333c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1333c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1333cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1333ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1333d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1333d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1333d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1333d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1333d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1333d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1333dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1333dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1333e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1333E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1333E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333E0u;
        // 0x1333e4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1333E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1333E8u;
}
