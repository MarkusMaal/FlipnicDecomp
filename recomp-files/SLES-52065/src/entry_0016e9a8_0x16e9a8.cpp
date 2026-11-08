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

// Function: entry_0016e9a8
// Address: 0x16e9a8 - 0x16ea74
void entry_0016e9a8_0x16e9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e9a8_0x16e9a8");
#endif

    switch (ctx->pc) {
        case 0x16e9d4u: goto label_16e9d4;
        case 0x16ea30u: goto label_16ea30;
        case 0x16ea58u: goto label_16ea58;
        default: break;
    }

    ctx->pc = 0x16e9a8u;

    // 0x16e9a8: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x16e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x16e9ac: 0x533021  addu        $a2, $v0, $s3
    ctx->pc = 0x16e9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16e9b0: 0x84c20082  lh          $v0, 0x82($a2)
    ctx->pc = 0x16e9b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 130)));
    // 0x16e9b4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x16E9B4u;
    {
        const bool branch_taken_0x16e9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e9b4) {
            ctx->pc = 0x16EAC0u;
            return;
        }
    }
    ctx->pc = 0x16E9BCu;
    // 0x16e9bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16e9c0: 0xc68c01c0  lwc1        $f12, 0x1C0($s4)
    ctx->pc = 0x16e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16e9c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16e9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e9c8: 0xc44d0050  lwc1        $f13, 0x50($v0)
    ctx->pc = 0x16e9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16e9cc: 0xc054e78  jal         func_1539E0
    ctx->pc = 0x16E9CCu;
    SET_GPR_U32(ctx, 31, 0x16E9D4u);
    ctx->pc = 0x16E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E9CCu;
    // 0x16e9d0: 0x26850300  addiu       $a1, $s4, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539E0u, 0x16E9CCu, 0x16E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9D4u;
label_16e9d4:
    // 0x16e9d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16e9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e9d8: 0x0  nop
    ctx->pc = 0x16e9d8u;
    // NOP
    // 0x16e9dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16e9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e9e0: 0x0  nop
    ctx->pc = 0x16e9e0u;
    // NOP
    // 0x16e9e4: 0x45010036  bc1t        . + 4 + (0x36 << 2)
    ctx->pc = 0x16E9E4u;
    {
        const bool branch_taken_0x16e9e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e9e4) {
            ctx->pc = 0x16EAC0u;
            return;
        }
    }
    ctx->pc = 0x16E9ECu;
    // 0x16e9ec: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x16e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x16e9f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16e9f4: 0x84420080  lh          $v0, 0x80($v0)
    ctx->pc = 0x16e9f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x16e9f8: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16E9F8u;
    {
        const bool branch_taken_0x16e9f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9F8u;
        // 0x16e9fc: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9f8) {
            ctx->pc = 0x16EA74u;
            return;
        }
    }
    ctx->pc = 0x16EA00u;
    // 0x16ea00: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
    // 0x16ea04: 0x8f82860c  lw          $v0, -0x79F4($gp)
    ctx->pc = 0x16ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936076)));
    // 0x16ea08: 0x8f8783a8  lw          $a3, -0x7C58($gp)
    ctx->pc = 0x16ea08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x16ea0c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x16ea10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16ea14: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x16ea14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16ea18: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x16ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16ea1c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x16ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16ea20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ea24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ea28: 0xc046648  jal         func_119920
    ctx->pc = 0x16EA28u;
    SET_GPR_U32(ctx, 31, 0x16EA30u);
    ctx->pc = 0x16EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA28u;
    // 0x16ea2c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119920u, 0x16EA28u, 0x16EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA30u;
label_16ea30:
    // 0x16ea30: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x16ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x16ea34: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16ea34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16ea38: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
    // 0x16ea3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16ea3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ea40: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x16ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x16ea44: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16ea48: 0x84450080  lh          $a1, 0x80($v0)
    ctx->pc = 0x16ea48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x16ea4c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x16ea50: 0xc046704  jal         func_119C10
    ctx->pc = 0x16EA50u;
    SET_GPR_U32(ctx, 31, 0x16EA58u);
    ctx->pc = 0x16EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA50u;
    // 0x16ea54: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119C10u, 0x16EA50u, 0x16EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA58u;
label_16ea58:
    // 0x16ea58: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x16ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x16ea5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ea60: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16ea64: 0xa4400082  sh          $zero, 0x82($v0)
    ctx->pc = 0x16ea64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 130), (uint16_t)GPR_U32(ctx, 0));
    // 0x16ea68: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x16ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x16ea6c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16ea70: 0xa4430080  sh          $v1, 0x80($v0)
    ctx->pc = 0x16ea70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x16ea74u;
}
