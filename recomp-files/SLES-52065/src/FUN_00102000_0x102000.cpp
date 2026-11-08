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

// Function: FUN_00102000
// Address: 0x102000 - 0x1020e4
void FUN_00102000_0x102000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00102000_0x102000");
#endif

    switch (ctx->pc) {
        case 0x102034u: goto label_102034;
        case 0x10209cu: goto label_10209c;
        case 0x1020a8u: goto label_1020a8;
        default: break;
    }

    ctx->pc = 0x102000u;

    // 0x102000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x102000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x102004: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x102004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x102008: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x102008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10200c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10200cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x102010: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x102010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x102014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x102014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x102018: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x102018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10201c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10201cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102020: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x102020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x102024: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x102024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x102028: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x102028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x10202c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x10202Cu;
    {
        const bool branch_taken_0x10202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10202Cu;
        // 0x102030: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10202c) {
            ctx->pc = 0x1020BCu;
            goto label_1020bc;
        }
    }
    ctx->pc = 0x102034u;
label_102034:
    // 0x102034: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x102034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x102038: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x102038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x10203c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x10203cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x102040: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x102040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x102044: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x102044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x102048: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x102048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10204c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10204cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x102050: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x102050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x102054: 0x84630228  lh          $v1, 0x228($v1)
    ctx->pc = 0x102054u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 552)));
    // 0x102058: 0x28610000  slti        $at, $v1, 0x0
    ctx->pc = 0x102058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x10205c: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x10205Cu;
    {
        const bool branch_taken_0x10205c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10205c) {
            ctx->pc = 0x1020B8u;
            goto label_1020b8;
        }
    }
    ctx->pc = 0x102064u;
    // 0x102064: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x102064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x102068: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x102068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10206c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10206cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x102070: 0xc48202f0  lwc1        $f2, 0x2F0($a0)
    ctx->pc = 0x102070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x102074: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x102074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x102078: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x102078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x10207c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10207cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102080: 0x0  nop
    ctx->pc = 0x102080u;
    // NOP
    // 0x102084: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x102084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x102088: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x102088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10208c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x10208cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x102090: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x102090u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102094: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x102094u;
    SET_GPR_U32(ctx, 31, 0x10209Cu);
    ctx->pc = 0x102098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102094u;
    // 0x102098: 0x7c660000  sq          $a2, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x102094u, 0x10209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10209Cu;
label_10209c:
    // 0x10209c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020a0: 0xc0513d0  jal         func_144F40
    ctx->pc = 0x1020A0u;
    SET_GPR_U32(ctx, 31, 0x1020A8u);
    ctx->pc = 0x1020A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1020A0u;
    // 0x1020a4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144F40u, 0x1020A0u, 0x1020A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020A8u;
label_1020a8:
    // 0x1020a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1020a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1020ac: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x1020acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1020b0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1020B0u;
    {
        const bool branch_taken_0x1020b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1020b0) {
            ctx->pc = 0x1020CCu;
            goto label_1020cc;
        }
    }
    ctx->pc = 0x1020B8u;
label_1020b8:
    // 0x1020b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1020b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1020bc:
    // 0x1020bc: 0x0  nop
    ctx->pc = 0x1020bcu;
    // NOP
    // 0x1020c0: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x1020c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1020c4: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1020C4u;
    {
        const bool branch_taken_0x1020c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1020c4) {
            ctx->pc = 0x102034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102034;
        }
    }
    ctx->pc = 0x1020CCu;
label_1020cc:
    // 0x1020cc: 0x0  nop
    ctx->pc = 0x1020ccu;
    // NOP
    // 0x1020d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1020d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1020d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1020d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1020d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1020d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1020dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1020DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1020E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020DCu;
        // 0x1020e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1020DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1020E4u;
}
