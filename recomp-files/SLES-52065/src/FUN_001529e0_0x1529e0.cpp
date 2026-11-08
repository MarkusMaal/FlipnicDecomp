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

// Function: FUN_001529e0
// Address: 0x1529e0 - 0x152ab0
void FUN_001529e0_0x1529e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001529e0_0x1529e0");
#endif

    switch (ctx->pc) {
        case 0x152a34u: goto label_152a34;
        case 0x152a58u: goto label_152a58;
        default: break;
    }

    ctx->pc = 0x1529e0u;

    // 0x1529e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1529e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1529e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1529e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1529e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1529e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1529ec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1529ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1529f0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1529f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1529f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1529f8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1529f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1529fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x152a00: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x152a00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x152a04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x152a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x152a08: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x152a08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x152a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x152a10: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x152a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x152a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x152a18: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x152a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x152a1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x152a20: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x152a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a24: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x152a24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x152a28: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x152A28u;
    {
        const bool branch_taken_0x152a28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A28u;
        // 0x152a2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a28) {
            ctx->pc = 0x152A7Cu;
            goto label_152a7c;
        }
    }
    ctx->pc = 0x152A30u;
    // 0x152a30: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x152a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_152a34:
    // 0x152a34: 0x26c70010  addiu       $a3, $s6, 0x10
    ctx->pc = 0x152a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x152a38: 0x26c60020  addiu       $a2, $s6, 0x20
    ctx->pc = 0x152a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x152a3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x152a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a44: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x152a44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a48: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x152a48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a4c: 0x26d60060  addiu       $s6, $s6, 0x60
    ctx->pc = 0x152a4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    // 0x152a50: 0xc0555f0  jal         func_1557C0
    ctx->pc = 0x152A50u;
    SET_GPR_U32(ctx, 31, 0x152A58u);
    ctx->pc = 0x152A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A50u;
    // 0x152a54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1557C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1557C0u, 0x152A50u, 0x152A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A58u;
label_152a58:
    // 0x152a58: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x152a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x152a5c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x152A5Cu;
    {
        const bool branch_taken_0x152a5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a5c) {
            ctx->pc = 0x152A6Cu;
            goto label_152a6c;
        }
    }
    ctx->pc = 0x152A64u;
    // 0x152a64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152A64u;
    {
        const bool branch_taken_0x152a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A64u;
        // 0x152a68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a64) {
            ctx->pc = 0x152A84u;
            goto label_152a84;
        }
    }
    ctx->pc = 0x152A6Cu;
label_152a6c:
    // 0x152a6c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x152a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x152a70: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x152a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x152a74: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x152A74u;
    {
        const bool branch_taken_0x152a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A74u;
        // 0x152a78: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a74) {
            ctx->pc = 0x152A34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152a34;
        }
    }
    ctx->pc = 0x152A7Cu;
label_152a7c:
    // 0x152a7c: 0x0  nop
    ctx->pc = 0x152a7cu;
    // NOP
    // 0x152a80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x152a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_152a84:
    // 0x152a84: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x152a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152a88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x152a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x152a8c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x152a8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152a90: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x152a90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x152a94: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x152a94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152a98: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x152a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152a9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x152a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152aa0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x152aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152aa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x152aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x152AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AA8u;
        // 0x152aac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152AB0u;
}
