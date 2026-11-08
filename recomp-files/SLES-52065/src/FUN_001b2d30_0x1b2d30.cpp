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

// Function: FUN_001b2d30
// Address: 0x1b2d30 - 0x1b2e50
void FUN_001b2d30_0x1b2d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b2d30_0x1b2d30");
#endif

    switch (ctx->pc) {
        case 0x1b2d4cu: goto label_1b2d4c;
        case 0x1b2d64u: goto label_1b2d64;
        case 0x1b2de8u: goto label_1b2de8;
        case 0x1b2e04u: goto label_1b2e04;
        case 0x1b2e14u: goto label_1b2e14;
        case 0x1b2e20u: goto label_1b2e20;
        case 0x1b2e28u: goto label_1b2e28;
        case 0x1b2e3cu: goto label_1b2e3c;
        default: break;
    }

    ctx->pc = 0x1b2d30u;

    // 0x1b2d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b2d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b2d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d40: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1b2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b2d44: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1B2D44u;
    SET_GPR_U32(ctx, 31, 0x1B2D4Cu);
    ctx->pc = 0x1B2D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D44u;
    // 0x1b2d48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1B2D44u, 0x1B2D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D4Cu;
label_1b2d4c:
    // 0x1b2d4c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2d50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2d54: 0x0  nop
    ctx->pc = 0x1b2d54u;
    // NOP
    // 0x1b2d58: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b2d58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b2d5c: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1B2D5Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D64u);
    ctx->pc = 0x1B2D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D5Cu;
    // 0x1b2d60: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1B2D5Cu, 0x1B2D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D64u;
label_1b2d64:
    // 0x1b2d64: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1b2d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2d68: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b2d6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b2d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2d70: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1b2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b2d74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2d78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2d7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2d7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b2d80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b2d80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b2d84: 0x0  nop
    ctx->pc = 0x1b2d84u;
    // NOP
    // 0x1b2d88: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1b2d88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b2d8c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2D8Cu;
    {
        const bool branch_taken_0x1b2d8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2d8c) {
            ctx->pc = 0x1B2DBCu;
            goto label_1b2dbc;
        }
    }
    ctx->pc = 0x1B2D94u;
    // 0x1b2d94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b2d94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2d9c: 0x0  nop
    ctx->pc = 0x1b2d9cu;
    // NOP
    // 0x1b2da0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b2da0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2da4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2da8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b2da8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b2dac: 0x0  nop
    ctx->pc = 0x1b2dacu;
    // NOP
    // 0x1b2db0: 0x0  nop
    ctx->pc = 0x1b2db0u;
    // NOP
    // 0x1b2db4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2DB4u;
    {
        const bool branch_taken_0x1b2db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2db4) {
            ctx->pc = 0x1B2DC4u;
            goto label_1b2dc4;
        }
    }
    ctx->pc = 0x1B2DBCu;
label_1b2dbc:
    // 0x1b2dbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2dc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b2dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2dc4:
    // 0x1b2dc4: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1b2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1b2dc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b2dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2dd0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2dd4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b2dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b2dd8: 0x460103c2  mul.s       $f15, $f0, $f1
    ctx->pc = 0x1b2dd8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2ddc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b2ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2de0: 0xc062860  jal         func_18A180
    ctx->pc = 0x1B2DE0u;
    SET_GPR_U32(ctx, 31, 0x1B2DE8u);
    ctx->pc = 0x1B2DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DE0u;
    // 0x1b2de4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1B2DE0u, 0x1B2DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2DE8u;
label_1b2de8:
    // 0x1b2de8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2dec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2df0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b2df4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b2df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1b2df8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b2df8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b2dfc: 0xc06286c  jal         func_18A1B0
    ctx->pc = 0x1B2DFCu;
    SET_GPR_U32(ctx, 31, 0x1B2E04u);
    ctx->pc = 0x1B2E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DFCu;
    // 0x1b2e00: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1B0u, 0x1B2DFCu, 0x1B2E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E04u;
label_1b2e04:
    // 0x1b2e04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2e08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2e0c: 0xc062858  jal         func_18A160
    ctx->pc = 0x1B2E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B2E14u);
    ctx->pc = 0x1B2E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E0Cu;
    // 0x1b2e10: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1B2E0Cu, 0x1B2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E14u;
label_1b2e14:
    // 0x1b2e14: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2e18: 0xc062200  jal         func_188800
    ctx->pc = 0x1B2E18u;
    SET_GPR_U32(ctx, 31, 0x1B2E20u);
    ctx->pc = 0x1B2E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E18u;
    // 0x1b2e1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1B2E18u, 0x1B2E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E20u;
label_1b2e20:
    // 0x1b2e20: 0xc062114  jal         func_188450
    ctx->pc = 0x1B2E20u;
    SET_GPR_U32(ctx, 31, 0x1B2E28u);
    ctx->pc = 0x1B2E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E20u;
    // 0x1b2e24: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1B2E20u, 0x1B2E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E28u;
label_1b2e28:
    // 0x1b2e28: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2e2c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b2e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b2e30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b2e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2e34: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1B2E34u;
    SET_GPR_U32(ctx, 31, 0x1B2E3Cu);
    ctx->pc = 0x1B2E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E34u;
    // 0x1b2e38: 0x24a50c90  addiu       $a1, $a1, 0xC90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1B2E34u, 0x1B2E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E3Cu;
label_1b2e3c:
    // 0x1b2e3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2e40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b2e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2e48: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E48u;
        // 0x1b2e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2E50u;
}
