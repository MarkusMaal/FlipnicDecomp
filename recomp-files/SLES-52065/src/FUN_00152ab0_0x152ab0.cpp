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

// Function: FUN_00152ab0
// Address: 0x152ab0 - 0x152b80
void FUN_00152ab0_0x152ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152ab0_0x152ab0");
#endif

    switch (ctx->pc) {
        case 0x152b04u: goto label_152b04;
        case 0x152b28u: goto label_152b28;
        default: break;
    }

    ctx->pc = 0x152ab0u;

    // 0x152ab0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x152ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x152ab4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x152ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x152ab8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x152ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x152abc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x152abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x152ac0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x152ac0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ac4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x152ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x152ac8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x152ac8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152acc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x152accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x152ad0: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x152ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x152ad4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x152ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x152ad8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x152ad8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152adc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x152adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x152ae0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x152ae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ae4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x152ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x152ae8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x152ae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152aec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x152aecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x152af0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x152af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152af4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x152af4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x152af8: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x152AF8u;
    {
        const bool branch_taken_0x152af8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x152AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AF8u;
        // 0x152afc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152af8) {
            ctx->pc = 0x152B4Cu;
            goto label_152b4c;
        }
    }
    ctx->pc = 0x152B00u;
    // 0x152b00: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x152b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_152b04:
    // 0x152b04: 0x26c70010  addiu       $a3, $s6, 0x10
    ctx->pc = 0x152b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x152b08: 0x26c60020  addiu       $a2, $s6, 0x20
    ctx->pc = 0x152b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x152b0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x152b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b14: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x152b14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b18: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x152b18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b1c: 0x26d60030  addiu       $s6, $s6, 0x30
    ctx->pc = 0x152b1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x152b20: 0xc0556ec  jal         func_155BB0
    ctx->pc = 0x152B20u;
    SET_GPR_U32(ctx, 31, 0x152B28u);
    ctx->pc = 0x152B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B20u;
    // 0x152b24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x155BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BB0u, 0x152B20u, 0x152B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B28u;
label_152b28:
    // 0x152b28: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x152b28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x152b2c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x152B2Cu;
    {
        const bool branch_taken_0x152b2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b2c) {
            ctx->pc = 0x152B3Cu;
            goto label_152b3c;
        }
    }
    ctx->pc = 0x152B34u;
    // 0x152b34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152B34u;
    {
        const bool branch_taken_0x152b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B34u;
        // 0x152b38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b34) {
            ctx->pc = 0x152B54u;
            goto label_152b54;
        }
    }
    ctx->pc = 0x152B3Cu;
label_152b3c:
    // 0x152b3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x152b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x152b40: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x152b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x152b44: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x152B44u;
    {
        const bool branch_taken_0x152b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B44u;
        // 0x152b48: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b44) {
            ctx->pc = 0x152B04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152b04;
        }
    }
    ctx->pc = 0x152B4Cu;
label_152b4c:
    // 0x152b4c: 0x0  nop
    ctx->pc = 0x152b4cu;
    // NOP
    // 0x152b50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x152b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_152b54:
    // 0x152b54: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x152b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152b58: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x152b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x152b5c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x152b5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152b60: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x152b60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x152b64: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x152b64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152b68: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x152b68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152b6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x152b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152b70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x152b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152b74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x152b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152b78: 0x3e00008  jr          $ra
    ctx->pc = 0x152B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B78u;
        // 0x152b7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152B80u;
}
