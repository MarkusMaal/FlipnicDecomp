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

// Function: entry_001ba2b4
// Address: 0x1ba2b4 - 0x1ba4d8
void entry_001ba2b4_0x1ba2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba2b4_0x1ba2b4");
#endif

    switch (ctx->pc) {
        case 0x1ba2ccu: goto label_1ba2cc;
        case 0x1ba310u: goto label_1ba310;
        case 0x1ba324u: goto label_1ba324;
        case 0x1ba338u: goto label_1ba338;
        default: break;
    }

    ctx->pc = 0x1ba2b4u;

label_1ba2b4:
    // 0x1ba2b4: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x1ba2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1ba2b8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1ba2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1ba2bc: 0x245200d0  addiu       $s2, $v0, 0xD0
    ctx->pc = 0x1ba2bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1ba2c0: 0x24460090  addiu       $a2, $v0, 0x90
    ctx->pc = 0x1ba2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1ba2c4: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x1BA2C4u;
    SET_GPR_U32(ctx, 31, 0x1BA2CCu);
    ctx->pc = 0x1BA2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA2C4u;
    // 0x1ba2c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x1BA2C4u, 0x1BA2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA2CCu;
label_1ba2cc:
    // 0x1ba2cc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1ba2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba2d0: 0x3c023f92  lui         $v0, 0x3F92
    ctx->pc = 0x1ba2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16274 << 16));
    // 0x1ba2d4: 0x34424925  ori         $v0, $v0, 0x4925
    ctx->pc = 0x1ba2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18725);
    // 0x1ba2d8: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1ba2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1ba2dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba2e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ba2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2e8: 0x24c62ff0  addiu       $a2, $a2, 0x2FF0
    ctx->pc = 0x1ba2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12272));
    // 0x1ba2ec: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1ba2ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1ba2f0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1ba2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1ba2f4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1ba2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba2f8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1ba2f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1ba2fc: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1ba2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1ba300: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1ba300u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x1ba304: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ba304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ba308: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x1BA308u;
    SET_GPR_U32(ctx, 31, 0x1BA310u);
    ctx->pc = 0x1BA30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA308u;
    // 0x1ba30c: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x1BA308u, 0x1BA310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA310u;
label_1ba310:
    // 0x1ba310: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1ba310u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1ba314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba318: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ba318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba31c: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1BA31Cu;
    SET_GPR_U32(ctx, 31, 0x1BA324u);
    ctx->pc = 0x1BA320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA31Cu;
    // 0x1ba320: 0x24c62fe0  addiu       $a2, $a2, 0x2FE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1BA31Cu, 0x1BA324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA324u;
label_1ba324:
    // 0x1ba324: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ba324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba328: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x1ba328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1ba32c: 0x24520110  addiu       $s2, $v0, 0x110
    ctx->pc = 0x1ba32cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1ba330: 0xc07d39c  jal         func_1F4E70
    ctx->pc = 0x1BA330u;
    SET_GPR_U32(ctx, 31, 0x1BA338u);
    ctx->pc = 0x1BA334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA330u;
    // 0x1ba334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E70u, 0x1BA330u, 0x1BA338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA338u;
label_1ba338:
    // 0x1ba338: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ba338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ba33c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1ba33cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1ba340: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x1ba340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ba344: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1BA344u;
    {
        const bool branch_taken_0x1ba344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA344u;
        // 0x1ba348: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba344) {
            ctx->pc = 0x1BA2B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba2b4;
        }
    }
    ctx->pc = 0x1BA34Cu;
    // 0x1ba34c: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1ba34cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba350: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ba350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ba354: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1ba354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1ba358: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ba358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba35c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1ba35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ba360: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1ba360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1ba364: 0x3484000b  ori         $a0, $a0, 0xB
    ctx->pc = 0x1ba364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11);
    // 0x1ba368: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba36c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ba36cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba370: 0xa1070003  sb          $a3, 0x3($t0)
    ctx->pc = 0x1ba370u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ba374: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x1ba374u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba378: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x1ba378u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x1ba37c: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x1ba37cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ba380: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x1ba380u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x1ba384: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x1ba384u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x1ba388: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba38c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba390: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba390u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ba394: 0x7824f480  lq          $a0, -0xB80($at)
    ctx->pc = 0x1ba394u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x36F480u));
    // 0x1ba398: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba39c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba3a0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1ba3a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba3a8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba3ac: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ba3b0: 0x7824f4a0  lq          $a0, -0xB60($at)
    ctx->pc = 0x1ba3b0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x36F4A0u));
    // 0x1ba3b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba3b8: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba3bc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1ba3c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba3c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba3c8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ba3cc: 0x7ba40080  lq          $a0, 0x80($sp)
    ctx->pc = 0x1ba3ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ba3d0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba3d4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1ba3d8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba3dc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba3e0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ba3e4: 0x78242f60  lq          $a0, 0x2F60($at)
    ctx->pc = 0x1ba3e4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x212F60u));
    // 0x1ba3e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba3ec: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba3f0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1ba3f4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba3f8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba3fc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ba400: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x1ba400u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ba404: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba408: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba408u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1ba40c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba410: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba414: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ba418: 0x78242f70  lq          $a0, 0x2F70($at)
    ctx->pc = 0x1ba418u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x212F70u));
    // 0x1ba41c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba420: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba424: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba424u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1ba428: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba42c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba430: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ba434: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x1ba434u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1ba438: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba43c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba43cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1ba440: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba444: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba448: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ba44c: 0x78242f80  lq          $a0, 0x2F80($at)
    ctx->pc = 0x1ba44cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x212F80u));
    // 0x1ba450: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba454: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba458: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba458u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1ba45c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba460: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba464: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba464u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ba468: 0x7ba40130  lq          $a0, 0x130($sp)
    ctx->pc = 0x1ba468u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1ba46c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba470: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba470u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1ba474: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba478: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba47c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba47cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ba480: 0x78242f90  lq          $a0, 0x2F90($at)
    ctx->pc = 0x1ba480u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x212F90u));
    // 0x1ba484: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba488: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba488u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1ba48c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba490: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba494: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba494u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ba498: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x1ba498u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1ba49c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba4a0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1ba4a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba4a8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba4ac: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba4acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ba4b0: 0xc6800130  lwc1        $f0, 0x130($s4)
    ctx->pc = 0x1ba4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba4b4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ba4b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba4b8: 0x0  nop
    ctx->pc = 0x1ba4b8u;
    // NOP
    // 0x1ba4bc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA4BCu;
    {
        const bool branch_taken_0x1ba4bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4BCu;
        // 0x1ba4c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4bc) {
            ctx->pc = 0x1BA4D8u;
            return;
        }
    }
    ctx->pc = 0x1BA4C4u;
    // 0x1ba4c4: 0xc6800134  lwc1        $f0, 0x134($s4)
    ctx->pc = 0x1ba4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba4c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ba4c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba4cc: 0x0  nop
    ctx->pc = 0x1ba4ccu;
    // NOP
    // 0x1ba4d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA4D0u;
    {
        const bool branch_taken_0x1ba4d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba4d0) {
            ctx->pc = 0x1BA4E0u;
            return;
        }
    }
    ctx->pc = 0x1BA4D8u;
}
