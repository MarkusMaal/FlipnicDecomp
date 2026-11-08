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

// Function: FUN_00144920
// Address: 0x144920 - 0x1449f4
void FUN_00144920_0x144920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144920_0x144920");
#endif

    switch (ctx->pc) {
        case 0x144920u: goto label_144920;
        case 0x144924u: goto label_144924;
        case 0x144928u: goto label_144928;
        case 0x14492cu: goto label_14492c;
        case 0x144930u: goto label_144930;
        case 0x144934u: goto label_144934;
        case 0x144938u: goto label_144938;
        case 0x14493cu: goto label_14493c;
        case 0x144940u: goto label_144940;
        case 0x144944u: goto label_144944;
        case 0x144948u: goto label_144948;
        case 0x14494cu: goto label_14494c;
        case 0x144950u: goto label_144950;
        case 0x144954u: goto label_144954;
        case 0x144958u: goto label_144958;
        case 0x14495cu: goto label_14495c;
        case 0x144960u: goto label_144960;
        case 0x144964u: goto label_144964;
        case 0x144968u: goto label_144968;
        case 0x14496cu: goto label_14496c;
        case 0x144970u: goto label_144970;
        case 0x144974u: goto label_144974;
        case 0x144978u: goto label_144978;
        case 0x14497cu: goto label_14497c;
        case 0x144980u: goto label_144980;
        case 0x144984u: goto label_144984;
        case 0x144988u: goto label_144988;
        case 0x14498cu: goto label_14498c;
        case 0x144990u: goto label_144990;
        case 0x144994u: goto label_144994;
        case 0x144998u: goto label_144998;
        case 0x14499cu: goto label_14499c;
        case 0x1449a0u: goto label_1449a0;
        case 0x1449a4u: goto label_1449a4;
        case 0x1449a8u: goto label_1449a8;
        case 0x1449acu: goto label_1449ac;
        case 0x1449b0u: goto label_1449b0;
        case 0x1449b4u: goto label_1449b4;
        case 0x1449b8u: goto label_1449b8;
        case 0x1449bcu: goto label_1449bc;
        case 0x1449c0u: goto label_1449c0;
        case 0x1449c4u: goto label_1449c4;
        case 0x1449c8u: goto label_1449c8;
        case 0x1449ccu: goto label_1449cc;
        case 0x1449d0u: goto label_1449d0;
        case 0x1449d4u: goto label_1449d4;
        case 0x1449d8u: goto label_1449d8;
        case 0x1449dcu: goto label_1449dc;
        case 0x1449e0u: goto label_1449e0;
        case 0x1449e4u: goto label_1449e4;
        case 0x1449e8u: goto label_1449e8;
        case 0x1449ecu: goto label_1449ec;
        case 0x1449f0u: goto label_1449f0;
        default: break;
    }

    ctx->pc = 0x144920u;

label_144920:
    // 0x144920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x144920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_144924:
    // 0x144924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x144924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_144928:
    // 0x144928: 0x27a20034  addiu       $v0, $sp, 0x34
    ctx->pc = 0x144928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_14492c:
    // 0x14492c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14492cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_144930:
    // 0x144930: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x144930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_144934:
    // 0x144934: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_144938:
    // 0x144938: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14493c:
    // 0x14493c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x14493cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_144940:
    // 0x144940: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x144940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_144944:
    // 0x144944: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x144944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_144948:
    // 0x144948: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x144948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_14494c:
    // 0x14494c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14494cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_144950:
    // 0x144950: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x144950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_144954:
    // 0x144954: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x144954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_144958:
    // 0x144958: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x144958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_14495c:
    // 0x14495c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x14495cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_144960:
    // 0x144960: 0xc0401bc  jal         func_1006F0
label_144964:
    if (ctx->pc == 0x144964u) {
        ctx->pc = 0x144964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144960u;
        // 0x144964: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144968u;
        goto label_144968;
    }
    ctx->pc = 0x144960u;
    SET_GPR_U32(ctx, 31, 0x144968u);
    ctx->pc = 0x144964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144960u;
    // 0x144964: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x144960u, 0x144968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144968u;
label_144968:
    // 0x144968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14496c:
    if (ctx->pc == 0x14496Cu) {
        ctx->pc = 0x14496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144968u;
        // 0x14496c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144970u;
        goto label_144970;
    }
    ctx->pc = 0x144968u;
    {
        const bool branch_taken_0x144968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144968u;
        // 0x14496c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144968) {
            ctx->pc = 0x144978u;
            goto label_144978;
        }
    }
    ctx->pc = 0x144970u;
label_144970:
    // 0x144970: 0xc04cfbc  jal         func_133EF0
label_144974:
    if (ctx->pc == 0x144974u) {
        ctx->pc = 0x144978u;
        goto label_144978;
    }
    ctx->pc = 0x144970u;
    SET_GPR_U32(ctx, 31, 0x144978u);
    ctx->pc = 0x133EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133EF0u, 0x144970u, 0x144978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144978u;
label_144978:
    // 0x144978: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x144978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_14497c:
    // 0x14497c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x14497cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_144980:
    // 0x144980: 0xc04d074  jal         func_1341D0
label_144984:
    if (ctx->pc == 0x144984u) {
        ctx->pc = 0x144984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144980u;
        // 0x144984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144988u;
        goto label_144988;
    }
    ctx->pc = 0x144980u;
    SET_GPR_U32(ctx, 31, 0x144988u);
    ctx->pc = 0x144984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144980u;
    // 0x144984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1341D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341D0u, 0x144980u, 0x144988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144988u;
label_144988:
    // 0x144988: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_14498c:
    if (ctx->pc == 0x14498Cu) {
        ctx->pc = 0x144990u;
        goto label_144990;
    }
    ctx->pc = 0x144988u;
    {
        const bool branch_taken_0x144988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144988) {
            ctx->pc = 0x1449B8u;
            goto label_1449b8;
        }
    }
    ctx->pc = 0x144990u;
label_144990:
    // 0x144990: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x144990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_144994:
    // 0x144994: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_144998:
    if (ctx->pc == 0x144998u) {
        ctx->pc = 0x144998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144994u;
        // 0x144998: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14499Cu;
        goto label_14499c;
    }
    ctx->pc = 0x144994u;
    {
        const bool branch_taken_0x144994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144994u;
        // 0x144998: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144994) {
            ctx->pc = 0x1449B0u;
            goto label_1449b0;
        }
    }
    ctx->pc = 0x14499Cu;
label_14499c:
    // 0x14499c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14499cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1449a0:
    // 0x1449a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1449a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1449a4:
    // 0x1449a4: 0x320f809  jalr        $t9
label_1449a8:
    if (ctx->pc == 0x1449A8u) {
        ctx->pc = 0x1449A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449A4u;
        // 0x1449a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1449ACu;
        goto label_1449ac;
    }
    ctx->pc = 0x1449A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1449ACu);
        ctx->pc = 0x1449A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449A4u;
        // 0x1449a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1449A4u, 0x1449ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1449ACu;
label_1449ac:
    // 0x1449ac: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1449acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1449b0:
    // 0x1449b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1449b4:
    if (ctx->pc == 0x1449B4u) {
        ctx->pc = 0x1449B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449B0u;
        // 0x1449b4: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1449B8u;
        goto label_1449b8;
    }
    ctx->pc = 0x1449B0u;
    {
        const bool branch_taken_0x1449b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1449B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449B0u;
        // 0x1449b4: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449b0) {
            ctx->pc = 0x1449DCu;
            goto label_1449dc;
        }
    }
    ctx->pc = 0x1449B8u;
label_1449b8:
    // 0x1449b8: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1449b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1449bc:
    // 0x1449bc: 0xc04c4e8  jal         func_1313A0
label_1449c0:
    if (ctx->pc == 0x1449C0u) {
        ctx->pc = 0x1449C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449BCu;
        // 0x1449c0: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1449C4u;
        goto label_1449c4;
    }
    ctx->pc = 0x1449BCu;
    SET_GPR_U32(ctx, 31, 0x1449C4u);
    ctx->pc = 0x1449C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449BCu;
    // 0x1449c0: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313A0u, 0x1449BCu, 0x1449C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449C4u;
label_1449c4:
    // 0x1449c4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1449c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1449c8:
    // 0x1449c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1449c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1449cc:
    // 0x1449cc: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1449ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1449d0:
    // 0x1449d0: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1449d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1449d4:
    // 0x1449d4: 0xc04c93c  jal         func_1324F0
label_1449d8:
    if (ctx->pc == 0x1449D8u) {
        ctx->pc = 0x1449D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449D4u;
        // 0x1449d8: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1449DCu;
        goto label_1449dc;
    }
    ctx->pc = 0x1449D4u;
    SET_GPR_U32(ctx, 31, 0x1449DCu);
    ctx->pc = 0x1449D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449D4u;
    // 0x1449d8: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324F0u, 0x1449D4u, 0x1449DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449DCu;
label_1449dc:
    // 0x1449dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1449dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1449e0:
    // 0x1449e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1449e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1449e4:
    // 0x1449e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1449e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1449e8:
    // 0x1449e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1449e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1449ec:
    // 0x1449ec: 0x3e00008  jr          $ra
label_1449f0:
    if (ctx->pc == 0x1449F0u) {
        ctx->pc = 0x1449F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449ECu;
        // 0x1449f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1449F4u;
        goto label_fallthrough_0x1449ec;
    }
    ctx->pc = 0x1449ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1449F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449ECu;
        // 0x1449f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1449ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1449ec:
    ctx->pc = 0x1449F4u;
}
