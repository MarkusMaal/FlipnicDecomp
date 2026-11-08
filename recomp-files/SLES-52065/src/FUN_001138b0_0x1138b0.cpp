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

// Function: FUN_001138b0
// Address: 0x1138b0 - 0x113cc4
void FUN_001138b0_0x1138b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001138b0_0x1138b0");
#endif

    switch (ctx->pc) {
        case 0x1138d8u: goto label_1138d8;
        case 0x1138e8u: goto label_1138e8;
        case 0x113908u: goto label_113908;
        case 0x113924u: goto label_113924;
        case 0x113940u: goto label_113940;
        case 0x11395cu: goto label_11395c;
        case 0x113978u: goto label_113978;
        case 0x113994u: goto label_113994;
        case 0x1139b0u: goto label_1139b0;
        case 0x1139d4u: goto label_1139d4;
        case 0x1139e4u: goto label_1139e4;
        case 0x1139fcu: goto label_1139fc;
        case 0x113a14u: goto label_113a14;
        case 0x113a68u: goto label_113a68;
        case 0x113a78u: goto label_113a78;
        case 0x113a90u: goto label_113a90;
        case 0x113aa8u: goto label_113aa8;
        case 0x113b00u: goto label_113b00;
        case 0x113b10u: goto label_113b10;
        case 0x113b28u: goto label_113b28;
        case 0x113b40u: goto label_113b40;
        case 0x113b80u: goto label_113b80;
        case 0x113b90u: goto label_113b90;
        case 0x113ba0u: goto label_113ba0;
        case 0x113bf0u: goto label_113bf0;
        case 0x113c00u: goto label_113c00;
        case 0x113c08u: goto label_113c08;
        case 0x113c18u: goto label_113c18;
        case 0x113c20u: goto label_113c20;
        case 0x113c30u: goto label_113c30;
        case 0x113c70u: goto label_113c70;
        case 0x113c80u: goto label_113c80;
        default: break;
    }

    ctx->pc = 0x1138b0u;

    // 0x1138b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1138b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1138b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1138b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1138b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1138b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1138bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1138bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1138c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1138c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1138c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1138c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1138c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1138c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1138cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1138ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1138d0: 0xc0596a0  jal         func_165A80
    ctx->pc = 0x1138D0u;
    SET_GPR_U32(ctx, 31, 0x1138D8u);
    ctx->pc = 0x1138D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138D0u;
    // 0x1138d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x1138D0u, 0x1138D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138D8u;
label_1138d8:
    // 0x1138d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1138d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1138dc: 0x240400dc  addiu       $a0, $zero, 0xDC
    ctx->pc = 0x1138dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1138e0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1138E0u;
    SET_GPR_U32(ctx, 31, 0x1138E8u);
    ctx->pc = 0x1138E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138E0u;
    // 0x1138e4: 0xae0202a4  sw          $v0, 0x2A4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1138E0u, 0x1138E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138E8u;
label_1138e8:
    // 0x1138e8: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x1138e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x1138ec: 0x3c060011  lui         $a2, 0x11
    ctx->pc = 0x1138ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17 << 16));
    // 0x1138f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1138f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138f4: 0x24a53d40  addiu       $a1, $a1, 0x3D40
    ctx->pc = 0x1138f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15680));
    // 0x1138f8: 0x24c63cd0  addiu       $a2, $a2, 0x3CD0
    ctx->pc = 0x1138f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15568));
    // 0x1138fc: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1138fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x113900: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x113900u;
    SET_GPR_U32(ctx, 31, 0x113908u);
    ctx->pc = 0x113904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113900u;
    // 0x113904: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x113900u, 0x113908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113908u;
label_113908:
    // 0x113908: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x113908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
    // 0x11390c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x11390cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x113910: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x113910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113914: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x113914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x113918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x113918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11391c: 0xc0583b8  jal         func_160EE0
    ctx->pc = 0x11391Cu;
    SET_GPR_U32(ctx, 31, 0x113924u);
    ctx->pc = 0x113920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11391Cu;
    // 0x113920: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x11391Cu, 0x113924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113924u;
label_113924:
    // 0x113924: 0xae02023c  sw          $v0, 0x23C($s0)
    ctx->pc = 0x113924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
    // 0x113928: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x113928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11392c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113930: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x113930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x113934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x113934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113938: 0xc0583b8  jal         func_160EE0
    ctx->pc = 0x113938u;
    SET_GPR_U32(ctx, 31, 0x113940u);
    ctx->pc = 0x11393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113938u;
    // 0x11393c: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x113938u, 0x113940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113940u;
label_113940:
    // 0x113940: 0xae020240  sw          $v0, 0x240($s0)
    ctx->pc = 0x113940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
    // 0x113944: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x113944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x113948: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x113948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11394c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x11394cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x113950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x113950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113954: 0xc0583b8  jal         func_160EE0
    ctx->pc = 0x113954u;
    SET_GPR_U32(ctx, 31, 0x11395Cu);
    ctx->pc = 0x113958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113954u;
    // 0x113958: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x113954u, 0x11395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11395Cu;
label_11395c:
    // 0x11395c: 0xae020244  sw          $v0, 0x244($s0)
    ctx->pc = 0x11395cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 2));
    // 0x113960: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x113960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x113964: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x113964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113968: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x113968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x11396c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11396cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113970: 0xc0583b8  jal         func_160EE0
    ctx->pc = 0x113970u;
    SET_GPR_U32(ctx, 31, 0x113978u);
    ctx->pc = 0x113974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113970u;
    // 0x113974: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x113970u, 0x113978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113978u;
label_113978:
    // 0x113978: 0xae020248  sw          $v0, 0x248($s0)
    ctx->pc = 0x113978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 2));
    // 0x11397c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x11397cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x113980: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x113980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113984: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x113984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x113988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x113988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11398c: 0xc0583b8  jal         func_160EE0
    ctx->pc = 0x11398Cu;
    SET_GPR_U32(ctx, 31, 0x113994u);
    ctx->pc = 0x113990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11398Cu;
    // 0x113990: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x11398Cu, 0x113994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113994u;
label_113994:
    // 0x113994: 0xae02024c  sw          $v0, 0x24C($s0)
    ctx->pc = 0x113994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 2));
    // 0x113998: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x113998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x11399c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1139a0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1139a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1139a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1139a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139a8: 0xc0583b8  jal         func_160EE0
    ctx->pc = 0x1139A8u;
    SET_GPR_U32(ctx, 31, 0x1139B0u);
    ctx->pc = 0x1139ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139A8u;
    // 0x1139ac: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x1139A8u, 0x1139B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139B0u;
label_1139b0:
    // 0x1139b0: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x1139b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x1139b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1139b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1139b8: 0x8e14023c  lw          $s4, 0x23C($s0)
    ctx->pc = 0x1139b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x1139bc: 0x24a5e3a8  addiu       $a1, $a1, -0x1C58
    ctx->pc = 0x1139bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960040));
    // 0x1139c0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1139c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1139c4: 0x24070089  addiu       $a3, $zero, 0x89
    ctx->pc = 0x1139c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1139c8: 0x8e130220  lw          $s3, 0x220($s0)
    ctx->pc = 0x1139c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1139cc: 0xc057090  jal         func_15C240
    ctx->pc = 0x1139CCu;
    SET_GPR_U32(ctx, 31, 0x1139D4u);
    ctx->pc = 0x1139D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139CCu;
    // 0x1139d0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C240u, 0x1139CCu, 0x1139D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139D4u;
label_1139d4:
    // 0x1139d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1139d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139d8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1139d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1139dc: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1139DCu;
    SET_GPR_U32(ctx, 31, 0x1139E4u);
    ctx->pc = 0x1139E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139DCu;
    // 0x1139e0: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1139DCu, 0x1139E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139E4u;
label_1139e4:
    // 0x1139e4: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1139e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1139e8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1139e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1139ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1139ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1139f0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1139F0u;
    {
        const bool branch_taken_0x1139f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1139F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139F0u;
        // 0x1139f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139f0) {
            ctx->pc = 0x113A40u;
            goto label_113a40;
        }
    }
    ctx->pc = 0x1139F8u;
    // 0x1139f8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1139f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1139fc:
    // 0x1139fc: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1139fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113a00: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113a04: 0x24a5e3a8  addiu       $a1, $a1, -0x1C58
    ctx->pc = 0x113a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960040));
    // 0x113a08: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x113a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a0c: 0xc05704c  jal         func_15C130
    ctx->pc = 0x113A0Cu;
    SET_GPR_U32(ctx, 31, 0x113A14u);
    ctx->pc = 0x113A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A0Cu;
    // 0x113a10: 0x24080089  addiu       $t0, $zero, 0x89 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x113A0Cu, 0x113A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A14u;
label_113a14:
    // 0x113a14: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x113a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x113a18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x113a1c: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x113a1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x113a20: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x113a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x113a24: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x113a24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x113a28: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x113a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x113a2c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x113a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x113a30: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x113a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113a34: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x113a34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x113a38: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x113A38u;
    {
        const bool branch_taken_0x113a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A38u;
        // 0x113a3c: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a38) {
            ctx->pc = 0x1139FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1139fc;
        }
    }
    ctx->pc = 0x113A40u;
label_113a40:
    // 0x113a40: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x113a40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x113a44: 0x8e140244  lw          $s4, 0x244($s0)
    ctx->pc = 0x113a44u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x113a48: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113a4c: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113a50: 0x24a5e3a8  addiu       $a1, $a1, -0x1C58
    ctx->pc = 0x113a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960040));
    // 0x113a54: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x113a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113a58: 0x24070089  addiu       $a3, $zero, 0x89
    ctx->pc = 0x113a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x113a5c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x113a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a60: 0xc057090  jal         func_15C240
    ctx->pc = 0x113A60u;
    SET_GPR_U32(ctx, 31, 0x113A68u);
    ctx->pc = 0x113A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A60u;
    // 0x113a64: 0x24530044  addiu       $s3, $v0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C240u, 0x113A60u, 0x113A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A68u;
label_113a68:
    // 0x113a68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x113a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a6c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x113a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x113a70: 0xc040168  jal         func_1005A0
    ctx->pc = 0x113A70u;
    SET_GPR_U32(ctx, 31, 0x113A78u);
    ctx->pc = 0x113A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A70u;
    // 0x113a74: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x113A70u, 0x113A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A78u;
label_113a78:
    // 0x113a78: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x113a78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x113a7c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x113a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x113a80: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x113a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113a84: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x113A84u;
    {
        const bool branch_taken_0x113a84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A84u;
        // 0x113a88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a84) {
            ctx->pc = 0x113AD4u;
            goto label_113ad4;
        }
    }
    ctx->pc = 0x113A8Cu;
    // 0x113a8c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x113a8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113a90:
    // 0x113a90: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x113a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113a94: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113a98: 0x24a5e3a8  addiu       $a1, $a1, -0x1C58
    ctx->pc = 0x113a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960040));
    // 0x113a9c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x113a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113aa0: 0xc05704c  jal         func_15C130
    ctx->pc = 0x113AA0u;
    SET_GPR_U32(ctx, 31, 0x113AA8u);
    ctx->pc = 0x113AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113AA0u;
    // 0x113aa4: 0x24080089  addiu       $t0, $zero, 0x89 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x113AA0u, 0x113AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113AA8u;
label_113aa8:
    // 0x113aa8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x113aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x113aac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113aacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x113ab0: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x113ab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x113ab4: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x113ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x113ab8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x113ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x113abc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x113abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x113ac0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x113ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x113ac4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x113ac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113ac8: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x113ac8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x113acc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x113ACCu;
    {
        const bool branch_taken_0x113acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113ACCu;
        // 0x113ad0: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113acc) {
            ctx->pc = 0x113A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113a90;
        }
    }
    ctx->pc = 0x113AD4u;
label_113ad4:
    // 0x113ad4: 0x0  nop
    ctx->pc = 0x113ad4u;
    // NOP
    // 0x113ad8: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x113ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x113adc: 0x8e14024c  lw          $s4, 0x24C($s0)
    ctx->pc = 0x113adcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x113ae0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113ae4: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113ae8: 0x24a5e3a8  addiu       $a1, $a1, -0x1C58
    ctx->pc = 0x113ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960040));
    // 0x113aec: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x113aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113af0: 0x24070089  addiu       $a3, $zero, 0x89
    ctx->pc = 0x113af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x113af4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x113af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113af8: 0xc057090  jal         func_15C240
    ctx->pc = 0x113AF8u;
    SET_GPR_U32(ctx, 31, 0x113B00u);
    ctx->pc = 0x113AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113AF8u;
    // 0x113afc: 0x24530088  addiu       $s3, $v0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C240u, 0x113AF8u, 0x113B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B00u;
label_113b00:
    // 0x113b00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x113b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b04: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x113b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x113b08: 0xc040168  jal         func_1005A0
    ctx->pc = 0x113B08u;
    SET_GPR_U32(ctx, 31, 0x113B10u);
    ctx->pc = 0x113B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B08u;
    // 0x113b0c: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x113B08u, 0x113B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B10u;
label_113b10:
    // 0x113b10: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x113b10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x113b14: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x113b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x113b18: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x113b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113b1c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x113B1Cu;
    {
        const bool branch_taken_0x113b1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B1Cu;
        // 0x113b20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b1c) {
            ctx->pc = 0x113B6Cu;
            goto label_113b6c;
        }
    }
    ctx->pc = 0x113B24u;
    // 0x113b24: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x113b24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113b28:
    // 0x113b28: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x113b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113b2c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113b30: 0x24a5e3a8  addiu       $a1, $a1, -0x1C58
    ctx->pc = 0x113b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960040));
    // 0x113b34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x113b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b38: 0xc05704c  jal         func_15C130
    ctx->pc = 0x113B38u;
    SET_GPR_U32(ctx, 31, 0x113B40u);
    ctx->pc = 0x113B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B38u;
    // 0x113b3c: 0x24080089  addiu       $t0, $zero, 0x89 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x113B38u, 0x113B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B40u;
label_113b40:
    // 0x113b40: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x113b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x113b44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x113b48: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x113b48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x113b4c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x113b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x113b50: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x113b50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x113b54: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x113b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x113b58: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x113b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x113b5c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x113b5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113b60: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x113b60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x113b64: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x113B64u;
    {
        const bool branch_taken_0x113b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B64u;
        // 0x113b68: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b64) {
            ctx->pc = 0x113B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113b28;
        }
    }
    ctx->pc = 0x113B6Cu;
label_113b6c:
    // 0x113b6c: 0x0  nop
    ctx->pc = 0x113b6cu;
    // NOP
    // 0x113b70: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x113b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x113b74: 0x2484e368  addiu       $a0, $a0, -0x1C98
    ctx->pc = 0x113b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959976));
    // 0x113b78: 0xc046458  jal         func_119160
    ctx->pc = 0x113B78u;
    SET_GPR_U32(ctx, 31, 0x113B80u);
    ctx->pc = 0x113B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B78u;
    // 0x113b7c: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x113B78u, 0x113B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B80u;
label_113b80:
    // 0x113b80: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x113b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x113b84: 0xae020224  sw          $v0, 0x224($s0)
    ctx->pc = 0x113b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
    // 0x113b88: 0xc046458  jal         func_119160
    ctx->pc = 0x113B88u;
    SET_GPR_U32(ctx, 31, 0x113B90u);
    ctx->pc = 0x113B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B88u;
    // 0x113b8c: 0x2484e378  addiu       $a0, $a0, -0x1C88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x113B88u, 0x113B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B90u;
label_113b90:
    // 0x113b90: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x113b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x113b94: 0xae020228  sw          $v0, 0x228($s0)
    ctx->pc = 0x113b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 2));
    // 0x113b98: 0xc046458  jal         func_119160
    ctx->pc = 0x113B98u;
    SET_GPR_U32(ctx, 31, 0x113BA0u);
    ctx->pc = 0x113B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B98u;
    // 0x113b9c: 0x2484e4c0  addiu       $a0, $a0, -0x1B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x113B98u, 0x113BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BA0u;
label_113ba0:
    // 0x113ba0: 0xae02022c  sw          $v0, 0x22C($s0)
    ctx->pc = 0x113ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
    // 0x113ba4: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x113ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x113ba8: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113bac: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x113bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x113bb0: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x113bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x113bb4: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113bb8: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x113bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x113bbc: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x113bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x113bc0: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113bc4: 0xac430094  sw          $v1, 0x94($v0)
    ctx->pc = 0x113bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 3));
    // 0x113bc8: 0x8e030228  lw          $v1, 0x228($s0)
    ctx->pc = 0x113bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x113bcc: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113bd0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x113bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x113bd4: 0x8e030228  lw          $v1, 0x228($s0)
    ctx->pc = 0x113bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x113bd8: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113bdc: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x113bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x113be0: 0x8e030228  lw          $v1, 0x228($s0)
    ctx->pc = 0x113be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x113be4: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113be8: 0xc064228  jal         func_1908A0
    ctx->pc = 0x113BE8u;
    SET_GPR_U32(ctx, 31, 0x113BF0u);
    ctx->pc = 0x113BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BE8u;
    // 0x113bec: 0xac430098  sw          $v1, 0x98($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x113BE8u, 0x113BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BF0u;
label_113bf0:
    // 0x113bf0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x113bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113bf8: 0xc0642e0  jal         func_190B80
    ctx->pc = 0x113BF8u;
    SET_GPR_U32(ctx, 31, 0x113C00u);
    ctx->pc = 0x113BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BF8u;
    // 0x113bfc: 0x24a5e4d0  addiu       $a1, $a1, -0x1B30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x113BF8u, 0x113C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C00u;
label_113c00:
    // 0x113c00: 0xc064228  jal         func_1908A0
    ctx->pc = 0x113C00u;
    SET_GPR_U32(ctx, 31, 0x113C08u);
    ctx->pc = 0x113C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C00u;
    // 0x113c04: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x113C00u, 0x113C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C08u;
label_113c08:
    // 0x113c08: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x113c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c10: 0xc0642e0  jal         func_190B80
    ctx->pc = 0x113C10u;
    SET_GPR_U32(ctx, 31, 0x113C18u);
    ctx->pc = 0x113C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C10u;
    // 0x113c14: 0x24a5e4d8  addiu       $a1, $a1, -0x1B28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x113C10u, 0x113C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C18u;
label_113c18:
    // 0x113c18: 0xc064228  jal         func_1908A0
    ctx->pc = 0x113C18u;
    SET_GPR_U32(ctx, 31, 0x113C20u);
    ctx->pc = 0x113C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C18u;
    // 0x113c1c: 0xae020234  sw          $v0, 0x234($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x113C18u, 0x113C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C20u;
label_113c20:
    // 0x113c20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113c24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x113c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c28: 0xc0642e0  jal         func_190B80
    ctx->pc = 0x113C28u;
    SET_GPR_U32(ctx, 31, 0x113C30u);
    ctx->pc = 0x113C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C28u;
    // 0x113c2c: 0x24a5e4e0  addiu       $a1, $a1, -0x1B20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x113C28u, 0x113C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C30u;
label_113c30:
    // 0x113c30: 0xae020238  sw          $v0, 0x238($s0)
    ctx->pc = 0x113c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
    // 0x113c34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x113c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113c38: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113c3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x113c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113c40: 0xac50001c  sw          $s0, 0x1C($v0)
    ctx->pc = 0x113c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 16));
    // 0x113c44: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113c48: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x113c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x113c4c: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113c50: 0xac500060  sw          $s0, 0x60($v0)
    ctx->pc = 0x113c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 16));
    // 0x113c54: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113c58: 0xac440064  sw          $a0, 0x64($v0)
    ctx->pc = 0x113c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
    // 0x113c5c: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113c60: 0xac5000a4  sw          $s0, 0xA4($v0)
    ctx->pc = 0x113c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 16));
    // 0x113c64: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113c68: 0xc064228  jal         func_1908A0
    ctx->pc = 0x113C68u;
    SET_GPR_U32(ctx, 31, 0x113C70u);
    ctx->pc = 0x113C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C68u;
    // 0x113c6c: 0xac4300a8  sw          $v1, 0xA8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x113C68u, 0x113C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C70u;
label_113c70:
    // 0x113c70: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113c74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x113c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c78: 0xc0642e0  jal         func_190B80
    ctx->pc = 0x113C78u;
    SET_GPR_U32(ctx, 31, 0x113C80u);
    ctx->pc = 0x113C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C78u;
    // 0x113c7c: 0x24a5e4e8  addiu       $a1, $a1, -0x1B18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x113C78u, 0x113C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C80u;
label_113c80:
    // 0x113c80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x113c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x113c84: 0xaf828240  sw          $v0, -0x7DC0($gp)
    ctx->pc = 0x113c84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935104), GPR_U32(ctx, 2));
    // 0x113c88: 0xaf838248  sw          $v1, -0x7DB8($gp)
    ctx->pc = 0x113c88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935112), GPR_U32(ctx, 3));
    // 0x113c8c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x113c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x113c90: 0xaf808244  sw          $zero, -0x7DBC($gp)
    ctx->pc = 0x113c90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935108), GPR_U32(ctx, 0));
    // 0x113c94: 0xaf83824c  sw          $v1, -0x7DB4($gp)
    ctx->pc = 0x113c94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935116), GPR_U32(ctx, 3));
    // 0x113c98: 0xa3808250  sb          $zero, -0x7DB0($gp)
    ctx->pc = 0x113c98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935120), (uint8_t)GPR_U32(ctx, 0));
    // 0x113c9c: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x113c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x113ca0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x113ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113ca4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x113ca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113ca8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x113ca8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113cac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x113cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113cb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x113cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x113cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x113cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x113CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CBCu;
        // 0x113cc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113CC4u;
}
