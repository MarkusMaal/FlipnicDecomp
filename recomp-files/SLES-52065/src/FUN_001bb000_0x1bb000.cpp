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

// Function: FUN_001bb000
// Address: 0x1bb000 - 0x1bb264
void FUN_001bb000_0x1bb000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bb000_0x1bb000");
#endif

    switch (ctx->pc) {
        case 0x1bb050u: goto label_1bb050;
        case 0x1bb058u: goto label_1bb058;
        case 0x1bb110u: goto label_1bb110;
        case 0x1bb118u: goto label_1bb118;
        case 0x1bb144u: goto label_1bb144;
        case 0x1bb168u: goto label_1bb168;
        case 0x1bb170u: goto label_1bb170;
        case 0x1bb19cu: goto label_1bb19c;
        case 0x1bb1bcu: goto label_1bb1bc;
        case 0x1bb1d4u: goto label_1bb1d4;
        case 0x1bb200u: goto label_1bb200;
        case 0x1bb210u: goto label_1bb210;
        case 0x1bb228u: goto label_1bb228;
        case 0x1bb244u: goto label_1bb244;
        default: break;
    }

    ctx->pc = 0x1bb000u;

    // 0x1bb000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bb000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bb004: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bb004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bb008: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bb00c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bb010: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bb014: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bb014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb01c: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x1bb01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x1bb020: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bb020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb024: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bb024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bb028: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bb028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb02c: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1bb02cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1bb030: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BB030u;
    {
        const bool branch_taken_0x1bb030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB030u;
        // 0x1bb034: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb030) {
            ctx->pc = 0x1BB058u;
            goto label_1bb058;
        }
    }
    ctx->pc = 0x1BB038u;
    // 0x1bb038: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bb038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bb03c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bb03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bb040: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bb040u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bb044: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bb044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bb048: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BB048u;
    SET_GPR_U32(ctx, 31, 0x1BB050u);
    ctx->pc = 0x1BB04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB048u;
    // 0x1bb04c: 0x24a510c0  addiu       $a1, $a1, 0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BB048u, 0x1BB050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB050u;
label_1bb050:
    // 0x1bb050: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BB050u;
    SET_GPR_U32(ctx, 31, 0x1BB058u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BB050u, 0x1BB058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB058u;
label_1bb058:
    // 0x1bb058: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bb058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb05c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb060: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bb060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb064: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1bb064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bb068: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x1bb068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x1bb06c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bb06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bb070: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1bb070u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bb074: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB074u;
    {
        const bool branch_taken_0x1bb074 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB074u;
        // 0x1bb078: 0x27a20058  addiu       $v0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb074) {
            ctx->pc = 0x1BB088u;
            goto label_1bb088;
        }
    }
    ctx->pc = 0x1BB07Cu;
    // 0x1bb07c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB07Cu;
    {
        const bool branch_taken_0x1bb07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB07Cu;
        // 0x1bb080: 0x27a2005c  addiu       $v0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb07c) {
            ctx->pc = 0x1BB088u;
            goto label_1bb088;
        }
    }
    ctx->pc = 0x1BB084u;
    // 0x1bb084: 0x27a20058  addiu       $v0, $sp, 0x58
    ctx->pc = 0x1bb084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1bb088:
    // 0x1bb088: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1bb088u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb08c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bb08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb090: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bb090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb094: 0x16620052  bne         $s3, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1BB094u;
    {
        const bool branch_taken_0x1bb094 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb094) {
            ctx->pc = 0x1BB1E0u;
            goto label_1bb1e0;
        }
    }
    ctx->pc = 0x1BB09Cu;
    // 0x1bb09c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bb09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bb0a0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1BB0A0u;
    {
        const bool branch_taken_0x1bb0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0a0) {
            ctx->pc = 0x1BB1E0u;
            goto label_1bb1e0;
        }
    }
    ctx->pc = 0x1BB0A8u;
    // 0x1bb0a8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1bb0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb0ac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB0ACu;
    {
        const bool branch_taken_0x1bb0ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bb0ac) {
            ctx->pc = 0x1BB0BCu;
            goto label_1bb0bc;
        }
    }
    ctx->pc = 0x1BB0B4u;
    // 0x1bb0b4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1BB0B4u;
    {
        const bool branch_taken_0x1bb0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0B4u;
        // 0x1bb0b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0b4) {
            ctx->pc = 0x1BB248u;
            goto label_1bb248;
        }
    }
    ctx->pc = 0x1BB0BCu;
label_1bb0bc:
    // 0x1bb0bc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bb0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bb0c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB0C0u;
    {
        const bool branch_taken_0x1bb0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0c0) {
            ctx->pc = 0x1BB0E0u;
            goto label_1bb0e0;
        }
    }
    ctx->pc = 0x1BB0C8u;
    // 0x1bb0c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB0C8u;
    {
        const bool branch_taken_0x1bb0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0c8) {
            ctx->pc = 0x1BB0D8u;
            goto label_1bb0d8;
        }
    }
    ctx->pc = 0x1BB0D0u;
    // 0x1bb0d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB0D0u;
    {
        const bool branch_taken_0x1bb0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0D0u;
        // 0x1bb0d4: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0d0) {
            ctx->pc = 0x1BB0E0u;
            goto label_1bb0e0;
        }
    }
    ctx->pc = 0x1BB0D8u;
label_1bb0d8:
    // 0x1bb0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb0dc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bb0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1bb0e0:
    // 0x1bb0e0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bb0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bb0e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bb0e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bb0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1bb0ec: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x1bb0ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1bb0f0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1bb0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1bb0f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb0f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB0F8u;
    {
        const bool branch_taken_0x1bb0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0f8) {
            ctx->pc = 0x1BB118u;
            goto label_1bb118;
        }
    }
    ctx->pc = 0x1BB100u;
    // 0x1bb100: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB100u;
    {
        const bool branch_taken_0x1bb100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb100) {
            ctx->pc = 0x1BB110u;
            goto label_1bb110;
        }
    }
    ctx->pc = 0x1BB108u;
    // 0x1bb108: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB108u;
    SET_GPR_U32(ctx, 31, 0x1BB110u);
    ctx->pc = 0x1BB10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB108u;
    // 0x1bb10c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB108u, 0x1BB110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB110u;
label_1bb110:
    // 0x1bb110: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB110u;
    SET_GPR_U32(ctx, 31, 0x1BB118u);
    ctx->pc = 0x1BB114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB110u;
    // 0x1bb114: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB110u, 0x1BB118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB118u;
label_1bb118:
    // 0x1bb118: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1bb118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb11c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bb11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bb120: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB120u;
    {
        const bool branch_taken_0x1bb120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB120u;
        // 0x1bb124: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb120) {
            ctx->pc = 0x1BB13Cu;
            goto label_1bb13c;
        }
    }
    ctx->pc = 0x1BB128u;
    // 0x1bb128: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bb128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bb12c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bb12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bb130: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1BB130u;
    {
        const bool branch_taken_0x1bb130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB130u;
        // 0x1bb134: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb130) {
            ctx->pc = 0x1BB1D8u;
            goto label_1bb1d8;
        }
    }
    ctx->pc = 0x1BB138u;
    // 0x1bb138: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1bb138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1bb13c:
    // 0x1bb13c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BB13Cu;
    SET_GPR_U32(ctx, 31, 0x1BB144u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BB13Cu, 0x1BB144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB144u;
label_1bb144:
    // 0x1bb144: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bb144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb148: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BB148u;
    {
        const bool branch_taken_0x1bb148 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb148) {
            ctx->pc = 0x1BB170u;
            goto label_1bb170;
        }
    }
    ctx->pc = 0x1BB150u;
    // 0x1bb150: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bb150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bb154: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bb154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bb158: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bb158u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bb15c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bb15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bb160: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BB160u;
    SET_GPR_U32(ctx, 31, 0x1BB168u);
    ctx->pc = 0x1BB164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB160u;
    // 0x1bb164: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BB160u, 0x1BB168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB168u;
label_1bb168:
    // 0x1bb168: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BB168u;
    SET_GPR_U32(ctx, 31, 0x1BB170u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BB168u, 0x1BB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB170u;
label_1bb170:
    // 0x1bb170: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BB170u;
    {
        const bool branch_taken_0x1bb170 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb170) {
            ctx->pc = 0x1BB1D4u;
            goto label_1bb1d4;
        }
    }
    ctx->pc = 0x1BB178u;
    // 0x1bb178: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb17c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1bb17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1bb180: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1bb180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1bb184: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bb184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1bb188: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb18c: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x1bb18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1bb190: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1bb190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1bb194: 0xc04891c  jal         func_122470
    ctx->pc = 0x1BB194u;
    SET_GPR_U32(ctx, 31, 0x1BB19Cu);
    ctx->pc = 0x1BB198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB194u;
    // 0x1bb198: 0x629823  subu        $s3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122470u, 0x1BB194u, 0x1BB19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB19Cu;
label_1bb19c:
    // 0x1bb19c: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x1bb19cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x1bb1a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb1a4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1bb1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1bb1a8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1bb1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1bb1ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1bb1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bb1b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1b4: 0xc048908  jal         func_122420
    ctx->pc = 0x1BB1B4u;
    SET_GPR_U32(ctx, 31, 0x1BB1BCu);
    ctx->pc = 0x1BB1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1B4u;
    // 0x1bb1b8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122420u, 0x1BB1B4u, 0x1BB1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1BCu;
label_1bb1bc:
    // 0x1bb1bc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1bb1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1bb1c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bb1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb1c4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1bb1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bb1c8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1bb1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1bb1cc: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1BB1CCu;
    SET_GPR_U32(ctx, 31, 0x1BB1D4u);
    ctx->pc = 0x1BB1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1CCu;
    // 0x1bb1d0: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1BB1CCu, 0x1BB1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1D4u;
label_1bb1d4:
    // 0x1bb1d4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1bb1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb1d8:
    // 0x1bb1d8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1BB1D8u;
    {
        const bool branch_taken_0x1bb1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1D8u;
        // 0x1bb1dc: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1d8) {
            ctx->pc = 0x1BB244u;
            goto label_1bb244;
        }
    }
    ctx->pc = 0x1BB1E0u;
label_1bb1e0:
    // 0x1bb1e0: 0x1651000e  bne         $s2, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BB1E0u;
    {
        const bool branch_taken_0x1bb1e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x1BB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1E0u;
        // 0x1bb1e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1e0) {
            ctx->pc = 0x1BB21Cu;
            goto label_1bb21c;
        }
    }
    ctx->pc = 0x1BB1E8u;
    // 0x1bb1e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bb1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb1f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1f8: 0xc06ef58  jal         func_1BBD60
    ctx->pc = 0x1BB1F8u;
    SET_GPR_U32(ctx, 31, 0x1BB200u);
    ctx->pc = 0x1BB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1F8u;
    // 0x1bb1fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD60u, 0x1BB1F8u, 0x1BB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB200u;
label_1bb200:
    // 0x1bb200: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bb200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb208: 0xc048afc  jal         func_122BF0
    ctx->pc = 0x1BB208u;
    SET_GPR_U32(ctx, 31, 0x1BB210u);
    ctx->pc = 0x1BB20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB208u;
    // 0x1bb20c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122BF0u, 0x1BB208u, 0x1BB210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB210u;
label_1bb210:
    // 0x1bb210: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BB210u;
    {
        const bool branch_taken_0x1bb210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB210u;
        // 0x1bb214: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb210) {
            ctx->pc = 0x1BB248u;
            goto label_1bb248;
        }
    }
    ctx->pc = 0x1BB218u;
    // 0x1bb218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bb21c:
    // 0x1bb21c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bb21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb220: 0xc048afc  jal         func_122BF0
    ctx->pc = 0x1BB220u;
    SET_GPR_U32(ctx, 31, 0x1BB228u);
    ctx->pc = 0x1BB224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB220u;
    // 0x1bb224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122BF0u, 0x1BB220u, 0x1BB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB228u;
label_1bb228:
    // 0x1bb228: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bb228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb22c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1bb22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb230: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bb230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb234: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1bb234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bb238: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bb238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bb23c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1BB23Cu;
    SET_GPR_U32(ctx, 31, 0x1BB244u);
    ctx->pc = 0x1BB240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB23Cu;
    // 0x1bb240: 0x702821  addu        $a1, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1BB23Cu, 0x1BB244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB244u;
label_1bb244:
    // 0x1bb244: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1bb244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bb248:
    // 0x1bb248: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bb248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb24c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bb24cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb250: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb25c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB25Cu;
        // 0x1bb260: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB264u;
}
