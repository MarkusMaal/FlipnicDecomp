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

// Function: FUN_001d1150
// Address: 0x1d1150 - 0x1d12b0
void FUN_001d1150_0x1d1150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1150_0x1d1150");
#endif

    switch (ctx->pc) {
        case 0x1d11b0u: goto label_1d11b0;
        case 0x1d11d0u: goto label_1d11d0;
        case 0x1d11d8u: goto label_1d11d8;
        case 0x1d1208u: goto label_1d1208;
        case 0x1d1228u: goto label_1d1228;
        case 0x1d1230u: goto label_1d1230;
        case 0x1d126cu: goto label_1d126c;
        default: break;
    }

    ctx->pc = 0x1d1150u;

    // 0x1d1150: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d1150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d1154: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d1154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d1158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d1158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d115c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d115cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d1160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d1160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d1164: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d1164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d116c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d116cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1170: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d1170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d1174: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d1174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d1178: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1d1178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d117c: 0x1420003f  bnez        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x1D117Cu;
    {
        const bool branch_taken_0x1d117c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D117Cu;
        // 0x1d1180: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d117c) {
            ctx->pc = 0x1D127Cu;
            goto label_1d127c;
        }
    }
    ctx->pc = 0x1D1184u;
    // 0x1d1184: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d1184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1188: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1d1188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1d118c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1d118cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d1190: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d1190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d1194: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1d1194u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d1198: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1198u;
    {
        const bool branch_taken_0x1d1198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1198u;
        // 0x1d119c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1198) {
            ctx->pc = 0x1D11A8u;
            goto label_1d11a8;
        }
    }
    ctx->pc = 0x1D11A0u;
    // 0x1d11a0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1D11A0u;
    {
        const bool branch_taken_0x1d11a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11A0u;
        // 0x1d11a4: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11a0) {
            ctx->pc = 0x1D127Cu;
            goto label_1d127c;
        }
    }
    ctx->pc = 0x1D11A8u;
label_1d11a8:
    // 0x1d11a8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1D11A8u;
    SET_GPR_U32(ctx, 31, 0x1D11B0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1D11A8u, 0x1D11B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11B0u;
label_1d11b0:
    // 0x1d11b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d11b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11b4: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D11B4u;
    {
        const bool branch_taken_0x1d11b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11B4u;
        // 0x1d11b8: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11b4) {
            ctx->pc = 0x1D11D8u;
            goto label_1d11d8;
        }
    }
    ctx->pc = 0x1D11BCu;
    // 0x1d11bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d11bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d11c0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1d11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1d11c4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1d11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d11c8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1D11C8u;
    SET_GPR_U32(ctx, 31, 0x1D11D0u);
    ctx->pc = 0x1D11CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D11C8u;
    // 0x1d11cc: 0x24a53480  addiu       $a1, $a1, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1D11C8u, 0x1D11D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11D0u;
label_1d11d0:
    // 0x1d11d0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1D11D0u;
    SET_GPR_U32(ctx, 31, 0x1D11D8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1D11D0u, 0x1D11D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11D8u;
label_1d11d8:
    // 0x1d11d8: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D11D8u;
    {
        const bool branch_taken_0x1d11d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d11d8) {
            ctx->pc = 0x1D1234u;
            goto label_1d1234;
        }
    }
    ctx->pc = 0x1D11E0u;
    // 0x1d11e0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1d11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1d11e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d11e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d11e8: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x1d11e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1d11ec: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1d11ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1d11f0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d11f4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1d11f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1d11f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1d11f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1d11fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d1200: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1D1200u;
    SET_GPR_U32(ctx, 31, 0x1D1208u);
    ctx->pc = 0x1D1204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1200u;
    // 0x1d1204: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1D1200u, 0x1D1208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1208u;
label_1d1208:
    // 0x1d1208: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d1208u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d120c: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D120Cu;
    {
        const bool branch_taken_0x1d120c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D120Cu;
        // 0x1d1210: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d120c) {
            ctx->pc = 0x1D1230u;
            goto label_1d1230;
        }
    }
    ctx->pc = 0x1D1214u;
    // 0x1d1214: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d1214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d1218: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1d1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1d121c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1d121cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d1220: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1D1220u;
    SET_GPR_U32(ctx, 31, 0x1D1228u);
    ctx->pc = 0x1D1224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1220u;
    // 0x1d1224: 0x24a53480  addiu       $a1, $a1, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1D1220u, 0x1D1228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1228u;
label_1d1228:
    // 0x1d1228: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1D1228u;
    SET_GPR_U32(ctx, 31, 0x1D1230u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1D1228u, 0x1D1230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1230u;
label_1d1230:
    // 0x1d1230: 0xae34000c  sw          $s4, 0xC($s1)
    ctx->pc = 0x1d1230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
label_1d1234:
    // 0x1d1234: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d1234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d1238: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d123c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d123cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d1240: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d1240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1244: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1d1244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1d1248: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1d1248u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d124c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D124Cu;
    {
        const bool branch_taken_0x1d124c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D124Cu;
        // 0x1d1250: 0x27a2006c  addiu       $v0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d124c) {
            ctx->pc = 0x1D1258u;
            goto label_1d1258;
        }
    }
    ctx->pc = 0x1D1254u;
    // 0x1d1254: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d1254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1258:
    // 0x1d1258: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d125c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d125cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d1260: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1d1260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1264: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1D1264u;
    SET_GPR_U32(ctx, 31, 0x1D126Cu);
    ctx->pc = 0x1D1268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1264u;
    // 0x1d1268: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1D1264u, 0x1D126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D126Cu;
label_1d126c:
    // 0x1d126c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d126cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1270: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d1270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1d1274: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1d1274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1278: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1d1278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_1d127c:
    // 0x1d127c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d1280: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1d1280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1d1284: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d1284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d1288: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d1288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d128c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d128cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d1290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1298: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d1298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d129c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d129cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d12a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d12a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d12a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d12a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D12A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12A8u;
        // 0x1d12ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D12A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D12B0u;
}
