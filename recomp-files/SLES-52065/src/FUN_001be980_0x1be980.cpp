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

// Function: FUN_001be980
// Address: 0x1be980 - 0x1bebe8
void FUN_001be980_0x1be980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001be980_0x1be980");
#endif

    switch (ctx->pc) {
        case 0x1be998u: goto label_1be998;
        case 0x1be9b0u: goto label_1be9b0;
        case 0x1be9b8u: goto label_1be9b8;
        case 0x1bea34u: goto label_1bea34;
        case 0x1bea40u: goto label_1bea40;
        case 0x1bea4cu: goto label_1bea4c;
        case 0x1bea60u: goto label_1bea60;
        case 0x1bea6cu: goto label_1bea6c;
        case 0x1bea78u: goto label_1bea78;
        case 0x1bea8cu: goto label_1bea8c;
        case 0x1bea98u: goto label_1bea98;
        case 0x1beaa4u: goto label_1beaa4;
        case 0x1beab8u: goto label_1beab8;
        case 0x1beac4u: goto label_1beac4;
        case 0x1bead0u: goto label_1bead0;
        case 0x1beae4u: goto label_1beae4;
        case 0x1beaf0u: goto label_1beaf0;
        case 0x1beafcu: goto label_1beafc;
        case 0x1beb10u: goto label_1beb10;
        case 0x1beb1cu: goto label_1beb1c;
        case 0x1beb28u: goto label_1beb28;
        case 0x1beb3cu: goto label_1beb3c;
        case 0x1beb48u: goto label_1beb48;
        case 0x1beb54u: goto label_1beb54;
        case 0x1beb68u: goto label_1beb68;
        case 0x1beb74u: goto label_1beb74;
        case 0x1beb80u: goto label_1beb80;
        case 0x1beb94u: goto label_1beb94;
        case 0x1beba0u: goto label_1beba0;
        case 0x1bebacu: goto label_1bebac;
        default: break;
    }

    ctx->pc = 0x1be980u;

    // 0x1be980: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1be980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1be984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1be984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be98c: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x1be98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x1be990: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1BE990u;
    SET_GPR_U32(ctx, 31, 0x1BE998u);
    ctx->pc = 0x1BE994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE990u;
    // 0x1be994: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1BE990u, 0x1BE998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE998u;
label_1be998:
    // 0x1be998: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1be998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1be99c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1be99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1be9a0: 0x2463ba40  addiu       $v1, $v1, -0x45C0
    ctx->pc = 0x1be9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949440));
    // 0x1be9a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1be9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1be9a8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1be9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1be9ac: 0x24500068  addiu       $s0, $v0, 0x68
    ctx->pc = 0x1be9acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1be9b0:
    // 0x1be9b0: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1BE9B0u;
    SET_GPR_U32(ctx, 31, 0x1BE9B8u);
    ctx->pc = 0x1BE9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9B0u;
    // 0x1be9b4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1BE9B0u, 0x1BE9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9B8u;
label_1be9b8:
    // 0x1be9b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be9bc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1be9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1be9c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1be9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1be9c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1be9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1be9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be9cc: 0x0  nop
    ctx->pc = 0x1be9ccu;
    // NOP
    // 0x1be9d0: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1be9d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1be9d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1be9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1be9d8: 0x34440fd8  ori         $a0, $v0, 0xFD8
    ctx->pc = 0x1be9d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1be9dc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1be9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1be9e0: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1be9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1be9e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1be9e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be9e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be9e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be9ec: 0x0  nop
    ctx->pc = 0x1be9ecu;
    // NOP
    // 0x1be9f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1be9f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1be9f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1be9f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1be9f8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1be9f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1be9fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bea00: 0x0  nop
    ctx->pc = 0x1bea00u;
    // NOP
    // 0x1bea04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bea04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bea08: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1bea08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1bea0c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1bea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1bea10: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1bea10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1bea14: 0x244200d8  addiu       $v0, $v0, 0xD8
    ctx->pc = 0x1bea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1bea18: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1bea18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bea1c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1BEA1Cu;
    {
        const bool branch_taken_0x1bea1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA1Cu;
        // 0x1bea20: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea1c) {
            ctx->pc = 0x1BE9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be9b0;
        }
    }
    ctx->pc = 0x1BEA24u;
    // 0x1bea24: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1bea24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1bea28: 0x24a512d0  addiu       $a1, $a1, 0x12D0
    ctx->pc = 0x1bea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4816));
    // 0x1bea2c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BEA2Cu;
    SET_GPR_U32(ctx, 31, 0x1BEA34u);
    ctx->pc = 0x1BEA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA2Cu;
    // 0x1bea30: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BEA2Cu, 0x1BEA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA34u;
label_1bea34:
    // 0x1bea34: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1bea34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1bea38: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BEA38u;
    SET_GPR_U32(ctx, 31, 0x1BEA40u);
    ctx->pc = 0x1BEA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA38u;
    // 0x1bea3c: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BEA38u, 0x1BEA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA40u;
label_1bea40:
    // 0x1bea40: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1bea40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1bea44: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BEA44u;
    SET_GPR_U32(ctx, 31, 0x1BEA4Cu);
    ctx->pc = 0x1BEA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA44u;
    // 0x1bea48: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BEA44u, 0x1BEA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA4Cu;
label_1bea4c:
    // 0x1bea4c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bea50: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1bea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1bea54: 0x24a512f0  addiu       $a1, $a1, 0x12F0
    ctx->pc = 0x1bea54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4848));
    // 0x1bea58: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BEA58u;
    SET_GPR_U32(ctx, 31, 0x1BEA60u);
    ctx->pc = 0x1BEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA58u;
    // 0x1bea5c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BEA58u, 0x1BEA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA60u;
label_1bea60:
    // 0x1bea60: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1bea60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1bea64: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BEA64u;
    SET_GPR_U32(ctx, 31, 0x1BEA6Cu);
    ctx->pc = 0x1BEA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA64u;
    // 0x1bea68: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BEA64u, 0x1BEA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA6Cu;
label_1bea6c:
    // 0x1bea6c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1bea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1bea70: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BEA70u;
    SET_GPR_U32(ctx, 31, 0x1BEA78u);
    ctx->pc = 0x1BEA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA70u;
    // 0x1bea74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BEA70u, 0x1BEA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA78u;
label_1bea78:
    // 0x1bea78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bea78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bea7c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1bea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1bea80: 0x24a51310  addiu       $a1, $a1, 0x1310
    ctx->pc = 0x1bea80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4880));
    // 0x1bea84: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BEA84u;
    SET_GPR_U32(ctx, 31, 0x1BEA8Cu);
    ctx->pc = 0x1BEA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA84u;
    // 0x1bea88: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BEA84u, 0x1BEA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA8Cu;
label_1bea8c:
    // 0x1bea8c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1bea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1bea90: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BEA90u;
    SET_GPR_U32(ctx, 31, 0x1BEA98u);
    ctx->pc = 0x1BEA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA90u;
    // 0x1bea94: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BEA90u, 0x1BEA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA98u;
label_1bea98:
    // 0x1bea98: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1bea98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1bea9c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BEA9Cu;
    SET_GPR_U32(ctx, 31, 0x1BEAA4u);
    ctx->pc = 0x1BEAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA9Cu;
    // 0x1beaa0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BEA9Cu, 0x1BEAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAA4u;
label_1beaa4:
    // 0x1beaa4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1beaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1beaa8: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1beaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1beaac: 0x24a51330  addiu       $a1, $a1, 0x1330
    ctx->pc = 0x1beaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1beab0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BEAB0u;
    SET_GPR_U32(ctx, 31, 0x1BEAB8u);
    ctx->pc = 0x1BEAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEAB0u;
    // 0x1beab4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BEAB0u, 0x1BEAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAB8u;
label_1beab8:
    // 0x1beab8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1beab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1beabc: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BEABCu;
    SET_GPR_U32(ctx, 31, 0x1BEAC4u);
    ctx->pc = 0x1BEAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEABCu;
    // 0x1beac0: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BEABCu, 0x1BEAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAC4u;
label_1beac4:
    // 0x1beac4: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1beac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1beac8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BEAC8u;
    SET_GPR_U32(ctx, 31, 0x1BEAD0u);
    ctx->pc = 0x1BEACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEAC8u;
    // 0x1beacc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BEAC8u, 0x1BEAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAD0u;
label_1bead0:
    // 0x1bead0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bead0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bead4: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1bead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1bead8: 0x24a51350  addiu       $a1, $a1, 0x1350
    ctx->pc = 0x1bead8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4944));
    // 0x1beadc: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BEADCu;
    SET_GPR_U32(ctx, 31, 0x1BEAE4u);
    ctx->pc = 0x1BEAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEADCu;
    // 0x1beae0: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BEADCu, 0x1BEAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAE4u;
label_1beae4:
    // 0x1beae4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1beae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1beae8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BEAE8u;
    SET_GPR_U32(ctx, 31, 0x1BEAF0u);
    ctx->pc = 0x1BEAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEAE8u;
    // 0x1beaec: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BEAE8u, 0x1BEAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAF0u;
label_1beaf0:
    // 0x1beaf0: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1beaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1beaf4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BEAF4u;
    SET_GPR_U32(ctx, 31, 0x1BEAFCu);
    ctx->pc = 0x1BEAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEAF4u;
    // 0x1beaf8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BEAF4u, 0x1BEAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAFCu;
label_1beafc:
    // 0x1beafc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1beafcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1beb00: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1beb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1beb04: 0x24a51370  addiu       $a1, $a1, 0x1370
    ctx->pc = 0x1beb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4976));
    // 0x1beb08: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BEB08u;
    SET_GPR_U32(ctx, 31, 0x1BEB10u);
    ctx->pc = 0x1BEB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB08u;
    // 0x1beb0c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BEB08u, 0x1BEB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB10u;
label_1beb10:
    // 0x1beb10: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1beb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1beb14: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BEB14u;
    SET_GPR_U32(ctx, 31, 0x1BEB1Cu);
    ctx->pc = 0x1BEB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB14u;
    // 0x1beb18: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BEB14u, 0x1BEB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB1Cu;
label_1beb1c:
    // 0x1beb1c: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1beb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1beb20: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BEB20u;
    SET_GPR_U32(ctx, 31, 0x1BEB28u);
    ctx->pc = 0x1BEB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB20u;
    // 0x1beb24: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BEB20u, 0x1BEB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB28u;
label_1beb28:
    // 0x1beb28: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1beb28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1beb2c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1beb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1beb30: 0x24a51390  addiu       $a1, $a1, 0x1390
    ctx->pc = 0x1beb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5008));
    // 0x1beb34: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BEB34u;
    SET_GPR_U32(ctx, 31, 0x1BEB3Cu);
    ctx->pc = 0x1BEB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB34u;
    // 0x1beb38: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BEB34u, 0x1BEB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB3Cu;
label_1beb3c:
    // 0x1beb3c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1beb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1beb40: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BEB40u;
    SET_GPR_U32(ctx, 31, 0x1BEB48u);
    ctx->pc = 0x1BEB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB40u;
    // 0x1beb44: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BEB40u, 0x1BEB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB48u;
label_1beb48:
    // 0x1beb48: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1beb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1beb4c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BEB4Cu;
    SET_GPR_U32(ctx, 31, 0x1BEB54u);
    ctx->pc = 0x1BEB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB4Cu;
    // 0x1beb50: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BEB4Cu, 0x1BEB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB54u;
label_1beb54:
    // 0x1beb54: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1beb54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1beb58: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1beb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1beb5c: 0x24a513b0  addiu       $a1, $a1, 0x13B0
    ctx->pc = 0x1beb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5040));
    // 0x1beb60: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BEB60u;
    SET_GPR_U32(ctx, 31, 0x1BEB68u);
    ctx->pc = 0x1BEB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB60u;
    // 0x1beb64: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BEB60u, 0x1BEB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB68u;
label_1beb68:
    // 0x1beb68: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1beb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1beb6c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BEB6Cu;
    SET_GPR_U32(ctx, 31, 0x1BEB74u);
    ctx->pc = 0x1BEB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB6Cu;
    // 0x1beb70: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BEB6Cu, 0x1BEB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB74u;
label_1beb74:
    // 0x1beb74: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1beb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1beb78: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BEB78u;
    SET_GPR_U32(ctx, 31, 0x1BEB80u);
    ctx->pc = 0x1BEB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB78u;
    // 0x1beb7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BEB78u, 0x1BEB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB80u;
label_1beb80:
    // 0x1beb80: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1beb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1beb84: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1beb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1beb88: 0x24a513d0  addiu       $a1, $a1, 0x13D0
    ctx->pc = 0x1beb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5072));
    // 0x1beb8c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BEB8Cu;
    SET_GPR_U32(ctx, 31, 0x1BEB94u);
    ctx->pc = 0x1BEB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB8Cu;
    // 0x1beb90: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BEB8Cu, 0x1BEB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB94u;
label_1beb94:
    // 0x1beb94: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1beb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1beb98: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BEB98u;
    SET_GPR_U32(ctx, 31, 0x1BEBA0u);
    ctx->pc = 0x1BEB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB98u;
    // 0x1beb9c: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BEB98u, 0x1BEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBA0u;
label_1beba0:
    // 0x1beba0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1beba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1beba4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BEBA4u;
    SET_GPR_U32(ctx, 31, 0x1BEBACu);
    ctx->pc = 0x1BEBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEBA4u;
    // 0x1beba8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BEBA4u, 0x1BEBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBACu;
label_1bebac:
    // 0x1bebac: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1bebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1bebb0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1bebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bebb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bebb8: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x1bebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
    // 0x1bebbc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1bebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1bebc0: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1bebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1bebc4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1bebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1bebc8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1bebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1bebcc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1bebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1bebd0: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1bebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1bebd4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1bebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1bebd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bebd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bebdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bebdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bebe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBE0u;
        // 0x1bebe4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEBE8u;
}
