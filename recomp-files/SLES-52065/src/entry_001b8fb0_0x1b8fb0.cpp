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

// Function: entry_001b8fb0
// Address: 0x1b8fb0 - 0x1b9124
void entry_001b8fb0_0x1b8fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8fb0_0x1b8fb0");
#endif

    switch (ctx->pc) {
        case 0x1b8fc8u: goto label_1b8fc8;
        case 0x1b8ff4u: goto label_1b8ff4;
        case 0x1b9008u: goto label_1b9008;
        case 0x1b901cu: goto label_1b901c;
        default: break;
    }

    ctx->pc = 0x1b8fb0u;

label_1b8fb0:
    // 0x1b8fb0: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x1b8fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1b8fb4: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1b8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1b8fb8: 0x24720080  addiu       $s2, $v1, 0x80
    ctx->pc = 0x1b8fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1b8fbc: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x1b8fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1b8fc0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1B8FC0u;
    SET_GPR_U32(ctx, 31, 0x1B8FC8u);
    ctx->pc = 0x1B8FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FC0u;
    // 0x1b8fc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1B8FC0u, 0x1B8FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FC8u;
label_1b8fc8:
    // 0x1b8fc8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1b8fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8fcc: 0x3c023f92  lui         $v0, 0x3F92
    ctx->pc = 0x1b8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16274 << 16));
    // 0x1b8fd0: 0x34424925  ori         $v0, $v0, 0x4925
    ctx->pc = 0x1b8fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18725);
    // 0x1b8fd4: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1b8fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1b8fd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b8fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b8fdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8fe0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b8fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8fe4: 0x24c62f40  addiu       $a2, $a2, 0x2F40
    ctx->pc = 0x1b8fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12096));
    // 0x1b8fe8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b8fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b8fec: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x1B8FECu;
    SET_GPR_U32(ctx, 31, 0x1B8FF4u);
    ctx->pc = 0x1B8FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FECu;
    // 0x1b8ff0: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x1B8FECu, 0x1B8FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FF4u;
label_1b8ff4:
    // 0x1b8ff4: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1b8ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1b8ff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ffc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b8ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9000: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1B9000u;
    SET_GPR_U32(ctx, 31, 0x1B9008u);
    ctx->pc = 0x1B9004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9000u;
    // 0x1b9004: 0x24c62f30  addiu       $a2, $a2, 0x2F30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1B9000u, 0x1B9008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9008u;
label_1b9008:
    // 0x1b9008: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b9008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b900c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x1b900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1b9010: 0x245200a0  addiu       $s2, $v0, 0xA0
    ctx->pc = 0x1b9010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1b9014: 0xc07d39c  jal         func_1F4E70
    ctx->pc = 0x1B9014u;
    SET_GPR_U32(ctx, 31, 0x1B901Cu);
    ctx->pc = 0x1B9018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9014u;
    // 0x1b9018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E70u, 0x1B9014u, 0x1B901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B901Cu;
label_1b901c:
    // 0x1b901c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b901cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b9020: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1b9020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1b9024: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1b9024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b9028: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1B9028u;
    {
        const bool branch_taken_0x1b9028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9028u;
        // 0x1b902c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9028) {
            ctx->pc = 0x1B8FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8fb0;
        }
    }
    ctx->pc = 0x1B9030u;
    // 0x1b9030: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x1b9030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9034: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1b9034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b9038: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1b9038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1b903c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b903cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b9040: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1b9040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1b9044: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x1b9044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x1b9048: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b904c: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x1b904cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b9050: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1b9050u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9054: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1b9054u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1b9058: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x1b9058u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b905c: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1b905cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x1b9060: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1b9060u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1b9064: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9068: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b9068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b906c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b906cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1b9070: 0x7824f410  lq          $a0, -0xBF0($at)
    ctx->pc = 0x1b9070u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x36F410u));
    // 0x1b9074: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9078: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b907c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b907cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1b9080: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9084: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b9084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b9088: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b9088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1b908c: 0x7824f430  lq          $a0, -0xBD0($at)
    ctx->pc = 0x1b908cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x36F430u));
    // 0x1b9090: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9094: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b9094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b9098: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b9098u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1b909c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b90a0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b90a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b90a4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b90a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1b90a8: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x1b90a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b90ac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b90b0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b90b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1b90b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b90b8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b90b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b90bc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b90bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1b90c0: 0x78242f10  lq          $a0, 0x2F10($at)
    ctx->pc = 0x1b90c0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x212F10u));
    // 0x1b90c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b90c8: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b90c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b90cc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b90ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1b90d0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b90d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b90d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b90d8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b90d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1b90dc: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1b90dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b90e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b90e4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b90e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1b90e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b90ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b90f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1b90f4: 0x78242f20  lq          $a0, 0x2F20($at)
    ctx->pc = 0x1b90f4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x212F20u));
    // 0x1b90f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b90fc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b90fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1b9100: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9104: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b9104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b9108: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b9108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1b910c: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1b910cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b9110: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9114: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b9114u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1b9118: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b911c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b9120: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b9120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1b9124u;
}
