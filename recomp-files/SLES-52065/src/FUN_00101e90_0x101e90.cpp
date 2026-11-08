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

// Function: FUN_00101e90
// Address: 0x101e90 - 0x101ff4
void FUN_00101e90_0x101e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00101e90_0x101e90");
#endif

    switch (ctx->pc) {
        case 0x101eb4u: goto label_101eb4;
        case 0x101ee0u: goto label_101ee0;
        case 0x101f04u: goto label_101f04;
        case 0x101f10u: goto label_101f10;
        case 0x101f18u: goto label_101f18;
        case 0x101f20u: goto label_101f20;
        case 0x101f2cu: goto label_101f2c;
        case 0x101f34u: goto label_101f34;
        case 0x101f54u: goto label_101f54;
        case 0x101f68u: goto label_101f68;
        case 0x101f70u: goto label_101f70;
        case 0x101f78u: goto label_101f78;
        case 0x101f80u: goto label_101f80;
        case 0x101f88u: goto label_101f88;
        case 0x101f90u: goto label_101f90;
        case 0x101f98u: goto label_101f98;
        case 0x101fa0u: goto label_101fa0;
        case 0x101fa8u: goto label_101fa8;
        case 0x101fb0u: goto label_101fb0;
        case 0x101fb8u: goto label_101fb8;
        case 0x101fc0u: goto label_101fc0;
        case 0x101fc8u: goto label_101fc8;
        case 0x101fd0u: goto label_101fd0;
        case 0x101fd8u: goto label_101fd8;
        default: break;
    }

    ctx->pc = 0x101e90u;

    // 0x101e90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x101e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x101e94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x101e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x101e98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x101e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x101e9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x101ea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101ea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x101ea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101eac: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x101EACu;
    SET_GPR_U32(ctx, 31, 0x101EB4u);
    ctx->pc = 0x101EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EACu;
    // 0x101eb0: 0x8c840060  lw          $a0, 0x60($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x101EACu, 0x101EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EB4u;
label_101eb4:
    // 0x101eb4: 0x8e110060  lw          $s1, 0x60($s0)
    ctx->pc = 0x101eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x101eb8: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x101EB8u;
    {
        const bool branch_taken_0x101eb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x101EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EB8u;
        // 0x101ebc: 0x26220570  addiu       $v0, $s1, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101eb8) {
            ctx->pc = 0x101F18u;
            goto label_101f18;
        }
    }
    ctx->pc = 0x101EC0u;
    // 0x101ec0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x101EC0u;
    {
        const bool branch_taken_0x101ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101ec0) {
            ctx->pc = 0x101EE0u;
            goto label_101ee0;
        }
    }
    ctx->pc = 0x101EC8u;
    // 0x101ec8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x101ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x101ecc: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x101eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x101ed0: 0x2442b8b0  addiu       $v0, $v0, -0x4750
    ctx->pc = 0x101ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949040));
    // 0x101ed4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101ed8: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x101ED8u;
    SET_GPR_U32(ctx, 31, 0x101EE0u);
    ctx->pc = 0x101EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101ED8u;
    // 0x101edc: 0xae220574  sw          $v0, 0x574($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x101ED8u, 0x101EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EE0u;
label_101ee0:
    // 0x101ee0: 0x262203b0  addiu       $v0, $s1, 0x3B0
    ctx->pc = 0x101ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
    // 0x101ee4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x101EE4u;
    {
        const bool branch_taken_0x101ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EE4u;
        // 0x101ee8: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ee4) {
            ctx->pc = 0x101F08u;
            goto label_101f08;
        }
    }
    ctx->pc = 0x101EECu;
    // 0x101eec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x101eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x101ef0: 0x262403c0  addiu       $a0, $s1, 0x3C0
    ctx->pc = 0x101ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
    // 0x101ef4: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x101ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x101ef8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101efc: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x101EFCu;
    SET_GPR_U32(ctx, 31, 0x101F04u);
    ctx->pc = 0x101F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EFCu;
    // 0x101f00: 0xae2203b4  sw          $v0, 0x3B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 948), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x101EFCu, 0x101F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F04u;
label_101f04:
    // 0x101f04: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x101f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_101f08:
    // 0x101f08: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x101F08u;
    SET_GPR_U32(ctx, 31, 0x101F10u);
    ctx->pc = 0x101F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F08u;
    // 0x101f0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x101F08u, 0x101F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F10u;
label_101f10:
    // 0x101f10: 0xc0401a4  jal         func_100690
    ctx->pc = 0x101F10u;
    SET_GPR_U32(ctx, 31, 0x101F18u);
    ctx->pc = 0x101F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F10u;
    // 0x101f14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x101F10u, 0x101F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F18u;
label_101f18:
    // 0x101f18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x101f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x101f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101f20:
    // 0x101f20: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x101f20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x101f24: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x101F24u;
    SET_GPR_U32(ctx, 31, 0x101F2Cu);
    ctx->pc = 0x101F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F24u;
    // 0x101f28: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x101F24u, 0x101F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F2Cu;
label_101f2c:
    // 0x101f2c: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x101F2Cu;
    SET_GPR_U32(ctx, 31, 0x101F34u);
    ctx->pc = 0x101F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F2Cu;
    // 0x101f30: 0x8e640028  lw          $a0, 0x28($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x101F2Cu, 0x101F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F34u;
label_101f34:
    // 0x101f34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x101f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x101f38: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x101f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x101f3c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x101F3Cu;
    {
        const bool branch_taken_0x101f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F3Cu;
        // 0x101f40: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f3c) {
            ctx->pc = 0x101F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101f20;
        }
    }
    ctx->pc = 0x101F44u;
    // 0x101f44: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x101f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x101f48: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x101f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x101f4c: 0xc07a394  jal         func_1E8E50
    ctx->pc = 0x101F4Cu;
    SET_GPR_U32(ctx, 31, 0x101F54u);
    ctx->pc = 0x101F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F4Cu;
    // 0x101f50: 0x24a52980  addiu       $a1, $a1, 0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x101F4Cu, 0x101F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F54u;
label_101f54:
    // 0x101f54: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x101f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x101f58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x101F58u;
    {
        const bool branch_taken_0x101f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x101f58) {
            ctx->pc = 0x101F68u;
            goto label_101f68;
        }
    }
    ctx->pc = 0x101F60u;
    // 0x101f60: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x101F60u;
    SET_GPR_U32(ctx, 31, 0x101F68u);
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x101F60u, 0x101F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F68u;
label_101f68:
    // 0x101f68: 0xc0464fc  jal         func_1193F0
    ctx->pc = 0x101F68u;
    SET_GPR_U32(ctx, 31, 0x101F70u);
    ctx->pc = 0x1193F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1193F0u, 0x101F68u, 0x101F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F70u;
label_101f70:
    // 0x101f70: 0xc0485d0  jal         func_121740
    ctx->pc = 0x101F70u;
    SET_GPR_U32(ctx, 31, 0x101F78u);
    ctx->pc = 0x121740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121740u, 0x101F70u, 0x101F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F78u;
label_101f78:
    // 0x101f78: 0xc060878  jal         func_1821E0
    ctx->pc = 0x101F78u;
    SET_GPR_U32(ctx, 31, 0x101F80u);
    ctx->pc = 0x1821E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1821E0u, 0x101F78u, 0x101F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F80u;
label_101f80:
    // 0x101f80: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x101F80u;
    SET_GPR_U32(ctx, 31, 0x101F88u);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x101F80u, 0x101F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F88u;
label_101f88:
    // 0x101f88: 0xc051280  jal         func_144A00
    ctx->pc = 0x101F88u;
    SET_GPR_U32(ctx, 31, 0x101F90u);
    ctx->pc = 0x101F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F88u;
    // 0x101f8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A00u, 0x101F88u, 0x101F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F90u;
label_101f90:
    // 0x101f90: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x101F90u;
    SET_GPR_U32(ctx, 31, 0x101F98u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x101F90u, 0x101F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F98u;
label_101f98:
    // 0x101f98: 0xc049f48  jal         func_127D20
    ctx->pc = 0x101F98u;
    SET_GPR_U32(ctx, 31, 0x101FA0u);
    ctx->pc = 0x101F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F98u;
    // 0x101f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D20u, 0x101F98u, 0x101FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FA0u;
label_101fa0:
    // 0x101fa0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x101FA0u;
    SET_GPR_U32(ctx, 31, 0x101FA8u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x101FA0u, 0x101FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FA8u;
label_101fa8:
    // 0x101fa8: 0xc04a014  jal         func_128050
    ctx->pc = 0x101FA8u;
    SET_GPR_U32(ctx, 31, 0x101FB0u);
    ctx->pc = 0x101FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FA8u;
    // 0x101fac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128050u, 0x101FA8u, 0x101FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FB0u;
label_101fb0:
    // 0x101fb0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x101FB0u;
    SET_GPR_U32(ctx, 31, 0x101FB8u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x101FB0u, 0x101FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FB8u;
label_101fb8:
    // 0x101fb8: 0xc04a030  jal         func_1280C0
    ctx->pc = 0x101FB8u;
    SET_GPR_U32(ctx, 31, 0x101FC0u);
    ctx->pc = 0x101FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FB8u;
    // 0x101fbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280C0u, 0x101FB8u, 0x101FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FC0u;
label_101fc0:
    // 0x101fc0: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x101FC0u;
    SET_GPR_U32(ctx, 31, 0x101FC8u);
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x101FC0u, 0x101FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FC8u;
label_101fc8:
    // 0x101fc8: 0xc05fee8  jal         func_17FBA0
    ctx->pc = 0x101FC8u;
    SET_GPR_U32(ctx, 31, 0x101FD0u);
    ctx->pc = 0x101FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FC8u;
    // 0x101fcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FBA0u, 0x101FC8u, 0x101FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FD0u;
label_101fd0:
    // 0x101fd0: 0xc0617f4  jal         func_185FD0
    ctx->pc = 0x101FD0u;
    SET_GPR_U32(ctx, 31, 0x101FD8u);
    ctx->pc = 0x185FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185FD0u, 0x101FD0u, 0x101FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FD8u;
label_101fd8:
    // 0x101fd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x101fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101fdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x101fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101fe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101fec: 0x3e00008  jr          $ra
    ctx->pc = 0x101FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FECu;
        // 0x101ff0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101FF4u;
}
