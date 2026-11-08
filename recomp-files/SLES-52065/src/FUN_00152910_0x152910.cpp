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

// Function: FUN_00152910
// Address: 0x152910 - 0x1529e0
void FUN_00152910_0x152910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152910_0x152910");
#endif

    switch (ctx->pc) {
        case 0x152964u: goto label_152964;
        case 0x152988u: goto label_152988;
        default: break;
    }

    ctx->pc = 0x152910u;

    // 0x152910: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x152910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x152914: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x152914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x152918: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x152918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x15291c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x15291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x152920: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x152920u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152924: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x152924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x152928: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x152928u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15292c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15292cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x152930: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x152930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x152934: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x152934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x152938: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x152938u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15293c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15293cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x152940: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x152940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152944: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x152944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x152948: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x152948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15294c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15294cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x152950: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x152950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152954: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x152954u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x152958: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x152958u;
    {
        const bool branch_taken_0x152958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152958u;
        // 0x15295c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152958) {
            ctx->pc = 0x1529ACu;
            goto label_1529ac;
        }
    }
    ctx->pc = 0x152960u;
    // 0x152960: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x152960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_152964:
    // 0x152964: 0x26c70010  addiu       $a3, $s6, 0x10
    ctx->pc = 0x152964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x152968: 0x26c60020  addiu       $a2, $s6, 0x20
    ctx->pc = 0x152968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x15296c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15296cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152970: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152974: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x152974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152978: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x152978u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15297c: 0x26d60030  addiu       $s6, $s6, 0x30
    ctx->pc = 0x15297cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x152980: 0xc0554d8  jal         func_155360
    ctx->pc = 0x152980u;
    SET_GPR_U32(ctx, 31, 0x152988u);
    ctx->pc = 0x152984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152980u;
    // 0x152984: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x155360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155360u, 0x152980u, 0x152988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152988u;
label_152988:
    // 0x152988: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x152988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15298c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15298Cu;
    {
        const bool branch_taken_0x15298c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15298c) {
            ctx->pc = 0x15299Cu;
            goto label_15299c;
        }
    }
    ctx->pc = 0x152994u;
    // 0x152994: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152994u;
    {
        const bool branch_taken_0x152994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152994u;
        // 0x152998: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152994) {
            ctx->pc = 0x1529B4u;
            goto label_1529b4;
        }
    }
    ctx->pc = 0x15299Cu;
label_15299c:
    // 0x15299c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15299cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1529a0: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x1529a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1529a4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1529A4u;
    {
        const bool branch_taken_0x1529a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1529A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529A4u;
        // 0x1529a8: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529a4) {
            ctx->pc = 0x152964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152964;
        }
    }
    ctx->pc = 0x1529ACu;
label_1529ac:
    // 0x1529ac: 0x0  nop
    ctx->pc = 0x1529acu;
    // NOP
    // 0x1529b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1529b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1529b4:
    // 0x1529b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1529b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1529b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1529b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1529bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1529bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1529c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1529c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1529c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1529c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1529c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1529c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1529cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1529ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1529d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1529d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1529d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1529d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1529d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1529D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1529DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529D8u;
        // 0x1529dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1529D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1529E0u;
}
