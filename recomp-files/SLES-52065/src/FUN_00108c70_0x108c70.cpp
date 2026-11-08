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

// Function: FUN_00108c70
// Address: 0x108c70 - 0x108d78
void FUN_00108c70_0x108c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00108c70_0x108c70");
#endif

    switch (ctx->pc) {
        case 0x108ca4u: goto label_108ca4;
        case 0x108d18u: goto label_108d18;
        case 0x108d20u: goto label_108d20;
        case 0x108d40u: goto label_108d40;
        default: break;
    }

    ctx->pc = 0x108c70u;

    // 0x108c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x108c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x108c74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x108c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x108c78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x108c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x108c7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x108c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x108c80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x108c80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x108c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x108c88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x108c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x108c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c90: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x108c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
    // 0x108c94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c9c: 0xc0583f0  jal         func_160FC0
    ctx->pc = 0x108C9Cu;
    SET_GPR_U32(ctx, 31, 0x108CA4u);
    ctx->pc = 0x108CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C9Cu;
    // 0x108ca0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FC0u, 0x108C9Cu, 0x108CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CA4u;
label_108ca4:
    // 0x108ca4: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x108ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x108ca8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108CA8u;
    {
        const bool branch_taken_0x108ca8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CA8u;
        // 0x108cac: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ca8) {
            ctx->pc = 0x108CB8u;
            goto label_108cb8;
        }
    }
    ctx->pc = 0x108CB0u;
    // 0x108cb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x108CB0u;
    {
        const bool branch_taken_0x108cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CB0u;
        // 0x108cb4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cb0) {
            ctx->pc = 0x108CD0u;
            goto label_108cd0;
        }
    }
    ctx->pc = 0x108CB8u;
label_108cb8:
    // 0x108cb8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x108cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108cbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108cc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108cc4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x108cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108cc8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x108cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x108ccc: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x108cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_108cd0:
    // 0x108cd0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x108cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x108cd4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x108cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108cd8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x108cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x108cdc: 0x78460060  lq          $a2, 0x60($v0)
    ctx->pc = 0x108cdcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x108ce0: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x108ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
    // 0x108ce4: 0x3c024086  lui         $v0, 0x4086
    ctx->pc = 0x108ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16518 << 16));
    // 0x108ce8: 0xc60201c0  lwc1        $f2, 0x1C0($s0)
    ctx->pc = 0x108ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x108cec: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x108cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x108cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108cf4: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x108cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
    // 0x108cf8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x108cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108cfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x108d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d04: 0x260702d0  addiu       $a3, $s0, 0x2D0
    ctx->pc = 0x108d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x108d08: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x108d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x108d0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x108d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x108d10: 0xc058138  jal         func_1604E0
    ctx->pc = 0x108D10u;
    SET_GPR_U32(ctx, 31, 0x108D18u);
    ctx->pc = 0x108D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D10u;
    // 0x108d14: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604E0u, 0x108D10u, 0x108D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D18u;
label_108d18:
    // 0x108d18: 0xc055d4c  jal         func_157530
    ctx->pc = 0x108D18u;
    SET_GPR_U32(ctx, 31, 0x108D20u);
    ctx->pc = 0x108D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D18u;
    // 0x108d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157530u, 0x108D18u, 0x108D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D20u;
label_108d20:
    // 0x108d20: 0x8e622c1c  lw          $v0, 0x2C1C($s3)
    ctx->pc = 0x108d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11292)));
    // 0x108d24: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x108d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x108d28: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x108d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x108d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x108d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x108d34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108d38: 0xc055dec  jal         func_1577B0
    ctx->pc = 0x108D38u;
    SET_GPR_U32(ctx, 31, 0x108D40u);
    ctx->pc = 0x108D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D38u;
    // 0x108d3c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577B0u, 0x108D38u, 0x108D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D40u;
label_108d40:
    // 0x108d40: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x108D40u;
    {
        const bool branch_taken_0x108d40 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x108d40) {
            ctx->pc = 0x108D58u;
            goto label_108d58;
        }
    }
    ctx->pc = 0x108D48u;
    // 0x108d48: 0x860301ec  lh          $v1, 0x1EC($s0)
    ctx->pc = 0x108d48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x108d4c: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x108D4Cu;
    {
        const bool branch_taken_0x108d4c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x108d4c) {
            ctx->pc = 0x108D58u;
            goto label_108d58;
        }
    }
    ctx->pc = 0x108D54u;
    // 0x108d54: 0xa60301ee  sh          $v1, 0x1EE($s0)
    ctx->pc = 0x108d54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 494), (uint16_t)GPR_U32(ctx, 3));
label_108d58:
    // 0x108d58: 0xa61201ec  sh          $s2, 0x1EC($s0)
    ctx->pc = 0x108d58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 492), (uint16_t)GPR_U32(ctx, 18));
    // 0x108d5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x108d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108d60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x108d60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108d64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x108d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108d68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108d6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108d70: 0x3e00008  jr          $ra
    ctx->pc = 0x108D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D70u;
        // 0x108d74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108D78u;
}
