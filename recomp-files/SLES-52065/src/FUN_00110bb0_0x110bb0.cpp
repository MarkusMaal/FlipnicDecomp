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

// Function: FUN_00110bb0
// Address: 0x110bb0 - 0x111028
void FUN_00110bb0_0x110bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00110bb0_0x110bb0");
#endif

    switch (ctx->pc) {
        case 0x110c10u: goto label_110c10;
        case 0x110c24u: goto label_110c24;
        case 0x110cd0u: goto label_110cd0;
        case 0x110d08u: goto label_110d08;
        case 0x110d1cu: goto label_110d1c;
        case 0x110d28u: goto label_110d28;
        case 0x110d40u: goto label_110d40;
        case 0x110de4u: goto label_110de4;
        case 0x110e0cu: goto label_110e0c;
        case 0x110e4cu: goto label_110e4c;
        case 0x110ea0u: goto label_110ea0;
        case 0x110ebcu: goto label_110ebc;
        case 0x110ec4u: goto label_110ec4;
        case 0x110efcu: goto label_110efc;
        case 0x110f2cu: goto label_110f2c;
        case 0x110f64u: goto label_110f64;
        case 0x110f7cu: goto label_110f7c;
        case 0x110fe8u: goto label_110fe8;
        case 0x110ff0u: goto label_110ff0;
        case 0x110ff4u: goto label_110ff4;
        case 0x110ff8u: goto label_110ff8;
        default: break;
    }

    ctx->pc = 0x110bb0u;

    // 0x110bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x110bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x110bb4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x110bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x110bb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x110bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x110bbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x110bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x110bc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x110bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x110bc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x110bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x110bc8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x110bc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x110bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x110bd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x110bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x110bd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x110bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bd8: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x110bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x110bdc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x110bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x110be0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x110be0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x110be4: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x110be4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x110be8: 0x0  nop
    ctx->pc = 0x110be8u;
    // NOP
    // 0x110bec: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x110BECu;
    {
        const bool branch_taken_0x110bec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x110BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BECu;
        // 0x110bf0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bec) {
            ctx->pc = 0x110BF8u;
            goto label_110bf8;
        }
    }
    ctx->pc = 0x110BF4u;
    // 0x110bf4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x110bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_110bf8:
    // 0x110bf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c08: 0xc043ea4  jal         func_10FA90
    ctx->pc = 0x110C08u;
    SET_GPR_U32(ctx, 31, 0x110C10u);
    ctx->pc = 0x110C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C08u;
    // 0x110c0c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA90u, 0x110C08u, 0x110C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C10u;
label_110c10:
    // 0x110c10: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x110c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c18: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x110c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110c1c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x110C1Cu;
    {
        const bool branch_taken_0x110c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C1Cu;
        // 0x110c20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c1c) {
            ctx->pc = 0x110C64u;
            goto label_110c64;
        }
    }
    ctx->pc = 0x110C24u;
label_110c24:
    // 0x110c24: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x110c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110c28: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x110c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x110c2c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x110c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110c30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110c34: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x110c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x110c38: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x110c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110c3c: 0x90440224  lbu         $a0, 0x224($v0)
    ctx->pc = 0x110c3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x110c40: 0x416bc  dsll32      $v0, $a0, 26
    ctx->pc = 0x110c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 26));
    // 0x110c44: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110c48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110C48u;
    {
        const bool branch_taken_0x110c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C48u;
        // 0x110c4c: 0x30820007  andi        $v0, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c48) {
            ctx->pc = 0x110C5Cu;
            goto label_110c5c;
        }
    }
    ctx->pc = 0x110C50u;
    // 0x110c50: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x110c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x110c54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x110C54u;
    {
        const bool branch_taken_0x110c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C54u;
        // 0x110c58: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c54) {
            ctx->pc = 0x110C74u;
            goto label_110c74;
        }
    }
    ctx->pc = 0x110C5Cu;
label_110c5c:
    // 0x110c5c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x110c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x110c60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x110c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_110c64:
    // 0x110c64: 0x0  nop
    ctx->pc = 0x110c64u;
    // NOP
    // 0x110c68: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x110c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x110c6c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x110C6Cu;
    {
        const bool branch_taken_0x110c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C6Cu;
        // 0x110c70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c6c) {
            ctx->pc = 0x110C24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110c24;
        }
    }
    ctx->pc = 0x110C74u;
label_110c74:
    // 0x110c74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x110C74u;
    {
        const bool branch_taken_0x110c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110c74) {
            ctx->pc = 0x110C98u;
            goto label_110c98;
        }
    }
    ctx->pc = 0x110C7Cu;
    // 0x110c7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110c80: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x110c80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x110c84: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x110C84u;
    {
        const bool branch_taken_0x110c84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x110c84) {
            ctx->pc = 0x110C98u;
            goto label_110c98;
        }
    }
    ctx->pc = 0x110C8Cu;
    // 0x110c8c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x110c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x110c90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x110c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110c94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x110c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_110c98:
    // 0x110c98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x110c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110c9c: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x110c9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x110ca0: 0x102000da  beqz        $at, . + 4 + (0xDA << 2)
    ctx->pc = 0x110CA0u;
    {
        const bool branch_taken_0x110ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CA0u;
        // 0x110ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ca0) {
            ctx->pc = 0x11100Cu;
            goto label_11100c;
        }
    }
    ctx->pc = 0x110CA8u;
    // 0x110ca8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x110ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x110cac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x110cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x110cb0: 0x2463e400  addiu       $v1, $v1, -0x1C00
    ctx->pc = 0x110cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960128));
    // 0x110cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110cb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x110cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110cbc: 0x400008  jr          $v0
    ctx->pc = 0x110CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110CC4u: goto label_110cc4;
            case 0x110DD8u: goto label_110dd8;
            case 0x110E30u: goto label_110e30;
            case 0x110FA8u: goto label_110fa8;
            case 0x111008u: goto label_111008;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110CBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x110CC4u;
label_110cc4:
    // 0x110cc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x110cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cc8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x110CC8u;
    {
        const bool branch_taken_0x110cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CC8u;
        // 0x110ccc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110cc8) {
            ctx->pc = 0x110D28u;
            goto label_110d28;
        }
    }
    ctx->pc = 0x110CD0u;
label_110cd0:
    // 0x110cd0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x110cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110cd4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110cd8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x110cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x110cdc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110cdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110ce0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110ce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110ce8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x110ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110cec: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x110cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x110cf0: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x110cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x110cf4: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110cf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110CF8u;
    {
        const bool branch_taken_0x110cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CF8u;
        // 0x110cfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110cf8) {
            ctx->pc = 0x110D10u;
            goto label_110d10;
        }
    }
    ctx->pc = 0x110D00u;
    // 0x110d00: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x110D00u;
    SET_GPR_U32(ctx, 31, 0x110D08u);
    ctx->pc = 0x110D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D00u;
    // 0x110d04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x110D00u, 0x110D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D08u;
label_110d08:
    // 0x110d08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x110D08u;
    {
        const bool branch_taken_0x110d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110d08) {
            ctx->pc = 0x110D1Cu;
            goto label_110d1c;
        }
    }
    ctx->pc = 0x110D10u;
label_110d10:
    // 0x110d10: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x110d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110d14: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x110D14u;
    SET_GPR_U32(ctx, 31, 0x110D1Cu);
    ctx->pc = 0x110D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D14u;
    // 0x110d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x110D14u, 0x110D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D1Cu;
label_110d1c:
    // 0x110d1c: 0x0  nop
    ctx->pc = 0x110d1cu;
    // NOP
    // 0x110d20: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x110d20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x110d24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x110d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_110d28:
    // 0x110d28: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x110d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110d2c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x110d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110d30: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x110D30u;
    {
        const bool branch_taken_0x110d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D30u;
        // 0x110d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d30) {
            ctx->pc = 0x110CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110cd0;
        }
    }
    ctx->pc = 0x110D38u;
    // 0x110d38: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x110D38u;
    {
        const bool branch_taken_0x110d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D38u;
        // 0x110d3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d38) {
            ctx->pc = 0x110DB8u;
            goto label_110db8;
        }
    }
    ctx->pc = 0x110D40u;
label_110d40:
    // 0x110d40: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x110d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110d44: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x110d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110d48: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x110d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x110d4c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x110d4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x110d50: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x110d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x110d54: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x110d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x110d58: 0x8c862cd8  lw          $a2, 0x2CD8($a0)
    ctx->pc = 0x110d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x110d5c: 0x90c50224  lbu         $a1, 0x224($a2)
    ctx->pc = 0x110d5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 548)));
    // 0x110d60: 0x526fc  dsll32      $a0, $a1, 27
    ctx->pc = 0x110d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 27));
    // 0x110d64: 0x427fe  dsrl32      $a0, $a0, 31
    ctx->pc = 0x110d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x110d68: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x110D68u;
    {
        const bool branch_taken_0x110d68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x110D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D68u;
        // 0x110d6c: 0x526bc  dsll32      $a0, $a1, 26 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d68) {
            ctx->pc = 0x110DACu;
            goto label_110dac;
        }
    }
    ctx->pc = 0x110D70u;
    // 0x110d70: 0x427fe  dsrl32      $a0, $a0, 31
    ctx->pc = 0x110d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x110d74: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x110D74u;
    {
        const bool branch_taken_0x110d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x110d74) {
            ctx->pc = 0x110D90u;
            goto label_110d90;
        }
    }
    ctx->pc = 0x110D7Cu;
    // 0x110d7c: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x110d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
    // 0x110d80: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x110d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x110d84: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x110d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x110d88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x110D88u;
    {
        const bool branch_taken_0x110d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D88u;
        // 0x110d8c: 0xacc40224  sw          $a0, 0x224($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d88) {
            ctx->pc = 0x110DACu;
            goto label_110dac;
        }
    }
    ctx->pc = 0x110D90u;
label_110d90:
    // 0x110d90: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x110d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
    // 0x110d94: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x110d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x110d98: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x110d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x110d9c: 0xacc40224  sw          $a0, 0x224($a2)
    ctx->pc = 0x110d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
    // 0x110da0: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x110da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
    // 0x110da4: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x110da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x110da8: 0xacc40224  sw          $a0, 0x224($a2)
    ctx->pc = 0x110da8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
label_110dac:
    // 0x110dac: 0x0  nop
    ctx->pc = 0x110dacu;
    // NOP
    // 0x110db0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x110db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x110db4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_110db8:
    // 0x110db8: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x110db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110dbc: 0x44202a  slt         $a0, $v0, $a0
    ctx->pc = 0x110dbcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x110dc0: 0x1480ffdf  bnez        $a0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x110DC0u;
    {
        const bool branch_taken_0x110dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x110dc0) {
            ctx->pc = 0x110D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110d40;
        }
    }
    ctx->pc = 0x110DC8u;
    // 0x110dc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110dcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110dd0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x110DD0u;
    {
        const bool branch_taken_0x110dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DD0u;
        // 0x110dd4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dd0) {
            ctx->pc = 0x111008u;
            goto label_111008;
        }
    }
    ctx->pc = 0x110DD8u;
label_110dd8:
    // 0x110dd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x110dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ddc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x110DDCu;
    {
        const bool branch_taken_0x110ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DDCu;
        // 0x110de0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ddc) {
            ctx->pc = 0x110E0Cu;
            goto label_110e0c;
        }
    }
    ctx->pc = 0x110DE4u;
label_110de4:
    // 0x110de4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x110de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110de8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x110de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x110dec: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110df0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x110df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x110df4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110df4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110df8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x110df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x110dfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110e00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110e04: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x110e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110e08: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x110e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_110e0c:
    // 0x110e0c: 0x0  nop
    ctx->pc = 0x110e0cu;
    // NOP
    // 0x110e10: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x110e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110e14: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x110e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110e18: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x110E18u;
    {
        const bool branch_taken_0x110e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110e18) {
            ctx->pc = 0x110DE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110de4;
        }
    }
    ctx->pc = 0x110E20u;
    // 0x110e20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110e24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110e28: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x110E28u;
    {
        const bool branch_taken_0x110e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E28u;
        // 0x110e2c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e28) {
            ctx->pc = 0x111008u;
            goto label_111008;
        }
    }
    ctx->pc = 0x110E30u;
label_110e30:
    // 0x110e30: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x110e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110e34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110e34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e38: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x110e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110e3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e44: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x110E44u;
    {
        const bool branch_taken_0x110e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E44u;
        // 0x110e48: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e44) {
            ctx->pc = 0x110EA0u;
            goto label_110ea0;
        }
    }
    ctx->pc = 0x110E4Cu;
label_110e4c:
    // 0x110e4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x110e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110e50: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x110e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x110e54: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x110e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110e58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110e5c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x110e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x110e60: 0x8c492cd8  lw          $t1, 0x2CD8($v0)
    ctx->pc = 0x110e60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110e64: 0x91240224  lbu         $a0, 0x224($t1)
    ctx->pc = 0x110e64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 548)));
    // 0x110e68: 0x416fc  dsll32      $v0, $a0, 27
    ctx->pc = 0x110e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 27));
    // 0x110e6c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110e70: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x110E70u;
    {
        const bool branch_taken_0x110e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E70u;
        // 0x110e74: 0x416bc  dsll32      $v0, $a0, 26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e70) {
            ctx->pc = 0x110E94u;
            goto label_110e94;
        }
    }
    ctx->pc = 0x110E78u;
    // 0x110e78: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110e7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110E7Cu;
    {
        const bool branch_taken_0x110e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110e7c) {
            ctx->pc = 0x110E94u;
            goto label_110e94;
        }
    }
    ctx->pc = 0x110E84u;
    // 0x110e84: 0x8d220228  lw          $v0, 0x228($t1)
    ctx->pc = 0x110e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 552)));
    // 0x110e88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x110E88u;
    {
        const bool branch_taken_0x110e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E88u;
        // 0x110e8c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e88) {
            ctx->pc = 0x110E94u;
            goto label_110e94;
        }
    }
    ctx->pc = 0x110E90u;
    // 0x110e90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x110e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_110e94:
    // 0x110e94: 0x0  nop
    ctx->pc = 0x110e94u;
    // NOP
    // 0x110e98: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x110e98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x110e9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x110e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_110ea0:
    // 0x110ea0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x110ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x110ea4: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x110EA4u;
    {
        const bool branch_taken_0x110ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110ea4) {
            ctx->pc = 0x110E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110e4c;
        }
    }
    ctx->pc = 0x110EACu;
    // 0x110eac: 0x15070056  bne         $t0, $a3, . + 4 + (0x56 << 2)
    ctx->pc = 0x110EACu;
    {
        const bool branch_taken_0x110eac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x110EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EACu;
        // 0x110eb0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eac) {
            ctx->pc = 0x111008u;
            goto label_111008;
        }
    }
    ctx->pc = 0x110EB4u;
    // 0x110eb4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x110EB4u;
    {
        const bool branch_taken_0x110eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EB4u;
        // 0x110eb8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eb4) {
            ctx->pc = 0x110F0Cu;
            goto label_110f0c;
        }
    }
    ctx->pc = 0x110EBCu;
label_110ebc:
    // 0x110ebc: 0xc044254  jal         func_110950
    ctx->pc = 0x110EBCu;
    SET_GPR_U32(ctx, 31, 0x110EC4u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x110EBCu, 0x110EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EC4u;
label_110ec4:
    // 0x110ec4: 0x24432cd8  addiu       $v1, $v0, 0x2CD8
    ctx->pc = 0x110ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x110ec8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x110ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110ecc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x110eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x110ed0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x110ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110ed4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110ed8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x110ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x110edc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x110edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110ee0: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x110ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x110ee4: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x110ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x110ee8: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110eec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110EECu;
    {
        const bool branch_taken_0x110eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EECu;
        // 0x110ef0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eec) {
            ctx->pc = 0x110F04u;
            goto label_110f04;
        }
    }
    ctx->pc = 0x110EF4u;
    // 0x110ef4: 0xc042118  jal         func_108460
    ctx->pc = 0x110EF4u;
    SET_GPR_U32(ctx, 31, 0x110EFCu);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x110EF4u, 0x110EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EFCu;
label_110efc:
    // 0x110efc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x110EFCu;
    {
        const bool branch_taken_0x110efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110efc) {
            ctx->pc = 0x110F20u;
            goto label_110f20;
        }
    }
    ctx->pc = 0x110F04u;
label_110f04:
    // 0x110f04: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x110f04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x110f08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x110f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_110f0c:
    // 0x110f0c: 0x0  nop
    ctx->pc = 0x110f0cu;
    // NOP
    // 0x110f10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x110f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x110f14: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x110f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110f18: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x110F18u;
    {
        const bool branch_taken_0x110f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110f18) {
            ctx->pc = 0x110EBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110ebc;
        }
    }
    ctx->pc = 0x110F20u;
label_110f20:
    // 0x110f20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x110f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x110F24u;
    {
        const bool branch_taken_0x110f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F24u;
        // 0x110f28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f24) {
            ctx->pc = 0x110F88u;
            goto label_110f88;
        }
    }
    ctx->pc = 0x110F2Cu;
label_110f2c:
    // 0x110f2c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x110f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110f30: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110f34: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x110f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x110f38: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110f38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110f3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110f40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110f44: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x110f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110f48: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x110f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x110f4c: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x110f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x110f50: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110f54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110F54u;
    {
        const bool branch_taken_0x110f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F54u;
        // 0x110f58: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f54) {
            ctx->pc = 0x110F6Cu;
            goto label_110f6c;
        }
    }
    ctx->pc = 0x110F5Cu;
    // 0x110f5c: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x110F5Cu;
    SET_GPR_U32(ctx, 31, 0x110F64u);
    ctx->pc = 0x110F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F5Cu;
    // 0x110f60: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x110F5Cu, 0x110F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F64u;
label_110f64:
    // 0x110f64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x110F64u;
    {
        const bool branch_taken_0x110f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110f64) {
            ctx->pc = 0x110F7Cu;
            goto label_110f7c;
        }
    }
    ctx->pc = 0x110F6Cu;
label_110f6c:
    // 0x110f6c: 0x0  nop
    ctx->pc = 0x110f6cu;
    // NOP
    // 0x110f70: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x110f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x110f74: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x110F74u;
    SET_GPR_U32(ctx, 31, 0x110F7Cu);
    ctx->pc = 0x110F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F74u;
    // 0x110f78: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x110F74u, 0x110F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F7Cu;
label_110f7c:
    // 0x110f7c: 0x0  nop
    ctx->pc = 0x110f7cu;
    // NOP
    // 0x110f80: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x110f80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x110f84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x110f84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_110f88:
    // 0x110f88: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x110f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110f8c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x110f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110f90: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x110F90u;
    {
        const bool branch_taken_0x110f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110f90) {
            ctx->pc = 0x110F2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110f2c;
        }
    }
    ctx->pc = 0x110F98u;
    // 0x110f98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110f9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110fa0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x110FA0u;
    {
        const bool branch_taken_0x110fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FA0u;
        // 0x110fa4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fa0) {
            ctx->pc = 0x111008u;
            goto label_111008;
        }
    }
    ctx->pc = 0x110FA8u;
label_110fa8:
    // 0x110fa8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x110fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x110fac: 0x72001a  div         $zero, $v1, $s2
    ctx->pc = 0x110facu;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x110fb0: 0x0  nop
    ctx->pc = 0x110fb0u;
    // NOP
    // 0x110fb4: 0x0  nop
    ctx->pc = 0x110fb4u;
    // NOP
    // 0x110fb8: 0x1010  mfhi        $v0
    ctx->pc = 0x110fb8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x110fbc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x110FBCu;
    {
        const bool branch_taken_0x110fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110fbc) {
            ctx->pc = 0x110FF4u;
            goto label_110ff4;
        }
    }
    ctx->pc = 0x110FC4u;
    // 0x110fc4: 0x72001a  div         $zero, $v1, $s2
    ctx->pc = 0x110fc4u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x110fc8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x110fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x110fcc: 0x0  nop
    ctx->pc = 0x110fccu;
    // NOP
    // 0x110fd0: 0x2812  mflo        $a1
    ctx->pc = 0x110fd0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x110fd4: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x110fd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110fd8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x110FD8u;
    {
        const bool branch_taken_0x110fd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FD8u;
        // 0x110fdc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fd8) {
            ctx->pc = 0x110FF0u;
            goto label_110ff0;
        }
    }
    ctx->pc = 0x110FE0u;
    // 0x110fe0: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x110FE0u;
    SET_GPR_U32(ctx, 31, 0x110FE8u);
    ctx->pc = 0x110FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FE0u;
    // 0x110fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x110FE0u, 0x110FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FE8u;
label_110fe8:
    // 0x110fe8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x110FE8u;
    {
        const bool branch_taken_0x110fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FE8u;
        // 0x110fec: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fe8) {
            ctx->pc = 0x110FF8u;
            goto label_110ff8;
        }
    }
    ctx->pc = 0x110FF0u;
label_110ff0:
    // 0x110ff0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x110ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_110ff4:
    // 0x110ff4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x110ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_110ff8:
    // 0x110ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x110ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110ffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x110ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x111000: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x111000u;
    {
        const bool branch_taken_0x111000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111000u;
        // 0x111004: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111000) {
            ctx->pc = 0x11100Cu;
            goto label_11100c;
        }
    }
    ctx->pc = 0x111008u;
label_111008:
    // 0x111008: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11100c:
    // 0x11100c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11100cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111010: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x111010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x111014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x111018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11101c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11101cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111020: 0x3e00008  jr          $ra
    ctx->pc = 0x111020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111020u;
        // 0x111024: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111028u;
}
