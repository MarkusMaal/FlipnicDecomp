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

// Function: FUN_00152b80
// Address: 0x152b80 - 0x152c50
void FUN_00152b80_0x152b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152b80_0x152b80");
#endif

    switch (ctx->pc) {
        case 0x152bd4u: goto label_152bd4;
        case 0x152bf8u: goto label_152bf8;
        default: break;
    }

    ctx->pc = 0x152b80u;

    // 0x152b80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x152b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x152b84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x152b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x152b88: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x152b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x152b8c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x152b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x152b90: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x152b90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b94: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x152b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x152b98: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x152b98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b9c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x152b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x152ba0: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x152ba0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x152ba4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x152ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x152ba8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x152ba8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x152bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x152bb0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x152bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x152bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x152bb8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x152bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bbc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x152bbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x152bc0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x152bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bc4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x152bc4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x152bc8: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x152BC8u;
    {
        const bool branch_taken_0x152bc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x152BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BC8u;
        // 0x152bcc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bc8) {
            ctx->pc = 0x152C1Cu;
            goto label_152c1c;
        }
    }
    ctx->pc = 0x152BD0u;
    // 0x152bd0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x152bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_152bd4:
    // 0x152bd4: 0x26c80010  addiu       $t0, $s6, 0x10
    ctx->pc = 0x152bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x152bd8: 0x26c70020  addiu       $a3, $s6, 0x20
    ctx->pc = 0x152bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x152bdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x152bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152be0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152be4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x152be4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152be8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x152be8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bec: 0x26d60060  addiu       $s6, $s6, 0x60
    ctx->pc = 0x152becu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    // 0x152bf0: 0xc0558bc  jal         func_1562F0
    ctx->pc = 0x152BF0u;
    SET_GPR_U32(ctx, 31, 0x152BF8u);
    ctx->pc = 0x152BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152BF0u;
    // 0x152bf4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562F0u, 0x152BF0u, 0x152BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BF8u;
label_152bf8:
    // 0x152bf8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x152bf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x152bfc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x152BFCu;
    {
        const bool branch_taken_0x152bfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152bfc) {
            ctx->pc = 0x152C0Cu;
            goto label_152c0c;
        }
    }
    ctx->pc = 0x152C04u;
    // 0x152c04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152C04u;
    {
        const bool branch_taken_0x152c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C04u;
        // 0x152c08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c04) {
            ctx->pc = 0x152C24u;
            goto label_152c24;
        }
    }
    ctx->pc = 0x152C0Cu;
label_152c0c:
    // 0x152c0c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x152c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x152c10: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x152c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x152c14: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x152C14u;
    {
        const bool branch_taken_0x152c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C14u;
        // 0x152c18: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c14) {
            ctx->pc = 0x152BD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152bd4;
        }
    }
    ctx->pc = 0x152C1Cu;
label_152c1c:
    // 0x152c1c: 0x0  nop
    ctx->pc = 0x152c1cu;
    // NOP
    // 0x152c20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x152c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_152c24:
    // 0x152c24: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x152c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152c28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x152c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x152c2c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x152c2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152c30: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x152c30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x152c34: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x152c34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152c38: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x152c38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152c3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x152c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152c40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x152c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152c44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x152c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152c48: 0x3e00008  jr          $ra
    ctx->pc = 0x152C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C48u;
        // 0x152c4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152C50u;
}
