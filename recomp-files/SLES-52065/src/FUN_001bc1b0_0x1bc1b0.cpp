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

// Function: FUN_001bc1b0
// Address: 0x1bc1b0 - 0x1bc308
void FUN_001bc1b0_0x1bc1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bc1b0_0x1bc1b0");
#endif

    switch (ctx->pc) {
        case 0x1bc224u: goto label_1bc224;
        case 0x1bc22cu: goto label_1bc22c;
        case 0x1bc234u: goto label_1bc234;
        case 0x1bc258u: goto label_1bc258;
        case 0x1bc260u: goto label_1bc260;
        case 0x1bc274u: goto label_1bc274;
        case 0x1bc288u: goto label_1bc288;
        case 0x1bc2d4u: goto label_1bc2d4;
        default: break;
    }

    ctx->pc = 0x1bc1b0u;

    // 0x1bc1b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bc1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1bc1b4: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x1bc1b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x1bc1b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bc1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1bc1bc: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1bc1bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1bc1c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bc1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bc1c4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1bc1c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1bc1c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bc1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bc1cc: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1bc1ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1bc1d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bc1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bc1d4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1bc1d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1bc1d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bc1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bc1dc: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1bc1dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1bc1e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bc1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bc1e4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1bc1e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc1e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bc1ec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1bc1ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc1f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc1f4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1bc1f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc1f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bc1fc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1bc1fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc200: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1bc200u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1bc204: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC204u;
    {
        const bool branch_taken_0x1bc204 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC204u;
        // 0x1bc208: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc204) {
            ctx->pc = 0x1BC22Cu;
            goto label_1bc22c;
        }
    }
    ctx->pc = 0x1BC20Cu;
    // 0x1bc20c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bc20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bc210: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bc210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bc214: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bc214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bc218: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bc218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bc21c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BC21Cu;
    SET_GPR_U32(ctx, 31, 0x1BC224u);
    ctx->pc = 0x1BC220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC21Cu;
    // 0x1bc220: 0x24a51160  addiu       $a1, $a1, 0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BC21Cu, 0x1BC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC224u;
label_1bc224:
    // 0x1bc224: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BC224u;
    SET_GPR_U32(ctx, 31, 0x1BC22Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BC224u, 0x1BC22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC22Cu;
label_1bc22c:
    // 0x1bc22c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BC22Cu;
    SET_GPR_U32(ctx, 31, 0x1BC234u);
    ctx->pc = 0x1BC230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC22Cu;
    // 0x1bc230: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BC22Cu, 0x1BC234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC234u;
label_1bc234:
    // 0x1bc234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bc234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc238: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BC238u;
    {
        const bool branch_taken_0x1bc238 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC238u;
        // 0x1bc23c: 0x2611000c  addiu       $s1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc238) {
            ctx->pc = 0x1BC264u;
            goto label_1bc264;
        }
    }
    ctx->pc = 0x1BC240u;
    // 0x1bc240: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bc240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bc244: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bc244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bc248: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bc248u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bc24c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bc250: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BC250u;
    SET_GPR_U32(ctx, 31, 0x1BC258u);
    ctx->pc = 0x1BC254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC250u;
    // 0x1bc254: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BC250u, 0x1BC258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC258u;
label_1bc258:
    // 0x1bc258: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BC258u;
    SET_GPR_U32(ctx, 31, 0x1BC260u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BC258u, 0x1BC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC260u;
label_1bc260:
    // 0x1bc260: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x1bc260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1bc264:
    // 0x1bc264: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC264u;
    {
        const bool branch_taken_0x1bc264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC264u;
        // 0x1bc268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc264) {
            ctx->pc = 0x1BC294u;
            goto label_1bc294;
        }
    }
    ctx->pc = 0x1BC26Cu;
    // 0x1bc26c: 0xc048de8  jal         func_1237A0
    ctx->pc = 0x1BC26Cu;
    SET_GPR_U32(ctx, 31, 0x1BC274u);
    ctx->pc = 0x1BC270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC26Cu;
    // 0x1bc270: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237A0u, 0x1BC26Cu, 0x1BC274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC274u;
label_1bc274:
    // 0x1bc274: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bc274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bc278: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bc278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1bc27c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1bc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bc280: 0xc048da8  jal         func_1236A0
    ctx->pc = 0x1BC280u;
    SET_GPR_U32(ctx, 31, 0x1BC288u);
    ctx->pc = 0x1BC284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC280u;
    // 0x1bc284: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1236A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236A0u, 0x1BC280u, 0x1BC288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC288u;
label_1bc288:
    // 0x1bc288: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bc288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1bc28c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1bc28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bc290: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1bc290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1bc294:
    // 0x1bc294: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1bc294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bc298: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bc298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bc29c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bc2a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc2a4: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x1bc2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x1bc2a8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC2A8u;
    {
        const bool branch_taken_0x1bc2a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2A8u;
        // 0x1bc2ac: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2a8) {
            ctx->pc = 0x1BC2B8u;
            goto label_1bc2b8;
        }
    }
    ctx->pc = 0x1BC2B0u;
    // 0x1bc2b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC2B0u;
    {
        const bool branch_taken_0x1bc2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2B0u;
        // 0x1bc2b4: 0xaeb00000  sw          $s0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2b0) {
            ctx->pc = 0x1BC2BCu;
            goto label_1bc2bc;
        }
    }
    ctx->pc = 0x1BC2B8u;
label_1bc2b8:
    // 0x1bc2b8: 0xaeb00004  sw          $s0, 0x4($s5)
    ctx->pc = 0x1bc2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
label_1bc2bc:
    // 0x1bc2bc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1bc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1bc2c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bc2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bc2c4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1bc2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1bc2c8: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x1bc2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1bc2cc: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x1BC2CCu;
    SET_GPR_U32(ctx, 31, 0x1BC2D4u);
    ctx->pc = 0x1BC2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC2CCu;
    // 0x1bc2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x1BC2CCu, 0x1BC2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC2D4u;
label_1bc2d4:
    // 0x1bc2d4: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC2D4u;
    {
        const bool branch_taken_0x1bc2d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2D4u;
        // 0x1bc2d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2d4) {
            ctx->pc = 0x1BC2E0u;
            goto label_1bc2e0;
        }
    }
    ctx->pc = 0x1BC2DCu;
    // 0x1bc2dc: 0xaed0000c  sw          $s0, 0xC($s6)
    ctx->pc = 0x1bc2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 16));
label_1bc2e0:
    // 0x1bc2e0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bc2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bc2e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bc2e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bc2e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bc2e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc2ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bc2ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc2f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bc2f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc2f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bc2f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc2f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc2fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc300: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC300u;
        // 0x1bc304: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC308u;
}
