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

// Function: FUN_0012e510
// Address: 0x12e510 - 0x12e64c
void FUN_0012e510_0x12e510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012e510_0x12e510");
#endif

    switch (ctx->pc) {
        case 0x12e578u: goto label_12e578;
        case 0x12e580u: goto label_12e580;
        case 0x12e590u: goto label_12e590;
        case 0x12e5b0u: goto label_12e5b0;
        case 0x12e5b8u: goto label_12e5b8;
        case 0x12e5c8u: goto label_12e5c8;
        default: break;
    }

    ctx->pc = 0x12e510u;

    // 0x12e510: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12e510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12e514: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12e514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12e518: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12e518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12e51c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12e51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12e520: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12e520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12e524: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12e524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12e528: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12e528u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e52c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12e52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12e530: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12e530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e534: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12e534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e53c: 0x2321823  subu        $v1, $s1, $s2
    ctx->pc = 0x12e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x12e540: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E540u;
    {
        const bool branch_taken_0x12e540 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E540u;
        // 0x12e544: 0x38143  sra         $s0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e540) {
            ctx->pc = 0x12E550u;
            goto label_12e550;
        }
    }
    ctx->pc = 0x12E548u;
    // 0x12e548: 0x2463001f  addiu       $v1, $v1, 0x1F
    ctx->pc = 0x12e548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x12e54c: 0x38143  sra         $s0, $v1, 5
    ctx->pc = 0x12e54cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 5));
label_12e550:
    // 0x12e550: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x12e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12e554: 0x3c010800  lui         $at, 0x800
    ctx->pc = 0x12e554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2048 << 16));
    // 0x12e558: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x12e558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x12e55c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E55Cu;
    {
        const bool branch_taken_0x12e55c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E55Cu;
        // 0x12e560: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e55c) {
            ctx->pc = 0x12E580u;
            goto label_12e580;
        }
    }
    ctx->pc = 0x12E564u;
    // 0x12e564: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12e564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12e568: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x12e568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x12e56c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12e570: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12E570u;
    SET_GPR_U32(ctx, 31, 0x12E578u);
    ctx->pc = 0x12E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E570u;
    // 0x12e574: 0x24a5ecd0  addiu       $a1, $a1, -0x1330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12E570u, 0x12E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E578u;
label_12e578:
    // 0x12e578: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x12E578u;
    SET_GPR_U32(ctx, 31, 0x12E580u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x12E578u, 0x12E580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E580u;
label_12e580:
    // 0x12e580: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12E580u;
    {
        const bool branch_taken_0x12e580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E580u;
        // 0x12e584: 0x102140  sll         $a0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e580) {
            ctx->pc = 0x12E628u;
            goto label_12e628;
        }
    }
    ctx->pc = 0x12E588u;
    // 0x12e588: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x12E588u;
    SET_GPR_U32(ctx, 31, 0x12E590u);
    ctx->pc = 0x12E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E588u;
    // 0x12e58c: 0x26740008  addiu       $s4, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12E588u, 0x12E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E590u;
label_12e590:
    // 0x12e590: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e590u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e594: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E594u;
    {
        const bool branch_taken_0x12e594 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E594u;
        // 0x12e598: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e594) {
            ctx->pc = 0x12E5B8u;
            goto label_12e5b8;
        }
    }
    ctx->pc = 0x12E59Cu;
    // 0x12e59c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12e59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12e5a0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x12e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x12e5a4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12e5a8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12E5A8u;
    SET_GPR_U32(ctx, 31, 0x12E5B0u);
    ctx->pc = 0x12E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5A8u;
    // 0x12e5ac: 0x24a5ecf0  addiu       $a1, $a1, -0x1310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12E5A8u, 0x12E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5B0u;
label_12e5b0:
    // 0x12e5b0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x12E5B0u;
    SET_GPR_U32(ctx, 31, 0x12E5B8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x12E5B0u, 0x12E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5B8u;
label_12e5b8:
    // 0x12e5b8: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x12e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x12e5bc: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x12e5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x12e5c0: 0x12510019  beq         $s2, $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x12E5C0u;
    {
        const bool branch_taken_0x12e5c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x12E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5C0u;
        // 0x12e5c4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5c0) {
            ctx->pc = 0x12E628u;
            goto label_12e628;
        }
    }
    ctx->pc = 0x12E5C8u;
label_12e5c8:
    // 0x12e5c8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E5C8u;
    {
        const bool branch_taken_0x12e5c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e5c8) {
            ctx->pc = 0x12E610u;
            goto label_12e610;
        }
    }
    ctx->pc = 0x12E5D0u;
    // 0x12e5d0: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x12e5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e5d4: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x12e5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e5d8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x12e5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e5dc: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x12e5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e5e0: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x12e5e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x12e5e4: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x12e5e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12e5e8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x12e5e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x12e5ec: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x12e5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x12e5f0: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x12e5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e5f4: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x12e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e5f8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x12e5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e5fc: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x12e5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e600: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x12e600u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x12e604: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x12e604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x12e608: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x12e608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x12e60c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x12e60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_12e610:
    // 0x12e610: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x12e610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12e614: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x12e614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x12e618: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x12e618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x12e61c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12e620: 0x1651ffe9  bne         $s2, $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12E620u;
    {
        const bool branch_taken_0x12e620 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x12E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E620u;
        // 0x12e624: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e620) {
            ctx->pc = 0x12E5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e5c8;
        }
    }
    ctx->pc = 0x12E628u;
label_12e628:
    // 0x12e628: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12e628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e62c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12e62cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12e630: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12e630u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12e634: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12e634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12e638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e63c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12e63cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e644: 0x3e00008  jr          $ra
    ctx->pc = 0x12E644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E644u;
        // 0x12e648: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E64Cu;
}
